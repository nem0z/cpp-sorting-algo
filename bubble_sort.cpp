#include "algo.hpp"

void bubble_sort(int arr[], size_t len) {
    unsigned n = 0;

    while (n < len) {
        for (size_t i = 0; i < len - n - 1; ++i) {
            if (arr[i] > arr[i+1]) {
                std::swap(arr[i], arr[i+1]);
            }
        }
        ++n;
    }
}