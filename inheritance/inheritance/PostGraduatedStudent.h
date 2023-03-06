#pragma once
#include "Student.h"
class PostGraduatedStudent :public Student
{
private:
	string research_interest;
	 
public:
	PostGraduatedStudent(string n, string g, float a, int l, float gp, string d, string r);
	void set_research_interest(string r);
	string get_research_interest();
	void display();

};

