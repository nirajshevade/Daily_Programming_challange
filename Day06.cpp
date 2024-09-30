<<<<<<< HEAD
#include <iostream>
using namespace std;

void findSubarraysWithZeroSum(int arr[], int n) {
    
    for (int start = 0; start < n; start++) {
        int sum = 0; 
        
        
        for (int end = start; end < n; end++) {
            sum += arr[end];
            
            
            if (sum == 0) {
                cout << "(" << start << ", " << end << ")" << endl;
            }
        }
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
    
    cout << "Subarrays with sum zero: " << endl;
    findSubarraysWithZeroSum(arr, n);
    
    return 0;
}
=======
#include <iostream>
using namespace std;

void findSubarraysWithZeroSum(int arr[], int n) {
    
    for (int start = 0; start < n; start++) {
        int sum = 0; 
        
        
        for (int end = start; end < n; end++) {
            sum += arr[end];
            
            
            if (sum == 0) {
                cout << "(" << start << ", " << end << ")" << endl;
            }
        }
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
    
    cout << "Subarrays with sum zero: " << endl;
    findSubarraysWithZeroSum(arr, n);
    
    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
