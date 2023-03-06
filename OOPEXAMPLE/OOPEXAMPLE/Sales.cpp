#include "Sales.h"

Sales::Sales(string n, int id, float sa, float gs, float cr) :Employee(n, id, sa), gross_sales(gs), commisson_rate(cr)
{
}

float Sales::get_total_salary()
{
	return salary + (gross_sales * commisson_rate);
}

void Sales::print()
{
	Employee::print();
	cout << "Gross Sales = [" << gross_sales << "] Commisson Rate = [" << commisson_rate << "]" << endl;
}
