#pragma once
#include"Node.h"

class Queue
{
public:
	Node* front;
	Node* rear;
	Queue();
	bool is_empty();
	void enqueue(int value);
	void display();
	int dequeue();
	int count();
	bool is_found(int value);
	void clear();

};

