#include "algo.hpp"

#include <iostream>

void print_arr2(int arr[], size_t len) {
    for (size_t i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end-1];
    int pos = start;

    for (int i = start; i < end - 1; ++i) {
        if (arr[i] < pivot) {
            std::swap(arr[i], arr[pos]);
            ++pos;
        }
    }

    std::swap(arr[pos], arr[end-1]);
    return pos;
}

void _quick_sort(int arr[], int low, int high) {

    if (low >= high)
        return;

    int pi = partition(arr, low, high);

    _quick_sort(arr, low, pi);
    _quick_sort(arr, pi+1, high);
}

void quick_sort(int arr[], size_t len) {
    _quick_sort(arr, 0, len);
}