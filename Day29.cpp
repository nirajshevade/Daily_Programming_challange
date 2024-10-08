#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer n belongs to (0,1000): ";
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    } else if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    // Create an array to store Fibonacci numbers
    long long fib[1001]; // To store Fibonacci values up to F(1000)
    
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2]; // Bottom-up approach
    }

    cout << fib[n] << endl;

    return 0;
}
