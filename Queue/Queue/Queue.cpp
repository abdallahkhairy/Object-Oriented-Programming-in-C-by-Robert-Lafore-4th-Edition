#include "Queue.h"
#include <iostream>
Queue::Queue():front(nullptr), rear(nullptr)
{
}

bool Queue::is_empty()
{
	return front ==  nullptr;
}

void Queue::enqueue(int value)
{
	auto new_node = new Node;
	new_node->data = value;
	if (is_empty())front = rear = new_node;
	else
	{
		rear->next = new_node;
		rear = new_node;
	}
}

void Queue::display()
{
	if (is_empty())std::cout << "The Queue is empty \n";
	auto temp = front;
	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	
	}
	std
		::cout << std::endl;
}
int Queue::count()
{
	int counter = 0;
	auto temp = front;
	while (temp != nullptr)
	{
		counter++;
		temp = temp->next;

	}
	return counter;
}

bool Queue::is_found(int value)
{
	auto temp = front;
	while (temp != nullptr)
	{
		if (temp->data == value)return true;
		temp = temp->next;

	}
	return false;
}

void Queue::clear()
{
	
	while (!is_empty())
	{
		dequeue();

	}
}

int Queue::dequeue()
{
	int value = -1;
	if (is_empty())std::cout<<"The Queue is empty \n";
	else if (front == rear)
	{
		value = front->data;
		delete front, rear;
		front = rear = nullptr;
	}
	else
	{
		auto delptr = front;
		value = front->data;
		front = front->next;
		delete delptr;
	}
	return value;
}
