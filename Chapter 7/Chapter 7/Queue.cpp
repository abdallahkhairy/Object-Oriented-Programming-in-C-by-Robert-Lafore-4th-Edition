#include "Queue.h"
Queue::Queue() :head(0), tail(0){}

void Queue::Put(int val)
{
	if (tail == MAX - 1)
	{
		tail = -1;
	}
	q[tail++] = val;
	
}

int Queue::Get()
{
	if (head == MAX - 1)
	{
		head = -1;
	}
	return q[head++];
}
