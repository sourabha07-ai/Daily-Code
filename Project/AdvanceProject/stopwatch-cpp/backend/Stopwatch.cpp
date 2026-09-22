#include "Stopwatch.h"

namespace {

std::int64_t nanosecondsSince(const std::chrono::steady_clock::time_point& start,
                              const std::chrono::steady_clock::time_point& now) {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(now - start).count();
}

} // namespace

bool Stopwatch::start() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (state_ == StopwatchState::RUNNING) {
        return false; // prevent duplicate start
    }
    accumulatedNs_ = 0;
    laps_.clear();
    segmentStart_ = Clock::now();
    state_ = StopwatchState::RUNNING;
    return true;
}

bool Stopwatch::pause() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (state_ != StopwatchState::RUNNING) {
        return false;
    }
    accumulatedNs_ += nanosecondsSince(segmentStart_, Clock::now());
    state_ = StopwatchState::PAUSED;
    return true;
}

bool Stopwatch::resume() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (state_ != StopwatchState::PAUSED) {
        return false;
    }
    segmentStart_ = Clock::now();
    state_ = StopwatchState::RUNNING;
    return true;
}

void Stopwatch::reset() {
    std::lock_guard<std::mutex> lock(mutex_);
    accumulatedNs_ = 0;
    laps_.clear();
    state_ = StopwatchState::IDLE;
}

bool Stopwatch::lap() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (state_ != StopwatchState::RUNNING) {
        return false;
    }
    std::int64_t nowNs = accumulatedNs_ + nanosecondsSince(segmentStart_, Clock::now());
    laps_.push_back(nowNs / 1000000);
    return true;
}

std::int64_t Stopwatch::getElapsedMilliseconds() const {
    std::lock_guard<std::mutex> lock(mutex_);
    std::int64_t ns = accumulatedNs_;
    if (state_ == StopwatchState::RUNNING) {
        ns += nanosecondsSince(segmentStart_, Clock::now());
    }
    return ns / 1000000;
}

bool Stopwatch::isRunning() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return state_ == StopwatchState::RUNNING;
}

StopwatchState Stopwatch::getState() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return state_;
}

std::vector<std::int64_t> Stopwatch::getLaps() const {
    std::lock_guard<std::mutex> lock(mutex_);
    return laps_;
}

const char* Stopwatch::stateToString(StopwatchState state) {
    switch (state) {
        case StopwatchState::IDLE:    return "IDLE";
        case StopwatchState::RUNNING: return "RUNNING";
        case StopwatchState::PAUSED:  return "PAUSED";
    }
    return "UNKNOWN";
}
