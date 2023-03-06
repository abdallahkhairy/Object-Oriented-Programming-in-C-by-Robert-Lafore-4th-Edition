#pragma once
class Counter
{
private:
	unsigned int count;

public:
	Counter();
	Counter(int c);
	int get_count();
	Counter operator ++();
	Counter operator --();
	Counter operator ++(int);
	Counter operator --(int);

};

