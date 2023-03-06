#include "Employee.h"

Employee::Employee():name("Unkown"), emp_ID(0), salary(0.0)
{
}

Employee::Employee(string n, int id, float sa):name(n), emp_ID(id), salary(sa)
{
}

void Employee::print()
{
	cout << "Name = [" << name << "] Emp_id = [" << emp_ID << "] Salary = [" << salary << "]" << endl;

}
