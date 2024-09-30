#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    int maxFromRight = arr[n-1];
    cout << maxFromRight << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            cout << maxFromRight << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Leaders: ";
    findLeaders(arr, n);

    return 0;
}
