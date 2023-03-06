#pragma once
#include <iostream>
using namespace std;

class Employee
{
protected: 
	string name;
	int emp_ID;
	float salary;
public:
	Employee();
	Employee(string n, int id ,float sa);
	virtual float get_total_salary() = 0;
	virtual void print();

};

