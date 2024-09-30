<<<<<<< HEAD
#include <iostream>

using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

bool isSafe(char s[], int start, int current) {
    for (int i = start; i < current; i++) {
        if (s[i] == s[current]) {
            return false;
        }
    }
    return true;
}

void permute(char s[], int left, int right) {
    if (left == right) {
        for (int i = 0; i <= right; i++) {
            cout << s[i];
        }
        cout << endl;
    } else {
        for (int i = left; i <= right; i++) {
            if (isSafe(s, left, i)) {
                swap(s[left], s[i]);
                permute(s, left + 1, right);
                swap(s[left], s[i]);
            }
        }
    }
}

int main() {
    char s[10];
    int n = 0;
    
    cout << "Enter a string (max length 9): ";
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        s[n++] = ch;
    }
    
    cout << "Unique permutations: \n";
    permute(s, 0, n - 1);
    
    return 0;
}
=======
#include <iostream>

using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

bool isSafe(char s[], int start, int current) {
    for (int i = start; i < current; i++) {
        if (s[i] == s[current]) {
            return false;
        }
    }
    return true;
}

void permute(char s[], int left, int right) {
    if (left == right) {
        for (int i = 0; i <= right; i++) {
            cout << s[i];
        }
        cout << endl;
    } else {
        for (int i = left; i <= right; i++) {
            if (isSafe(s, left, i)) {
                swap(s[left], s[i]);
                permute(s, left + 1, right);
                swap(s[left], s[i]);
            }
        }
    }
}

int main() {
    char s[10];
    int n = 0;
    
    cout << "Enter a string (max length 9): ";
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        s[n++] = ch;
    }
    
    cout << "Unique permutations: \n";
    permute(s, 0, n - 1);
    
    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
