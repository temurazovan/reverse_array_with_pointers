#include <iostream>

void reverseArray(int* array) {
    int n = 10;
    for (int i = 0; i < n / 2; ++i) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Original array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << &arr << std::endl;

    reverseArray(arr);

    std::cout << "Reverse array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << &arr << std::endl;

    return 0;
}