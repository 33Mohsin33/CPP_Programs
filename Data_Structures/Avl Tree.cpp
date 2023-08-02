#include <iostream>
using namespace std;

class Node {
public:
    int val;
    int height;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->height = 1;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class AVLTree {
private:
    Node* root;

    int getHeight(Node* node);
    int getBalanceFactor(Node* node);
    Node* rotateRight(Node* y);
    Node* rotateLeft(Node* x);
    Node* insertHelper(Node* node, int val);

public:
    AVLTree() {
        root = nullptr;
    }

    void insert(int val);
    void inOrderTraversal(Node* node);
    void inOrderTraversal();
};

int AVLTree::getHeight(Node* node) {
    if (node == nullptr)
        return 0;
    return node->height;
}

int AVLTree::getBalanceFactor(Node* node) {
    if (node == nullptr)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

Node* AVLTree::rotateRight(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node* AVLTree::rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node* AVLTree::insertHelper(Node* node, int val) {
    if (node == nullptr)
        return new Node(val);

    if (val < node->val)
        node->left = insertHelper(node->left, val);
    else if (val > node->val)
        node->right = insertHelper(node->right, val);
    else
        return node; // Duplicate values are not allowed

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

    int balance = getBalanceFactor(node);

    // Left Left Case
    if (balance > 1 && val < node->left->val)
        return rotateRight(node);

    // Right Right Case
    if (balance < -1 && val > node->right->val)
        return rotateLeft(node);

    // Left Right Case
    if (balance > 1 && val > node->left->val) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    // Right Left Case
    if (balance < -1 && val < node->right->val) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

void AVLTree::insert(int val) {
    root = insertHelper(root, val);
}

void AVLTree::inOrderTraversal(Node* node) {
    if (node != nullptr) {
        inOrderTraversal(node->left);
        cout << node->val << " ";
        inOrderTraversal(node->right);
    }
}

void AVLTree::inOrderTraversal() {
    inOrderTraversal(root);
}

int main() {
    AVLTree avl;
    int val;
    
    while (true) {
        cout << "\n1. Insert";
        cout << "\n2. In-order Traversal";
        cout << "\n3. Exit\n";
        
        int ch;
        cin >> ch;
        
        switch (ch) {
            case 1:
                cout << "Enter Value to Insert: ";
                cin >> val;
                avl.insert(val);
                break;
            case 2:
                cout << "In-order Traversal: ";
                avl.inOrderTraversal();
                cout << endl;
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }
}

