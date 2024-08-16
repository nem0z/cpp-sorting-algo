#include "algo.hpp"

#include <iostream>

void insertion_sort(int arr[], size_t len) {
    for (size_t i = 1; i < len; ++i) {
        int tmp = arr[i];

        for (size_t j = i-1; arr[j] > tmp; --j) {
            std::swap(arr[j], arr[j+1]);
            if (j == 0) break;
        }
    }
}