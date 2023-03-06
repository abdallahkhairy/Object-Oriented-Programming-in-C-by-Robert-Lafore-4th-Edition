#pragma once
#include"Node.h"
#include<iostream>
using namespace std;

class BST
{
public:
	Node* root;
	BST();
	Node* insert(Node* ro, int item);
	void insert(int item);
	void preorder(Node* r);
	void inorder(Node* r);
	void postorder(Node* r);
	Node* search(Node* r, int key);
	bool search(int key);
	Node* findmin(Node* r);
	Node* findmax(Node* r);
	Node* delete_bst(Node* r, int key);
};

