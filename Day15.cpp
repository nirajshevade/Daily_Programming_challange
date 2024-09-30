<<<<<<< HEAD
#include <iostream>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(char S[]) {
    int lastIndex[128];
    for (int i = 0; i < 128; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;
    int i = 0;
    while (S[i] != '\0') {
        char currentChar = S[i];
        if (lastIndex[currentChar] >= start) {
            start = lastIndex[currentChar] + 1;
        }
        lastIndex[currentChar] = i;
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        i++;
    }

    return maxLength;
}

int main() {
    char S[100000];
    cout << "Enter the string: ";
    cin >> S;
    cout << "Length of longest substring without repeating characters: " 
         << longestSubstringWithoutRepeatingCharacters(S) << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(char S[]) {
    int lastIndex[128];
    for (int i = 0; i < 128; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;
    int i = 0;
    while (S[i] != '\0') {
        char currentChar = S[i];
        if (lastIndex[currentChar] >= start) {
            start = lastIndex[currentChar] + 1;
        }
        lastIndex[currentChar] = i;
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        i++;
    }

    return maxLength;
}

int main() {
    char S[100000];
    cout << "Enter the string: ";
    cin >> S;
    cout << "Length of longest substring without repeating characters: " 
         << longestSubstringWithoutRepeatingCharacters(S) << endl;

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
