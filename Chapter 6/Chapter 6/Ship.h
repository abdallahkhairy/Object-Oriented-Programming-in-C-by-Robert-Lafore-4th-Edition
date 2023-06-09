#pragma once
#include "Angle.h"
#include "SerialNo.h"

class Ship
{
	Angle latitude, longitude;
	SerialNo s;

public:
	Ship();
	void GetPosition();
	void Display();
};

