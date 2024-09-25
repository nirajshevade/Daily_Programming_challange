#include <iostream>

using namespace std;

void prime_factors(int N) {
    int i = 2;
    while (i * i <= N) {
        while (N % i == 0) {
            cout << i << " ";
            N /= i;
        }
        i++;
    }
    if (N > 1) {
        cout << N;
    }
}

int main() {
    int N;
    cin >> N;
    prime_factors(N);
    return 0;
}
