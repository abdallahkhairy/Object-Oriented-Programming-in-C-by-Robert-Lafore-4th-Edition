#pragma once
class Time
{
	int hrs, mins, scs;
public:
	Time();
	Time(int h, int m, int s);
	void Display() const;
	void Add(Time t1, Time t2);

};

