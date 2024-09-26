#include <iostream>
using namespace std;

int countDivisors(int N) {
    int count = 0;
    
    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            if (i == N / i) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }
    
    return count;
}

int main() {
    int N;
    cout << "Enter a Number(N): ";
    cin >> N;
    cout << countDivisors(N) << endl;
    return 0;
}
