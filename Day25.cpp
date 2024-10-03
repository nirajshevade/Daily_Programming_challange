#include <iostream>
#include <limits.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insertLevelOrder(int arr[], Node* root, int i, int n) {
    if (i < n && arr[i] != -1) {
        Node* temp = createNode(arr[i]);
        root = temp;

        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

bool isValidBST(Node* root, long long minValue, long long maxValue) {
    if (root == nullptr) {
        return true;
    }
    if (root->data <= minValue || root->data >= maxValue) {
        return false;
    }
    return isValidBST(root->left, minValue, root->data) &&
           isValidBST(root->right, root->data, maxValue);
}

int main() {
    int n;
    cout << "Enter the number of nodes in the tree: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the tree nodes in level order (use -1 for null): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* root = nullptr;
    root = insertLevelOrder(arr, root, 0, n);

    if (isValidBST(root, LLONG_MIN, LLONG_MAX)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
