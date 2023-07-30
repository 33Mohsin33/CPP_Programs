#include <iostream>

// Merge two sorted subarrays into a single sorted array
void merge(int arr[], int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    // Create temporary arrays for the left and right subarrays
    int leftArray[leftSize];
    int rightArray[rightSize];

    // Copy data to temporary arrays
    for (int i = 0; i < leftSize; ++i) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < rightSize; ++j) {
        rightArray[j] = arr[middle + 1 + j];
    }

    // Merge the two temporary arrays back into the original array
    int i = 0; // Index of the left subarray
    int j = 0; // Index of the right subarray
    int k = left; // Index of the merged array

    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            ++i;
        } else {
            arr[k] = rightArray[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements, if any, from the leftArray
    while (i < leftSize) {
        arr[k] = leftArray[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements, if any, from the rightArray
    while (j < rightSize) {
        arr[k] = rightArray[j];
        ++j;
        ++k;
    }
}

// Merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Sort the two halves
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    mergeSort(arr, 0, size - 1);

    std::cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
