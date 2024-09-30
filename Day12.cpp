<<<<<<< HEAD
#include <iostream>
using namespace std;

bool isValidParentheses(const string& s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    if (length % 2 != 0) return false;
    char stack[10000];
    int top = -1;
    for (int i = 0; i < length; i++) {
        char current = s[i];
        if (current == '(' || current == '{' || current == '[') {
            top++;
            stack[top] = current;
        }
        else if (current == ')' || current == '}' || current == ']') {
            if (top == -1) return false;

            char last = stack[top];
            top--;
            if ((current == ')' && last != '(') ||
                (current == '}' && last != '{') ||
                (current == ']' && last != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    string s;
    cout << "Enter the string of parentheses: ";
    cin >> s;

    if (isValidParentheses(s)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
=======
#include <iostream>
using namespace std;

bool isValidParentheses(const string& s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    if (length % 2 != 0) return false;
    char stack[10000];
    int top = -1;
    for (int i = 0; i < length; i++) {
        char current = s[i];
        if (current == '(' || current == '{' || current == '[') {
            top++;
            stack[top] = current;
        }
        else if (current == ')' || current == '}' || current == ']') {
            if (top == -1) return false;

            char last = stack[top];
            top--;
            if ((current == ')' && last != '(') ||
                (current == '}' && last != '{') ||
                (current == ']' && last != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    string s;
    cout << "Enter the string of parentheses: ";
    cin >> s;

    if (isValidParentheses(s)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
