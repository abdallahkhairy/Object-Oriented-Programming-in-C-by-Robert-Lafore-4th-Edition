#pragma once
class Queue
{
	static const int MAX = 100;
	int q[MAX];
	int head, tail;
public:
	Queue();
	void Put(int val);
	int Get();

};

