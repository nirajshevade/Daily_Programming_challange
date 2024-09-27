#include <iostream>

using namespace std;

char expression[1000];
int stack[1000];
int top = -1;

void push(int x) {
    top++;
    stack[top] = x;
}

int pop() {
    int result = stack[top];
    top--;
    return result;
}

int evaluatePostfix() {
    int i = 0;
    while (expression[i] != '\0') {
        if (expression[i] == ' ') {
            i++;
            continue;
        }
        if (expression[i] >= '0' && expression[i] <= '9' || (expression[i] == '-' && expression[i + 1] >= '0' && expression[i + 1] <= '9')) {
            int sign = 1;
            if (expression[i] == '-') {
                sign = -1;
                i++;
            }
            int num = 0;
            while (expression[i] >= '0' && expression[i] <= '9') {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            push(sign * num);
        } else {
            int b = pop();
            int a = pop();
            if (expression[i] == '+') push(a + b);
            else if (expression[i] == '-') push(a - b);
            else if (expression[i] == '*') push(a * b);
            else if (expression[i] == '/') push(a / b);
            i++;
        }
    }
    return pop();
}

int main() {
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n') {
        expression[i++] = ch;
    }
    expression[i] = '\0';
    cout << evaluatePostfix();
    return 0;
}