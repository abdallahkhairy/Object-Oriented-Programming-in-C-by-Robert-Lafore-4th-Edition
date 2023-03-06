#pragma once
#include "Employee.h"
class Sales : public Employee
{
private:
	float gross_sales;
	float commisson_rate;
public:
	Sales(string n, int id, float sa, float gs, float cr);
	float get_total_salary();
	void print();
};

