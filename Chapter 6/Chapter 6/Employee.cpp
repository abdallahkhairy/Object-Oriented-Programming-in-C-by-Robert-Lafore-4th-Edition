#include "Employee.h"
#include <iostream>
using namespace std;

void Employee::GetData()
{
	cout << "Enter Employee Number : ";
	cin >> emp_no;
	cout << "Enter Employee Compensation : ";
	cin >> compensaion;
}

void Employee::Display()
{
	cout << "Employee Number : " << emp_no << endl;
	cout << "Employee Compensation : " << compensaion << endl;
}
