#include <iostream>

void reverseArray(int* array, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = *(array + i);
        *(array + i) = *(array + size - 1 - i);
        *(array + size - 1 - i) = temp;
    }
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i: arr) {
        std::cout << i << " ";
    }
    std::cout << &arr << std::endl;

    reverseArray(arr, size);
    std::cout << "Reverse array: ";
    for (int i: arr) {
        std::cout << i << " ";
    }
    std::cout << &arr << std::endl;
}

