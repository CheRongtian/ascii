#pragma once
#include <atomic>
#include <memory>
#include <stdexcept>

// Each piece owns its cancellation state. The Swift queue can set the flag
// while its constructor or frame is running on the engine queue.
struct AsciiCancellation {
    std::shared_ptr<std::atomic_bool> flag=std::make_shared<std::atomic_bool>(false);
};
namespace ascii {
inline thread_local const std::atomic_bool *active_cancellation=nullptr;
struct Cancelled final:std::runtime_error {Cancelled():std::runtime_error("Cancelled") {}};
inline void check_cancel(){if(active_cancellation&&active_cancellation->load(std::memory_order_relaxed))throw Cancelled();}
struct CalculationScope {
    const std::atomic_bool *previous;
    explicit CalculationScope(const std::shared_ptr<std::atomic_bool>&flag):previous(active_cancellation){active_cancellation=flag.get();}
    ~CalculationScope(){active_cancellation=previous;}
};
}
