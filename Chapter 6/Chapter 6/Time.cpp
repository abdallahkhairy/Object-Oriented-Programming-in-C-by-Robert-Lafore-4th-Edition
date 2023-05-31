#include "Time.h"
#include <iostream>
using namespace std;
Time::Time():hrs(0), mins(0), scs(0)
{
}

Time::Time(int h, int m, int s):hrs(h), mins(m), scs(s)
{
}

void Time::Display() const
{
	cout << hrs << ':' << mins << ':' << scs;
}

void Time::Add(Time t1, Time t2)
{
	scs = t1.scs + t2.scs;
	if (scs > 59)
	{
		scs -=  60;
		mins++;
	}	
	mins = t1.mins + t2.mins;
	if (mins > 59)
	{
		mins -= 60;
		hrs++;
	}	
	hrs = t1.hrs + t2.hrs;
}
