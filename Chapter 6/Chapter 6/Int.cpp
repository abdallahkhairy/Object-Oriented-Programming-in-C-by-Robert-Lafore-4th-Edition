#include "Int.h"
#include <iostream>
using namespace std;

Int::Int():num(0)
{
}

Int::Int(int n):num(n)
{
}

void Int::Display()
{
	cout << num << endl;
}

Int Int::add(Int n)
{
	int no = n.num + num;
	return Int(no);
}
