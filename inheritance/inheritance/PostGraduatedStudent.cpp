#include "PostGraduatedStudent.h"

PostGraduatedStudent::PostGraduatedStudent(string n, string g, float a, int l, float gp, string d, string r):Student(n, g, a, l, gp ,d),research_interest(r)
{
}

void PostGraduatedStudent::set_research_interest(string r)
{
	research_interest = r;
}

string PostGraduatedStudent::get_research_interest()
{
	return research_interest;
}

void PostGraduatedStudent::display()
{
	Student::display();
	cout << "***********************" << endl;
	cout << "Resreach Interest is : " << research_interest << endl;
	cout << "***********************" << endl;
}
