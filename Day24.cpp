#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int value) {
        val = value;
        left = NULL;
        right = NULL;
    }
};

Node* findLCA(Node* root, int p, int q) {
    if (root == NULL)
        return NULL;
    if (root->val == p || root->val == q)
        return root;
    
    Node* leftLCA = findLCA(root->left, p, q);
    Node* rightLCA = findLCA(root->right, p, q);

    if (leftLCA != NULL && rightLCA != NULL)
        return root;

    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node* nodes[n];
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        nodes[i] = new Node(value);
    }

    for (int i = 0; i < n; i++) {
        int left, right;
        cout << "Enter left child index for node " << nodes[i]->val << " (-1 if none): ";
        cin >> left;
        cout << "Enter right child index for node " << nodes[i]->val << " (-1 if none): ";
        cin >> right;

        if (left != -1) {
            nodes[i]->left = nodes[left];
        }
        if (right != -1) {
            nodes[i]->right = nodes[right];
        }
    }

    int p, q;
    cout << "Enter the value of node p: ";
    cin >> p;
    cout << "Enter the value of node q: ";
    cin >> q;

    Node* lca = findLCA(nodes[0], p, q);
    if (lca != NULL) {
        cout << "The Lowest Common Ancestor is: " << lca->val << endl;
    } else {
        cout << "No common ancestor found." << endl;
    }

    return 0;
}
