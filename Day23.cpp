#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array and the window size k: ";
    cin >> n >> k;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        cout << max_val << " ";
    }
    cout << endl;

    return 0;
}
