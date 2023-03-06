#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList
{
public:
	Node* head;
	LinkedList();
	bool is_empty();
	void insert_first(int value);
	void insert_before(int bvalue, int value);
	void display();
	int count();
	bool is_found(int value);
	void append(int value);
	void delete_node(int value);
 };

