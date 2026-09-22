#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <chrono>
#include <cstdint>
#include <mutex>
#include <vector>

enum class StopwatchState {
    IDLE,
    RUNNING,
    PAUSED
};

// Thread-safe stopwatch. All timing is based on std::chrono::steady_clock,
// which is monotonic and unaffected by system clock changes.
class Stopwatch {
public:
    Stopwatch() = default;

    // Start from zero. Returns false if already running.
    bool start();

    // Pause a running stopwatch, preserving elapsed time.
    // Returns false if not running.
    bool pause();

    // Resume a paused stopwatch. Returns false if not paused.
    bool resume();

    // Stop and clear everything (including laps). Always succeeds.
    void reset();

    // Record a lap. Only valid while running; returns false otherwise.
    bool lap();

    // Elapsed time in milliseconds up to the current instant (if running)
    // or frozen at the pause point (if idle/paused).
    std::int64_t getElapsedMilliseconds() const;

    bool isRunning() const;

    StopwatchState getState() const;

    // All recorded lap times in milliseconds, oldest first.
    std::vector<std::int64_t> getLaps() const;

    static const char* stateToString(StopwatchState state);

private:
    using Clock = std::chrono::steady_clock;

    // Accumulated whole-run-segment time, in nanoseconds for full precision.
    std::int64_t accumulatedNs_ = 0;
    Clock::time_point segmentStart_{};

    StopwatchState state_ = StopwatchState::IDLE;
    std::vector<std::int64_t> laps_;
    mutable std::mutex mutex_;
};

#endif // STOPWATCH_H
