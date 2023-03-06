#include "Distance.h"
#include<iostream>
using namespace std;

void Distance::setDistance(int f, double i)
{
	feet = f;
	inches = i;
}

//Distance Distance::add_distance(Distance d)
//{
//	Distance result;
//	result.feet = feet + d.feet;
//	result.inches = inches + d.inches;
//	return result;
//}
Distance Distance::add_distance(Distance d)
{
	
	int f = feet + d.feet;
	double i = inches + d.inches;
	return Distance(f,i);
}

void Distance::print()
{
	cout << "Feet = " << feet << "\t" << "Inches = " << inches << "\n";
}

Distance Distance::operator+(Distance d2)
{
	int f = feet + d2.feet;
	double i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f,i);
}

Distance Distance::operator-(Distance d2)
{
	int f = feet - d2.feet;
	double i = inches - d2.inches;
	
	return Distance(f<0?-f:f, i<0?-i:i);
}

Distance::Distance():feet(0),inches(0.0)
{
}

Distance::Distance(int f, double i) :feet(f), inches(i)
{
}

Distance::~Distance()
{
}
