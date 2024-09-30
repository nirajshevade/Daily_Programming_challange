<<<<<<< HEAD
#include <iostream>

using namespace std;


int findMissingNumber(int arr[], int n) {

    long long totalSum = (n * (n + 1)) / 2;

    long long arrSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        arrSum += arr[i];
    }


    return totalSum - arrSum;
}

int main() {
    int n;

    cout << "Enter the value of n (size of array will be n-1): ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " distinct integers from the range 1 to " << n << ":" << endl;
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "Missing number: " << missingNumber << endl;

    return 0;
}
=======
#include <iostream>

using namespace std;


int findMissingNumber(int arr[], int n) {

    long long totalSum = (n * (n + 1)) / 2;

    long long arrSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        arrSum += arr[i];
    }


    return totalSum - arrSum;
}

int main() {
    int n;

    cout << "Enter the value of n (size of array will be n-1): ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " distinct integers from the range 1 to " << n << ":" << endl;
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "Missing number: " << missingNumber << endl;

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
