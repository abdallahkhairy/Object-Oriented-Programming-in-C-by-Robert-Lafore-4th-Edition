#include "SafeArray.h"
#include <iostream>
using namespace std;

void SafeArray::PutEl(int index, int val)
{
	if (index >= 0 && index < LIMIT)
		arr[index] = val;
	else
		cout << " Index is out of Boundries " << endl;
}

int SafeArray::GetEl(int index)
{
	if (index >= 0 && index < LIMIT)
		return arr[index] ;
	else
		cout << " Index is out of Boundries " << endl;
	return -1;
	
}
