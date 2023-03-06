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

Counter Counter::operator++()
{
	++count;
	return Counter(++count);
}

Counter Counter::operator--()
{
	--count;
		return Counter(count);
}

Counter Counter::operator++(int)
{
	count++;
	return Counter(count);
}

Counter Counter::operator--(int)
{
	count--;
	return Counter(count);
}


