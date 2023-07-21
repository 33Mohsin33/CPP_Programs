#include <iostream>
using namespace std;

int Max(int arr[], int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Counting sort function to sort the elements based on significant digit
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Count the occurrences of each digit in count array
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Update count[i] to store the actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr, so that arr now contains sorted numbers based on current digit
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Radix sort implementation
void radixSort(int arr[], int n) {
    int max_val = Max(arr, n);

    // Do counting sort for every digit.
    // Instead of passing digit number, pass exp.
    // exp is 10^i, where i is the current digit number
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
	int Arr[100];
	
	cout<<"Enter Size of your Array: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	
    radixSort(Arr, n);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
    
    return 0;
}

