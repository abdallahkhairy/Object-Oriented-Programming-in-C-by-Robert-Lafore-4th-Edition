#include "Car.h"

int Car::counter = 0;
void Car::setMaker(string m)
{
	maker = m;
}

string Car::getMaker()
{
	return maker;
}

void Car::setModel(int year)
{
	model = year;
}

int Car::getCarsNo()
{
	return counter;
}

int Car::getModel()
{
	return model;
}

Car::Car() :maker("Not defined"), model(999), color("Not defined")
{
	counter++;
}

Car::Car(string m, int mod, string c) :maker(m), model(mod), color(c)

{
	counter++;
}

Car::~Car()
{
	// counter--;
}


