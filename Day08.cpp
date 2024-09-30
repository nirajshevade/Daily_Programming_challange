#include <iostream>
using namespace std;

const int MAX_SIZE = 10000;
void readString(char s[], int &length) {
    char ch;
    length = 0;
    while ((ch = getchar()) != '\n') { 
        s[length++] = ch;
    }
    s[length] = '\0'; 
}


void reverse(char s[], int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}


int removeExtraSpaces(char s[], int length) {
    int i = 0, j = 0;
    

    while (i < length && s[i] == ' ') i++;
    
    while (i < length) {
        if (s[i] != ' ') {
            s[j++] = s[i];
        }
        else if (j > 0 && s[j - 1] != ' ') {
            s[j++] = ' ';
        }
        i++;
    }
    
    if (j > 0 && s[j - 1] == ' ') j--;
    
    return j;
}

void reverseWords(char s[], int length) {
    reverse(s, 0, length - 1);
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

    cout << "Enter a string: ";
    readString(s, length);

    length = removeExtraSpaces(s, length);

    reverseWords(s, length);

    cout << "Reversed string: ";
    for (int i = 0; i < length; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
