#include "Date.h"
#include <iostream>
using namespace std;
void Date::GetDate()
{
	cout << "Enter date (DD/MM/YYYY): ";
	cin >> day >> temp >> month >> temp >> year;
}

void Date::ShowDate()
{
	cout << "Date is " << day << "/" << month << "/" << year << endl; 
}
