#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array and the value of k: ";
    cin >> n >> k;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == k) {
            cout << arr[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
