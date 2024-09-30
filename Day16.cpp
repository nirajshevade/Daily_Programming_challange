#include <iostream>
using namespace std;
int gcd(int N, int M) {
    while (M != 0) {
        int remainder = N % M;
        N = M;
        M = remainder;
    }
    return N;
}
long long lcm(int N, int M) {
    return (long long)N * M / gcd(N, M);
}

int main() {
    int N, M;
    cout << "Enter the first number: ";
    cin >> N;
    cout << "Enter the second number: ";
    cin >> M;
    cout << "LCM of " << N << " and " << M << " is: " << lcm(N, M) << endl;

    return 0;
}
