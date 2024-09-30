#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    // Input size of array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter the elements (0, 1, or 2) of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sortArray(arr, n);
    
    // Output sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
