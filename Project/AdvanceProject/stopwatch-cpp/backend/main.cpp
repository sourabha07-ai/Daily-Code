// Stopwatch HTTP backend for Windows (MSYS2 UCRT64 / MinGW).
//
// Uses only the C++ standard library plus Winsock2 (bundled with Windows),
// so no third-party HTTP library has to be installed.
//
// Endpoints:
//   POST /api/stopwatch/start
//   POST /api/stopwatch/pause
//   POST /api/stopwatch/resume
//   POST /api/stopwatch/reset
//   POST /api/stopwatch/lap
//   GET  /api/stopwatch/status   -> {"state":"RUNNING","elapsedMs":123,"laps":[...]}
//
// Static files (the frontend) are served from ./frontend by default,
// or from the directory passed as the first command-line argument.

#include <winsock2.h>
#include <ws2tcpip.h>

#include <cstdio>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "Stopwatch.h"

#ifdef _MSC_VER
#pragma comment(lib, "ws2_32.lib") // MSVC only; MinGW uses -lws2_32 on the command line
#endif

namespace {

const int kPort = 8080;
Stopwatch g_stopwatch; // single shared instance: one stopwatch, one source of truth

std::string formatLaps(const std::vector<std::int64_t>& laps) {
    std::ostringstream out;
    for (size_t i = 0; i < laps.size(); ++i) {
        if (i > 0) out << ",";
        out << laps[i];
    }
    return out.str();
}

std::string statusJson(bool ok, const std::string& error) {
    std::ostringstream json;
    json << "{\"ok\":" << (ok ? "true" : "false");
    if (!error.empty()) json << ",\"error\":\"" << error << "\"";
    json << ",\"state\":\"" << Stopwatch::stateToString(g_stopwatch.getState()) << "\""
         << ",\"elapsedMs\":" << g_stopwatch.getElapsedMilliseconds()
         << ",\"laps\":[" << formatLaps(g_stopwatch.getLaps()) << "]}";
    return json.str();
}

std::string httpResponse(int code, const std::string& statusText,
                        const std::string& contentType, const std::string& body) {
    std::ostringstream res;
    res << "HTTP/1.1 " << code << " " << statusText << "\r\n"
        << "Content-Type: " << contentType << "\r\n"
        << "Content-Length: " << body.size() << "\r\n"
        << "Cache-Control: no-store\r\n"
        << "Connection: close\r\n"
        << "\r\n"
        << body;
    return res.str();
}

std::string contentTypeFor(const std::string& path) {
    if (path.size() >= 5 && path.substr(path.size() - 5) == ".html") return "text/html; charset=utf-8";
    if (path.size() >= 4 && path.substr(path.size() - 4) == ".css")  return "text/css; charset=utf-8";
    if (path.size() >= 3 && path.substr(path.size() - 3) == ".js")   return "text/javascript; charset=utf-8";
    return "text/plain";
}

// Map a URL path to a file inside the frontend directory. Returns empty string if unsafe/unknown.
std::string resolveStaticFile(const std::string& frontendDir, const std::string& urlPath) {
    if (urlPath.find("..") != std::string::npos) return ""; // no directory traversal
    if (urlPath == "/" || urlPath == "/index.html") return frontendDir + "/index.html";
    if (urlPath == "/style.css")  return frontendDir + "/style.css";
    if (urlPath == "/script.js")   return frontendDir + "/script.js";
    return "";
}

void handleClient(SOCKET client, const std::string& frontendDir) {
    std::string request;
    char buffer[4096];

    // Read until end of headers (we never need the request body).
    while (request.find("\r\n\r\n") == std::string::npos) {
        int received = recv(client, buffer, sizeof(buffer), 0);
        if (received <= 0) {
            closesocket(client);
            return;
        }
        request.append(buffer, static_cast<size_t>(received));
        if (request.size() > 65536) {
            std::string tooLarge =
                httpResponse(431, "Request Header Fields Too Large", "text/plain",
                             "Request too large");
            send(client, tooLarge.data(), static_cast<int>(tooLarge.size()), 0);
            closesocket(client);
            return;
        }
    }

    std::istringstream firstLine(request.substr(0, request.find("\r\n")));
    std::string method, path;
    firstLine >> method >> path;

    std::string response;
    bool isPost = (method == "POST");
    bool isGet = (method == "GET");

    auto methodNotAllowed = [&]() {
        response = httpResponse(405, "Method Not Allowed", "application/json",
                                "{\"ok\":false,\"error\":\"wrong HTTP method\"}");
    };

    if (method == "OPTIONS") {
        response = "HTTP/1.1 204 No Content\r\n"
                   "Access-Control-Allow-Origin: *\r\n"
                   "Access-Control-Allow-Methods: GET, POST, OPTIONS\r\n"
                   "Access-Control-Allow-Headers: Content-Type\r\n"
                   "Connection: close\r\n\r\n";
    } else if (path == "/api/stopwatch/start") {
        if (!isPost) { methodNotAllowed(); }
        else {
            bool ok = g_stopwatch.start();
            response = httpResponse(200, "OK", "application/json",
                                    statusJson(ok, ok ? "" : "stopwatch is already running"));
        }
    } else if (path == "/api/stopwatch/pause") {
        if (!isPost) { methodNotAllowed(); }
        else {
            bool ok = g_stopwatch.pause();
            response = httpResponse(200, "OK", "application/json",
                                    statusJson(ok, ok ? "" : "stopwatch is not running"));
        }
    } else if (path == "/api/stopwatch/resume") {
        if (!isPost) { methodNotAllowed(); }
        else {
            bool ok = g_stopwatch.resume();
            response = httpResponse(200, "OK", "application/json",
                                    statusJson(ok, ok ? "" : "stopwatch is not paused"));
        }
    } else if (path == "/api/stopwatch/reset") {
        if (!isPost) { methodNotAllowed(); }
        else {
            g_stopwatch.reset();
            response = httpResponse(200, "OK", "application/json", statusJson(true, ""));
        }
    } else if (path == "/api/stopwatch/lap") {
        if (!isPost) { methodNotAllowed(); }
        else {
            bool ok = g_stopwatch.lap();
            response = httpResponse(200, "OK", "application/json",
                                    statusJson(ok, ok ? "" : "laps can only be recorded while running"));
        }
    } else if (path == "/api/stopwatch/status") {
        if (!isGet) { methodNotAllowed(); }
        else {
            response = httpResponse(200, "OK", "application/json", statusJson(true, ""));
        }
    } else if (isGet) {
        std::string file = resolveStaticFile(frontendDir, path);
        std::ifstream in(file, std::ios::binary);
        if (file.empty() || !in) {
            response = httpResponse(404, "Not Found", "text/plain", "Not found: " + path);
        } else {
            std::ostringstream body;
            body << in.rdbuf();
            response = httpResponse(200, "OK", contentTypeFor(file), body.str());
        }
    } else {
        response = httpResponse(405, "Method Not Allowed", "text/plain", "Method not allowed");
    }

    send(client, response.data(), static_cast<int>(response.size()), 0);
    closesocket(client);
}

} // namespace

int main(int argc, char* argv[]) {
    std::string frontendDir = argc > 1 ? argv[1] : "frontend";

    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::fprintf(stderr, "WSAStartup failed\n");
        return 1;
    }

    SOCKET listener = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (listener == INVALID_SOCKET) {
        std::fprintf(stderr, "socket() failed: %d\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    BOOL reuseAddr = TRUE;
    setsockopt(listener, SOL_SOCKET, SO_REUSEADDR,
               reinterpret_cast<const char*>(&reuseAddr), sizeof(reuseAddr));

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(static_cast<u_short>(kPort));
    // Serve on all interfaces so the page can be opened from a phone on the LAN.
    addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(listener, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == SOCKET_ERROR) {
        std::fprintf(stderr, "bind() failed on port %d: %d (already in use?)\n",
                     kPort, WSAGetLastError());
        closesocket(listener);
        WSACleanup();
        return 1;
    }

    if (listen(listener, SOMAXCONN) == SOCKET_ERROR) {
        std::fprintf(stderr, "listen() failed: %d\n", WSAGetLastError());
        closesocket(listener);
        WSACleanup();
        return 1;
    }

    std::printf("Stopwatch server running at http://localhost:%d\n", kPort);
    std::printf("Serving frontend from: %s\n", frontendDir.c_str());
    std::printf("Press Ctrl+C to stop.\n");
    std::fflush(stdout);

    while (true) {
        SOCKET client = accept(listener, nullptr, nullptr);
        if (client == INVALID_SOCKET) {
            std::fprintf(stderr, "accept() failed: %d\n", WSAGetLastError());
            continue;
        }
        // Modest timeouts so one stuck client cannot block the loop forever.
        DWORD timeoutMs = 2000;
        setsockopt(client, SOL_SOCKET, SO_RCVTIMEO,
                   reinterpret_cast<const char*>(&timeoutMs), sizeof(timeoutMs));
        setsockopt(client, SOL_SOCKET, SO_SNDTIMEO,
                   reinterpret_cast<const char*>(&timeoutMs), sizeof(timeoutMs));
        handleClient(client, frontendDir);
    }
}
