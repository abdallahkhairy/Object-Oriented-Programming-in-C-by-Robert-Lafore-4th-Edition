#include "Employee.h"
#include <iostream>
using namespace std;

void Employee::GetData()
{
	cout << "Enter employee Name and Number is :" << endl;
	cin >> name >> number;
}

void Employee::PutData()
{
	cout << "Employee Name is : " << name << " and Number is : " << number << endl;;
}

