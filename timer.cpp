#include "timer.hpp"

time_t time_sorting(void (*func)(int arr[], size_t len), int arr[], size_t len) {
    std::chrono::time_point<std::chrono::system_clock> start_time, end_time;

    start_time = std::chrono::system_clock::now();
    func(arr, len);
    end_time = std::chrono::system_clock::now();

    return std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
}