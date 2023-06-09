#include "Ship.h"
#include <iostream>

using namespace std;

Ship::Ship()
{
}

void Ship::GetPosition()
{
	cout << "Enter the ship longitue : " << endl;
	longitude.GetData();
	cout << "Enter the ship latitude : " << endl;
	latitude.GetData();
}

void Ship::Display()
{
	longitude.ShowData();
	latitude.ShowData();   
	s.ShowSerial();

}
