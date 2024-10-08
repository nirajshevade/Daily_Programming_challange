#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isMirror(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) return true;
    if (left == nullptr || right == nullptr) return false;

    if (left->val == right->val) {
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
    return false;
}

bool isSymmetric(TreeNode* root) {
    if (root == nullptr) return true;
    return isMirror(root->left, root->right);
}

TreeNode* buildTree(int* arr, int n, int index) {
    if (index >= n || arr[index] == -1) return nullptr;

    TreeNode* root = new TreeNode(arr[index]);
    root->left = buildTree(arr, n, 2 * index + 1);
    root->right = buildTree(arr, n, 2 * index + 2);
    return root;
}

int main() {
    int n;
    cout << "Enter the number of nodes in the tree: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the tree elements (-1 for NULL): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    TreeNode* root = buildTree(arr, n, 0);
    cout << (isSymmetric(root) ? "true" : "false") << endl;

    delete[] arr;
    return 0;
}
