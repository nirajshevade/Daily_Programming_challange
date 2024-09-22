#include <iostream>
using namespace std;

int stringLength(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

int countSubstringsWithKDistinct(char s[], int k) {
    int n = stringLength(s);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int charFrequency[26] = {0};
        int distinctCount = 0;
        for (int j = i; j < n; ++j) {
            int index = s[j] - 'a';
            if (charFrequency[index] == 0) {
                distinctCount++;
            }
            charFrequency[index]++;
            if (distinctCount == k) {
                count++;
            }
            if (distinctCount > k) {
                break;
            }
        }
    }

    return count;
}

int main() {
    char s[10000];
    int k;

    // Input string and integer k
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;

    // Output the result
    int result = countSubstringsWithKDistinct(s, k);
    cout << "Output: " << result << endl;

    return 0;
}
