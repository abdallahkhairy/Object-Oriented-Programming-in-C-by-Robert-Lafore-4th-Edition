#include "LinkedList.h"

LinkedList::LinkedList():head(nullptr)
{
}

bool LinkedList::is_empty()
{
	return (head == nullptr);
}

void LinkedList::insert_first(int value)
{
	auto new_node = new Node;
	new_node->data = value;
	if (is_empty())
	{
		new_node->next = nullptr;
		head = new_node;
	}
	else
	{
		new_node->next = head;
		head = new_node;

	}
}

void LinkedList::insert_before(int bvalue, int value)
{
	if (is_empty())insert_first(value);
	if (is_found(bvalue))
	{
		auto temp = head;
		auto new_node = new Node;
		new_node->data = value;
		while (temp != nullptr && temp->next->data != bvalue)temp = temp->next;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else cout << "This item isn`t in the list " << endl;
}



void LinkedList::display()
{
	auto temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << " ->  ";
		temp = temp->next;
	}
	cout << "\n";
}
int LinkedList::count()
{
	int counter=0;
	auto temp = head;
	while (temp != nullptr)
	{
		counter++;;
		temp = temp->next;
	}
	return counter;
}

bool LinkedList::is_found(int value)
{
	auto temp = head;
	while (temp != nullptr)
	{
		if (temp->data == value)return true;
		temp = temp->next;
	}
	return false;
}

void LinkedList::append(int value)
{	
	if (is_empty())insert_first(value);
	else
	{
		auto new_node = new Node;
		new_node->data = value;
		auto temp = head;
		while (temp->next != nullptr)temp = temp->next;
		temp->next = new_node;
		new_node->next = nullptr;
	}
}

void LinkedList::delete_node(int value)
{
	if (is_empty())cout << "List is already empty" << endl;
	else if(!is_found(value))cout << "this item not in list" << endl;
	else
	{
		if (head->data == value)
		{
			auto delptr = head;
			head = head->next;
			delete delptr;
		}
		else
		{
		auto prev = head;
		while (prev->next->data != value)prev = prev->next;
		auto delptr = prev->next;
		prev->next = delptr->next;
		delete delptr;
		}

		
	}
}
