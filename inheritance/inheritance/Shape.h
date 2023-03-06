#pragma once
#include <iostream>
using namespace std;
class Shape
{
	string color;
public:
	Shape(string c);
	virtual int area() = 0 ;
	virtual void draw() = 0;
	virtual void earse() = 0;
	virtual void display()final;

};

