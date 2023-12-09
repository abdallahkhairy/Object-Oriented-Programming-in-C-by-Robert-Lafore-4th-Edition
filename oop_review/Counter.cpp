#include "Counter.h"

Counter::Counter() :count(0)
{
}

Counter::Counter(int c) :count(c)
{
}

int Counter::get_count()
{
	return count;
}

 void Counter::operator++()
{
	++count;
}

 void Counter::operator--()
{
	--count;
}

 void Counter::operator++(int)
{
	count++;
}

 void Counter::operator--(int)
{
	count--;
}


