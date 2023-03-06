#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
private: 
	int length;
	int width;
public:
	Rectangle(int l, int w, string c);
	int area();
	void draw();
	void earse();
	 

};

