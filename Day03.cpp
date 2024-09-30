<<<<<<< HEAD
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);


    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow]; 
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;


    cout << "Enter the number of elements (n+1) in the array: ";
    cin >> n;

    int arr[100000];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Duplicate number: " << findDuplicate(arr, n) << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);


    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow]; 
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;


    cout << "Enter the number of elements (n+1) in the array: ";
    cin >> n;

    int arr[100000];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Duplicate number: " << findDuplicate(arr, n) << endl;

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
