#include "Rectangle.h"

Rectangle::Rectangle(int l, int w, string c) :Shape(c), length(l), width(w)
{
}

int Rectangle::area()
{
	cout << "Rectangle class area :" << (length*width) << endl;
	return length * width;
}

void Rectangle::draw()
{
	cout << "Draw Rectangle" << endl;
}

void Rectangle::earse()
{
	cout << "Erase Rectangle" << endl;
}
