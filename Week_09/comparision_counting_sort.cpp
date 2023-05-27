// Suzen Firasta
//210968058

#include <iostream>

using namespace std;

void countingSort(int arr[], int n) {
    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Create a count array to store the number of occurrences of each element
    int count[maxElement + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Modify the count array to store the cumulative sum of the elements
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted elements
    int temp[n];
    for (int i = n - 1; i >= 0; i--) {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements from the temporary array to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}


int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

