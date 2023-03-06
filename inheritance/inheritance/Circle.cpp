#include "Circle.h"

Circle::Circle(int r, string c):Shape(c), radius(r)
{
}

int Circle::area()
{
	cout << "Circle class area :" << (radius*radius*3.14) << endl;
	return (radius * radius * 3.14);
}

void Circle::draw()
{
	cout << "Draw Circle" << endl;
}

void Circle::earse()
{
	cout << "Earse Circle" << endl;
}
