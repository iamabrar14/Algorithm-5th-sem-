#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
Node* left;
Node* right;
};
Node* createNewNode(Node* root, int data) {
Node* newNode = new Node(); // heap
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
Node* insert(Node* root, int data) {
if (root == NULL) {
root = createNewNode(root, data);
return root;
}
else if (data <= root->data) root->left = insert(root->left, data);
else root->right = insert(root->right, data);
return root;
}
bool search(Node* root, int key) {
if (root == NULL) return false;
else if (root->data == key) return true;
else if (key < root->data) return search(root->left,key);
else return search(root->right,key);
}
int findMin(Node* root) {
if (root == NULL) {
cout << "Tree does not exist!" << endl;
return -1;
}
// iterative
//while (root->left != NULL) {
// root = root->left;

//}
//return root->data;
// recursive
if (root->left == NULL)
return root->data;
return findMin(root->left);
}
void preorder(Node* root) {
if (root == NULL) return;
cout << root->data << " ";
preorder(root->left);
preorder(root->right);
}
void inorder(Node* root) {
if (root == NULL) return;
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}
void postorder(Node* root) {
if (root == NULL) return;
postorder(root->left);
postorder(root->right);
cout << root->data << " ";
}
int main() {
Node* root = NULL;
root = insert(root, 15);
root = insert(root, 20);
root = insert(root, 25);
root = insert(root, 10);
int key;
cout << "Please enter a value to search: ";
cin >> key;
if (search(root, key)) cout << "Found\n";
else cout << "Not found\n";
cout << "Min Value: " << findMin(root) << endl;

inorder(root);
return 0;
}
