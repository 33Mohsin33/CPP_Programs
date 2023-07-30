#include <iostream>
#include <algorithm>

// Helper function to sort each bucket (using insertion sort in this example)
void insertionSort(float bucket[], int size) {
    for (int i = 1; i < size; ++i) {
        float key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int size) {
    // Determine the number of buckets (you can adjust this based on the input data)
    const int numBuckets = 10;

    // Create and initialize the buckets
    int bucketSizes[numBuckets] = {0};
    float* buckets[numBuckets];

    for (int i = 0; i < numBuckets; ++i) {
        buckets[i] = new float[size];
    }

    // Distribute elements into buckets based on their values
    for (int i = 0; i < size; ++i) {
        int bucketIndex = arr[i] * numBuckets;
        buckets[bucketIndex][bucketSizes[bucketIndex]++] = arr[i];
    }

    // Sort each bucket
    for (int i = 0; i < numBuckets; ++i) {
        insertionSort(buckets[i], bucketSizes[i]);
    }

    // Merge the sorted buckets back into the original array
    int index = 0;
    for (int i = 0; i < numBuckets; ++i) {
        for (int j = 0; j < bucketSizes[i]; ++j) {
            arr[index++] = buckets[i][j];
        }
        delete[] buckets[i];
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    bucketSort(arr, size);

    std::cout << "\nSorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
