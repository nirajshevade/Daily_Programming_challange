<<<<<<< HEAD
#include <iostream>
using namespace std;

// Function to find the next gap
int nextGap(int gap) {
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

// Function to swap two integers manually
void manualSwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to merge two sorted arrays without extra space
void mergeArrays(int arr1[], int m, int arr2[], int n) {
    int gap = m + n;
    gap = nextGap(gap);

    while (gap > 0) {
        int i, j;

        // Compare elements in the first array
        for (i = 0; i + gap < m; i++) {
            if (arr1[i] > arr1[i + gap]) {
                manualSwap(&arr1[i], &arr1[i + gap]);
            }
        }

        // Compare elements between the first and second array
        for (j = (gap > m) ? gap - m : 0; i < m && j < n; i++, j++) {
            if (arr1[i] > arr2[j]) {
                manualSwap(&arr1[i], &arr2[j]);
            }
        }

        // Compare elements in the second array
        if (j < n) {
            for (j = 0; j + gap < n; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    manualSwap(&arr2[j], &arr2[j + gap]);
                }
            }
        }

        gap = nextGap(gap);
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int m, n;

    // Input the size of the first array
    cout << "Enter the size of arr1: ";
    cin >> m;

    // Input the size of the second array
    cout << "Enter the size of arr2: ";
    cin >> n;

    // Declare the arrays
    int arr1[m], arr2[n];

    // Input elements for arr1
    cout << "Enter elements of arr1 in sorted order: ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    // Input elements for arr2
    cout << "Enter elements of arr2 in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Merge the arrays
    mergeArrays(arr1, m, arr2, n);

    // Output the merged arrays
    cout << "arr1 = ";
    printArray(arr1, m);

    cout << "arr2 = ";
    printArray(arr2, n);

    return 0;
}
=======
#include <iostream>
using namespace std;

// Function to find the next gap
int nextGap(int gap) {
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

// Function to swap two integers manually
void manualSwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to merge two sorted arrays without extra space
void mergeArrays(int arr1[], int m, int arr2[], int n) {
    int gap = m + n;
    gap = nextGap(gap);

    while (gap > 0) {
        int i, j;

        // Compare elements in the first array
        for (i = 0; i + gap < m; i++) {
            if (arr1[i] > arr1[i + gap]) {
                manualSwap(&arr1[i], &arr1[i + gap]);
            }
        }

        // Compare elements between the first and second array
        for (j = (gap > m) ? gap - m : 0; i < m && j < n; i++, j++) {
            if (arr1[i] > arr2[j]) {
                manualSwap(&arr1[i], &arr2[j]);
            }
        }

        // Compare elements in the second array
        if (j < n) {
            for (j = 0; j + gap < n; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    manualSwap(&arr2[j], &arr2[j + gap]);
                }
            }
        }

        gap = nextGap(gap);
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int m, n;

    // Input the size of the first array
    cout << "Enter the size of arr1: ";
    cin >> m;

    // Input the size of the second array
    cout << "Enter the size of arr2: ";
    cin >> n;

    // Declare the arrays
    int arr1[m], arr2[n];

    // Input elements for arr1
    cout << "Enter elements of arr1 in sorted order: ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    // Input elements for arr2
    cout << "Enter elements of arr2 in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Merge the arrays
    mergeArrays(arr1, m, arr2, n);

    // Output the merged arrays
    cout << "arr1 = ";
    printArray(arr1, m);

    cout << "arr2 = ";
    printArray(arr2, n);

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
