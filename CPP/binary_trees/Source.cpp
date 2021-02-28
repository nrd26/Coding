#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;
};

class Tree {
public:
	Node* root;

	Tree() {
		root = NULL;
	}

	Node* createTree() {
		int val;
		cout << ">";
		cin >>val;
		if (val == -1) {
			return NULL;
		}
		Node* temp;
		temp->data = val;
		cout << "Left child of" << val << "is:" << endl;
		temp->left = createTree();
		cout << "Right child of" << val << "is:" << endl;
		temp->right = createTree();

	}

	Node* create() {
		cout << "Enter -1 to break" << endl;
		cout << "Enter value of root" << endl;
		root = createTree();
	}

	void printPre(Node *r) {
		if (r == NULL) return;
		cout << r;
		printPre(r->left);
		printPre(r->right);
	}

	void printIn(Node* r) {
		if (r == NULL) return;
		printPre(r->left);
		cout << r;
		printPre(r->right);
	}

	void printPost(Node* r) {
		if (r == NULL) return;
		printPre(r->left);
		printPre(r->right);
		cout << r;
	}
};

int main() {
	Tree T;
	T.createTree();
	T.printIn();
	T.printPost();
	T.printPre();
}

