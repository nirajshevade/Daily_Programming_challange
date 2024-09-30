<<<<<<< HEAD
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
=======
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
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
