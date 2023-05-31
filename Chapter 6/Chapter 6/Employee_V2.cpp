#include "Employee_V2.h"
#include <iostream>
using namespace std;

void Employee_V2::GetData()
{
	cout << "Enter Employee Number : ";
	cin >> emp_no;
	cout << "Enter Employee Compensation : ";
	cin >> compensaion;
	cout << "Enter employee position (first letter only) laborer, secretary,\nmanager, accountant, executive, researcher): " << endl;
	cin >> initial;
	switch (initial)
	{
	case('l'):position = laborer; break;
	case('s'):position = secretary; break;
	case('m'):position = manager; break;
	case('a'):position = accountant; break;
	case('e'):position = executive; break;
	case('r'):position = researcher; break;
	default:cout << "this charachter isn`t an initial a role."; break;
	}
	date_of_hiring.GetDate();
}

void Employee_V2::Display()
{
	cout << "Employee Number : " << emp_no << endl;
	cout << "Employee Compensation : " << compensaion << endl;
	cout << "Employee Position : ";
	switch (position)
	{
	case(laborer):cout << "laborer"; break;
	case(secretary):cout << "secretary"; break;
	case(manager):cout << "manager"; break;
	case(accountant):cout << "accountant"; break;
	case(executive):cout << "executive"; break;
	case(researcher):cout << "researcher"; break;
	default:break;
	}
	cout << endl;
	date_of_hiring.ShowDate();
}
