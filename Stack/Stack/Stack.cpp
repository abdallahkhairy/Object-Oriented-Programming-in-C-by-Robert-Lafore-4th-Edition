#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack():top(nullptr)
{
}

bool Stack::is_empty()
{
	return top == nullptr;
}

void Stack::push(int value)
{
	auto new_node = new Node;
	new_node->data = value;
	if (is_empty())
	{
		new_node->next = nullptr;
		top = new_node;
	}
	else
	{
		new_node->next = top;
		top = new_node;
	}
}

int Stack::pop()
{
	int popped_data;
	auto delptr = top;
	popped_data = top->data;
	top = top->next;
	delete delptr;
	return popped_data; 
}

int Stack::peek()
{
	return top->data;
}

int Stack::count()
{
	int count = 0;
	auto temp = top;
	while (temp != nullptr) {
		temp = temp->next;
		count++;
	}
	return count;
}

bool Stack::is_found(int value)
{
	auto temp = top;
	while (temp != nullptr && temp->data != value)
	{
		if(temp->data == value)return true;
		temp = temp->next;
		
	}
	return false;
}

void Stack::display()
{
	auto temp = top;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
