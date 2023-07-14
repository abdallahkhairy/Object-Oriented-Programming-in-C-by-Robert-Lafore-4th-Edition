#pragma once
#include <string>
#include <cstring>
using namespace std;
class Money
{
private:
	long double dl_money;
public:
	Money();
	Money(long double dl);
	void Madd(Money m1, Money m2);
	void Getmoney();
	void Putmoney();
};


