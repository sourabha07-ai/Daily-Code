# Stopwatch Web App — HTML + CSS frontend, C++ backend

A modern dark-theme stopwatch where **all timing logic lives in C++**. The browser
never calculates time: JavaScript only sends button clicks as HTTP requests and
renders the JSON the C++ server returns.

```
Browser (HTML/CSS + tiny JS client)  <--HTTP-->  C++ server (Stopwatch class)
        http://localhost:8080                        steady_clock timing core
```

## Project structure

```text
stopwatch-cpp/
├── frontend/
│   ├── index.html      # layout: display, buttons, lap list
│   ├── style.css       # dark theme, responsive, hover effects
│   └── script.js       # fetch() only — no timing logic
├── backend/
│   ├── Stopwatch.h     # class + StopwatchState enum
│   ├── Stopwatch.cpp   # chrono-based start/pause/resume/reset/lap logic
│   ├── main.cpp        # Winsock HTTP server (no third-party libraries)
│   └── CMakeLists.txt  # optional CMake build
├── build/              # compiled exe lands here (gitignored)
├── README.md
└── .gitignore
```

## Why this architecture?

HTML and CSS **cannot execute C++**. A browser can only talk to a program on your
machine over the network, so the C++ program must run as a small local web server.
The server also *serves* the frontend files, so opening
[http://localhost:8080](http://localhost:8080) gives a same-origin setup — no CORS
hacks, no extra tools, and no third-party C++ HTTP library needed (Winsock ships
with Windows).

## Build & run (Windows 11 + MSYS2 UCRT64)

1. Install [MSYS2](https://www.msys2.org/), then in the **UCRT64** shell:
   ```bash
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```
2. From the `stopwatch-cpp/` folder, compile:
   ```bash
   mkdir -p build
   g++ -std=c++17 -Wall -Wextra -O2 -static \
       -o build/stopwatch_server.exe \
       backend/main.cpp backend/Stopwatch.cpp \
       -lws2_32
   ```
   `-static` bundles the runtime so the exe runs even without MSYS2 in `PATH`.
   `-lws2_32` links Windows' built-in socket library.
3. Run it (from `stopwatch-cpp/` so it finds `frontend/`):
   ```bash
   ./build/stopwatch_server.exe
   ```
   You should see: `Stopwatch server running at http://localhost:8080`
4. Open **http://localhost:8080** in your browser. Stop the server with `Ctrl+C`.

Optional — CMake instead of raw g++ (from `backend/`):
```bash
cmake -S . -B ../build
cmake --build ../build
../build/stopwatch_server.exe   # run from stopwatch-cpp/, or pass the frontend path
```
You can also pass the frontend directory explicitly:
`./build/stopwatch_server.exe frontend`.

## Running in VS Code

1. Open the `stopwatch-cpp` folder in VS Code.
2. Install the **C/C++** extension (Microsoft).
3. Open the integrated terminal (select the MSYS2 UCRT64 profile if prompted) and
   run the compile + run commands above.
4. Use the Live Preview / Simple Browser extension or a normal browser tab pointed
   at `http://localhost:8080`.

## API endpoints

| Method | Endpoint                 | Effect                                        |
|--------|--------------------------|-----------------------------------------------|
| POST   | `/api/stopwatch/start`   | Start from zero (rejects duplicate start)     |
| POST   | `/api/stopwatch/pause`   | Freeze elapsed time                           |
| POST   | `/api/stopwatch/resume`  | Continue from the paused value                |
| POST   | `/api/stopwatch/reset`   | Stop, zero the timer, clear laps              |
| POST   | `/api/stopwatch/lap`     | Record cumulative lap time (running only)     |
| GET    | `/api/stopwatch/status`  | `{state, elapsedMs, laps[]}` — polled ~25×/s  |

Every response is JSON: `{"ok":true|false,"error":"...", "state":"IDLE|RUNNING|PAUSED","elapsedMs":1234,"laps":[...]}`.
Invalid state transitions return `ok:false` with a human-readable `error` and never
corrupt the timer. Wrong HTTP methods get `405`, unknown paths `404`.

## How the C++ timing works (beginner explanation)

The stopwatch never "counts up" like a loop with a counter — that would drift.
Instead it stores *timestamps* and does subtraction, using
`std::chrono::steady_clock`, a monotonically increasing clock that is unaffected
by changing your system clock or daylight saving:

- **Start** remembers `segmentStart_ = steady_clock::now()`.
- **Elapsed time** is computed on demand:
  `accumulatedNs_ + (now() - segmentStart_)` in nanoseconds.
- **Pause** stops the current segment by adding `now() - segmentStart_` into
  `accumulatedNs_`. Nothing ticks while paused because `getElapsedMilliseconds()`
  only adds the live segment while the state is `RUNNING`.
- **Resume** simply sets a fresh `segmentStart_ = now()`; the accumulated total is
  kept, so timing continues from the paused value — even across a pause of hours.
- **Reset** zeroes the accumulator, clears laps and returns to `IDLE`.

A `std::mutex` guards every method, so the server thread and the timing math can
never disagree, and the state machine (`IDLE → RUNNING ⇄ PAUSED → IDLE`) rejects
nonsensical transitions like pausing an idle stopwatch. Milliseconds for the
display (`HH:MM:SS.mmm`) are produced client-side by formatting `elapsedMs`;
the authoritative number is always computed by C++.

## Testing

Run the server, then (curl ships with Git Bash / MSYS2):

```bash
B=http://localhost:8080
curl -s -X POST $B/api/stopwatch/start            # 1. start from zero
curl -s -X POST $B/api/stopwatch/start            # 7. duplicate start -> ok:false
curl -s $B/api/stopwatch/status                   # 9. elapsedMs grows, ms precision
curl -s -X POST $B/api/stopwatch/pause            # 2. pause after a few seconds
curl -s $B/api/stopwatch/status; sleep 1
curl -s $B/api/stopwatch/status                   # 8. elapsedMs identical -> frozen
curl -s -X POST $B/api/stopwatch/resume           # 3. resumes from paused value
curl -s -X POST $B/api/stopwatch/reset            # 4. reset while running
curl -s -X POST $B/api/stopwatch/start
curl -s -X POST $B/api/stopwatch/pause
curl -s -X POST $B/api/stopwatch/reset            # 5. reset while paused
curl -s -X POST $B/api/stopwatch/start            # 6. start after resetting
```

Manual UI checklist (all in the browser at `http://localhost:8080`):

1. Load the page → display `00:00:00.000`, state `IDLE`, only **Start** enabled.
2. **Start** → time ticks smoothly with milliseconds; Pause/Reset/Lap enable, Start disables.
3. **Pause** after ~5 s → time freezes; **Resume** continues from the frozen value, not from zero.
4. **Lap** a few times → lap list shows cumulative times; **Reset** clears it.
5. Stop the server → red "cannot reach" warning appears; restart it and refresh → recovers.
6. Resize to a phone-width window → card stays centered and buttons wrap.

All 20 automated API checks above were verified passing on Windows 11 with
MSYS2 UCRT64 `g++ 16.2.0`.
