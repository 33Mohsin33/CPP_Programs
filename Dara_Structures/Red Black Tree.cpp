#include <iostream>
using namespace std;

const int RED = 0;
const int BLACK = 1;

class Node {
public:
	int val;
	int color;
	Node* parent;
	Node* left;
	Node* right;

	Node(int val) {
		this->val = val;
		this->color = RED;
		parent = left = right = nullptr;
	}
};

class RedBlackTree {
private:
	Node* root;

	void leftRotate(Node* x);
	void rightRotate(Node* x);
	void fixInsert(Node* x);
	void fixDelete(Node* x);

public:
	RedBlackTree() {
		root = nullptr;
	}

	void insert(int val);
	void remove(int val);

	// Helper functions (you can add more functions as needed)
	void insertHelper(Node* root, Node* newNode);
	void deleteNodeHelper(Node* node, int val);

	// Print tree (optional)
	void printTree(Node* node, string indent, bool last);
	void printTree();
};

// Implementation of Red-Black Tree functions will go here...

int main() {
	RedBlackTree rbt;
	while (true) {
		cout << "\n1. Insert";
		cout << "\n2. Delete";
		cout << "\n3. Print Tree";
		cout << "\n4. Exit\n";

		int ch;
		cin >> ch;
		switch (ch) {
		case 1:
			int val;
			cout << "Enter Value to Insert: ";
			cin >> val;
			rbt.insert(val);
			break;
		case 2:
			cout << "Enter Value to Delete: ";
			cin >> val;
			rbt.remove(val);
			break;
		case 3:
			rbt.printTree();
			break;
		case 4:
			return 0;
		default:
			cout << "Invalid choice.\n";
			break;
		}
	}
}

