<<<<<<< HEAD
#include <iostream>

using namespace std;

// Helper function to calculate the length of a string manually
int getLength(const char* s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

// Helper function to check if a substring is a palindrome
bool isPalindrome(const char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to find the longest palindromic substring
void longestPalindrome(const char* s, char* result) {
    int n = getLength(s);
    if (n == 0) {
        result[0] = '\0';
        return;
    }

    int maxLength = 1;
    int start = 0;

    // Try all substrings and check if they are palindrome
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (isPalindrome(s, i, j) && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    // Copy the longest palindrome substring to the result array
    for (int i = 0; i < maxLength; i++) {
        result[i] = s[start + i];
    }
    result[maxLength] = '\0';  // Null-terminate the result string
}

int main() {
    char s[1001];
    char result[1001];  // To store the longest palindrome substring

    cout << "Enter the string: ";
    cin >> s;

    longestPalindrome(s, result);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}
=======
#include <iostream>

using namespace std;

// Helper function to calculate the length of a string manually
int getLength(const char* s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

// Helper function to check if a substring is a palindrome
bool isPalindrome(const char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to find the longest palindromic substring
void longestPalindrome(const char* s, char* result) {
    int n = getLength(s);
    if (n == 0) {
        result[0] = '\0';
        return;
    }

    int maxLength = 1;
    int start = 0;

    // Try all substrings and check if they are palindrome
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (isPalindrome(s, i, j) && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    // Copy the longest palindrome substring to the result array
    for (int i = 0; i < maxLength; i++) {
        result[i] = s[start + i];
    }
    result[maxLength] = '\0';  // Null-terminate the result string
}

int main() {
    char s[1001];
    char result[1001];  // To store the longest palindrome substring

    cout << "Enter the string: ";
    cin >> s;

    longestPalindrome(s, result);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
