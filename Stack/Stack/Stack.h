#pragma once
#include "Node.h"

class Stack
{

	Node* top;
public:
	Stack();
	bool is_empty();
	void push(int value);
	int pop();
	int peek();
	int count();
	bool is_found(int value);
	void display();
};

