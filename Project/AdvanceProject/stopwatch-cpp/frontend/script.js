// This file contains NO timing logic. The elapsed time is measured and
// calculated entirely by the C++ backend (Stopwatch.cpp). JavaScript here
// only (1) sends button clicks as HTTP requests and (2) renders the JSON
// the C++ server returns.

"use strict";

const API_BASE = "/api/stopwatch";
const POLL_INTERVAL_MS = 40; // ~25 fps display refresh

const display = document.getElementById("display");
const stateLabel = document.getElementById("stateLabel");
const serverStatus = document.getElementById("serverStatus");
const lapList = document.getElementById("lapList");

const buttons = {
    start: document.getElementById("startBtn"),
    pause: document.getElementById("pauseBtn"),
    resume: document.getElementById("resumeBtn"),
    reset: document.getElementById("resetBtn"),
    lap: document.getElementById("lapBtn"),
};

function formatTime(totalMs) {
    const ms = totalMs % 1000;
    const totalSeconds = Math.floor(totalMs / 1000);
    const s = totalSeconds % 60;
    const m = Math.floor(totalSeconds / 60) % 60;
    const h = Math.floor(totalSeconds / 3600);
    const pad = (n, width) => String(n).padStart(width, "0");
    return `${pad(h, 2)}:${pad(m, 2)}:${pad(s, 2)}.${pad(ms, 3)}`;
}

function renderStatus(status) {
    display.textContent = formatTime(status.elapsedMs);
    stateLabel.textContent = status.state;
    stateLabel.className =
        "state-label" + (status.state === "RUNNING" ? " running" :
                         status.state === "PAUSED"  ? " paused"  : "");

    buttons.start.disabled  = status.state !== "IDLE";
    buttons.pause.disabled  = status.state !== "RUNNING";
    buttons.resume.disabled = status.state !== "PAUSED";
    buttons.reset.disabled  = status.state === "IDLE" && status.elapsedMs === 0 && status.laps.length === 0;
    buttons.lap.disabled    = status.state !== "RUNNING";

    if (status.laps.length === 0) {
        lapList.innerHTML = '<li class="lap-empty">No laps yet</li>';
    } else {
        lapList.replaceChildren(
            ...status.laps.map((lapMs, i) => {
                const li = document.createElement("li");
                const num = document.createElement("span");
                num.className = "lap-num";
                num.textContent = `Lap ${i + 1}`;
                const time = document.createElement("span");
                time.textContent = formatTime(lapMs);
                li.append(num, time);
                return li;
            }).reverse()
        );
    }
}

function setServerOnline(online, message) {
    serverStatus.textContent = online ? "" : message;
}

async function callEndpoint(action) {
    try {
        const response = await fetch(`${API_BASE}/${action}`, { method: "POST" });
        const status = await response.json();
        setServerOnline(true);
        renderStatus(status);
        if (!status.ok && status.error) {
            setServerOnline(false, status.error);
        }
    } catch (error) {
        setServerOnline(false, "Cannot reach the C++ server. Start it and refresh.");
    }
}

async function pollStatus() {
    try {
        const response = await fetch(`${API_BASE}/status`);
        const status = await response.json();
        setServerOnline(true);
        renderStatus(status);
    } catch (error) {
        setServerOnline(false, "Cannot reach the C++ server. Start it and refresh.");
    }
}

buttons.start.addEventListener("click", () => callEndpoint("start"));
buttons.pause.addEventListener("click", () => callEndpoint("pause"));
buttons.resume.addEventListener("click", () => callEndpoint("resume"));
buttons.reset.addEventListener("click", () => callEndpoint("reset"));
buttons.lap.addEventListener("click", () => callEndpoint("lap"));

pollStatus();
setInterval(pollStatus, POLL_INTERVAL_MS);
