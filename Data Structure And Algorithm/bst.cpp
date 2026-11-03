#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void kthLevel(Node* root, int k) {
    if(root == NULL) {
        return;
    }

    if(k == 1) {
        cout << root-> << " ";
        return;
    }
    kthLevel(root->left, k-1);
    KthLevel(root->right, k-1);
}

int main() {
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    kthLevel(root, 3);

    return 0;
}

// class Node
// {
// public:
    // int data;
    // Node *left;
    // Node *right;
// 
    // Node(int val)
    // {
        // data = val;
        // left = right = NULL;
    // }
// };
// 
// Node* insert(Node* root, int val) {
    // if(root == NULL) {
        // return new Node(val);
    // }
    // if(val < root->data) {
        // root->left = insert(root->left, val);
    // } else {
        // root->right = insert(root->right, val);
    // }
    // return root;
// }
// 
// Node* buildBST(vector<int> arr) {
    // Node* root = NULL;
// 
    // for(int val : arr) {
        // root = insert(root, val);
    // }
    // return root;
// }
// 
// void inorder(Node* root) {
    // if(root == NULL) {
        // return;
    // } 
    // inorder(root->left);
    // cout << root->data << " ";
    // inorder(root->right);
// } 
// 
// bool search(Node* root, int key) {
        // if(root == NULL) {
            // return false;
        // }
        // if (key == root->data){
            // return true;
        // }
        // if(key < root->data) {
            // return search(root->left, key);
        // } else {
            // return search(root->right, key);
        // }
// }
// 
//  Node* delNode(Node* root, int key) {
    // if root ==
//  }
// 
// int main() {
    // vector<int> arr = {3, 2, 1, 5, 6, 4};
    // Node* root = buildBST(arr);
//  
    // cout << search(root, 5) << endl;
// 
    // return 0;
// }