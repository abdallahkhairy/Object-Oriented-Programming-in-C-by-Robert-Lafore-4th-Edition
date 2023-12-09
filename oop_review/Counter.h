#pragma once
class Counter
{
private:
	unsigned int count;

public:
	Counter();
	Counter(int c);
	int get_count();
	void operator ++();
	void operator --();
	void operator ++(int);
	void operator --(int);

};

