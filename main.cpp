#include "stddef.h"
#include <iostream>

#include "algo.hpp"

using namespace std;


void print_arr(int arr[], size_t len) {
    for (size_t i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = { -1, 10, 8, 67, -66, 0, 67, 50, -7, 88 };
    print_arr(arr, 10);

    insertion_sort(arr, 10);
    print_arr(arr, 10);

    return 0;
}