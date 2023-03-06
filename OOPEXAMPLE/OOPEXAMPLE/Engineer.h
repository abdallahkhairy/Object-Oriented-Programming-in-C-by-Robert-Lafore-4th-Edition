#pragma once
#include "Employee.h"
class Engineer : public Employee
{
private:
	string speciality;
	int experience;
	int overtime_hours;
	float overtime_hour_rate;
public:
	Engineer(string n, int id, float sa, string sp, int ex, int oh, float ohr );
	float get_total_salary();
	void print();
};

