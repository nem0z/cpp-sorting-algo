#ifndef TIMER_HPP
#define TIMER_HPP

#include "stddef.h"
#include <chrono>
#include <ctime>

time_t time_sorting(void (*func)(int arr[], size_t len), int arr[], size_t len);

#endif // TIMER_HPP