#include <iostream>
using namespace std;

const int MAX_SIZE = 10000; // Maximum input size

// Function to read input manually (without using getline or any predefined function)
void readString(char s[], int &length) {
    char ch;
    length = 0;
    while ((ch = getchar()) != '\n') { // Keep reading until a newline
        s[length++] = ch;
    }
    s[length] = '\0'; // Null-terminate the string
}

// Function to reverse a part of the string
void reverse(char s[], int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

// Function to remove extra spaces between words
int removeExtraSpaces(char s[], int length) {
    int i = 0, j = 0;
    
    // Skip initial spaces
    while (i < length && s[i] == ' ') i++;
    
    while (i < length) {
        // Copy characters
        if (s[i] != ' ') {
            s[j++] = s[i];
        }
        // Handle space between words
        else if (j > 0 && s[j - 1] != ' ') {
            s[j++] = ' ';
        }
        i++;
    }
    
    // Remove trailing space if any
    if (j > 0 && s[j - 1] == ' ') j--;
    
    return j; // Return the new length
}

// Function to reverse words in a string
void reverseWords(char s[], int length) {
    // First, reverse the entire string
    reverse(s, 0, length - 1);

    // Now reverse each word individually
    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (i == length || s[i] == ' ') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char s[MAX_SIZE];
    int length;

    // Step 1: Read the input manually
    cout << "Enter a string: ";
    readString(s, length);

    // Step 2: Remove extra spaces
    length = removeExtraSpaces(s, length);

    // Step 3: Reverse the words
    reverseWords(s, length);

    // Step 4: Output the result
    cout << "Reversed string: ";
    for (int i = 0; i < length; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
