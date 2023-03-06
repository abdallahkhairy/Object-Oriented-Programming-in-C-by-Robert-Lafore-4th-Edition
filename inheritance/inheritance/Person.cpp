#include "Person.h"


Person::Person():name("unknown"), gender("unknown"), age(0)
{
}

Person::Person(string n, string g, float a):name(n), gender(g), age(a)
{
}

void Person::set_age(float a)
{
	age = a;
}

float Person::get_age()
{
	return age;
}

void Person::set_name(string n)
{
	name = n;
}

string Person::get_name()
{
	return name;
}

void Person::set_gender(string g)
{
	gender = g;
}

string Person::get_gender()
{
	return gender;
}

void Person::display()
{
	cout << "***********************" << endl;
	cout << "Name is : " << name << endl;
	cout << "Gender is : " << gender << endl;
	cout << "Age is : " << age << endl;
	cout << "***********************" << endl;
}
 