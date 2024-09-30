#include <iostream>
using namespace std;

struct StackNode {
    int data;
    StackNode* next;
};

struct Stack {
    StackNode* top;
};

void initializeStack(Stack& s) {
    s.top = nullptr;
}

bool isEmpty(Stack& s) {
    return s.top == nullptr;
}

void push(Stack& s, int val) {
    StackNode* newNode = new StackNode();
    newNode->data = val;
    newNode->next = s.top;
    s.top = newNode;
}

int pop(Stack& s) {
    if (isEmpty(s)) return -1;
    StackNode* temp = s.top;
    int val = temp->data;
    s.top = s.top->next;
    delete temp;
    return val;
}

int peek(Stack& s) {
    if (isEmpty(s)) return -1;
    return s.top->data;
}

void insertSorted(Stack& s, int val) {
    if (isEmpty(s) || peek(s) >= val) {
        push(s, val);
        return;
    }
    int top = pop(s);
    insertSorted(s, val);
    push(s, top);
}

void sortStack(Stack& s) {
    if (isEmpty(s)) return;
    int top = pop(s);
    sortStack(s);
    insertSorted(s, top);
}

void printStack(Stack& s) {
    while (!isEmpty(s)) {
        cout << peek(s) << " ";
        pop(s);
    }
}

int main() {
    Stack s;
    initializeStack(s);

    int n;
    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        push(s, val);
    }

    sortStack(s);

    cout << "Sorted stack (from top to bottom): ";
    printStack(s);
    cout << endl;

    return 0;
}
