#pragma once
#include "Date.h"
enum etype { laborer, secretary, manager, accountant, executive, researcher };
class Employee_V2
{
	int emp_no;
	float compensaion;
	etype position;
	Date date_of_hiring;
	char initial;
public:
	void GetData();
	void Display();
};

