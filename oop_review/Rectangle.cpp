#include "Rectangle.h"
#include<iostream>
using namespace std;


void Rectangle::setLength(double len)
{
    if (len >= 0) length = len;
    else cout << "Error, please enter a positive value" << endl;
}
void Rectangle::setWidth(double w)
{
    if (w >= 0) width = w;
    else cout << "Error, please enter a positive value" << endl;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getArea()
{
    return length * width;
}

void Rectangle::print()
{
    cout << "Length = " << length << "\t" << "Width = " << width << "\n";
}


Rectangle::Rectangle():length(0), width(0)
{
}

Rectangle::Rectangle(double l, double w):length(l), width(w)
{
}

//Rectangle Rectangle::merge(Rectangle r2)
//{
//    Rectangle r3;
//    r3.length = length + r2.length;
//    r3.width = width + r2.width;
//    return r3;
//}
Rectangle Rectangle::merge(Rectangle r2)
{
    
    double l = length + r2.length;
    double w = width + r2.width;

    return Rectangle(l,w);
}

Rectangle::~Rectangle()
{
}


