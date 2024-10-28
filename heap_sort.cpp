#include "algo.hpp"

void shift_down(int arr[], size_t len, size_t root) {
    while (2 * root + 1 < len) {
        size_t child = 2 * root + 1;

        if (child + 1 < len && arr[child] < arr[child + 1])
            child++;

        if (arr[root] >= arr[child])
            break;

        std::swap(arr[root], arr[child]);
        root = child;
    }
}

void heapify(int arr[], size_t len) {
    for (size_t i = (len - 2) / 2 + 1; i > 0; i--) {
        shift_down(arr, len, i-1);
        if (i == 0) return;
    }
}

void heap_sort(int arr[], size_t len) {
    heapify(arr, len);

    for (size_t i = len - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        shift_down(arr, i, 0);
    }
}