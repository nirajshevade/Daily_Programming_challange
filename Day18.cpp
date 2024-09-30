<<<<<<< HEAD
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
=======
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
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
