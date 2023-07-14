#include "Distance.h"
#include <iostream>
#include "Matrix.h"
using namespace std;

Distance::Distance()
{
}

Distance::Distance(int f, float i):feet(f) , inches(i)
{
}

void Distance::GetData()
{
	cout << "Enter feet : "; cin >> feet;
	cout << "Enter inches : "; cin >> inches;
}

void Distance::ShowData()
{
	cout << feet << "\' - " << inches << '\"';
}
Distance Distance::add_distance(Distance d)
{

	int f = feet + d.feet;
	double i = inches + d.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
void Distance::div_dist(Distance d2, int divisor)
{
	float fltfeet = d2.feet + d2.inches / 12.0;
	fltfeet /= divisor;
	feet = int(fltfeet);
	inches = (fltfeet - feet) * 12.0;
}
