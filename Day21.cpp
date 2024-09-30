#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
public:
    Node* top;
    
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (isEmpty()) return -1;
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }

    void reverse() {
        if (!isEmpty()) {
            int temp = pop();
            reverse();
            insertAtBottom(temp);
        }
    }

    void insertAtBottom(int value) {
        if (isEmpty()) {
            push(value);
        } else {
            int temp = pop();
            insertAtBottom(value);
            push(temp);
        }
    }

    void printStack() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int n, value;

    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "Enter the elements of the stack:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        stack.push(value);
    }

    cout << "Original stack: ";
    stack.printStack();

    stack.reverse();

    cout << "Reversed stack: ";
    stack.printStack();

    return 0;
}
