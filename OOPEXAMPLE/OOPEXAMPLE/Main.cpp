#include <iostream>
using namespace std;

#include "Employee.h"
#include "Sales.h"
#include "Engineer.h"


void main()
{
	Employee* emp_ptr;
	Sales s1("BogaBoga", 150, 5000, 50000, 0.1);
	Engineer e1("MogaMoga", 120, 7000, "SW Engineer", 5, 10, 50);
	emp_ptr = &s1;
	emp_ptr->get_total_salary();
	emp_ptr->print();
	emp_ptr = &e1;
	emp_ptr->get_total_salary();
	emp_ptr->print();
	


}