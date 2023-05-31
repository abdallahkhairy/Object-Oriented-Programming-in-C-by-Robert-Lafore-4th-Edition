#include "TollBooth.h"
#include <iostream>
using namespace std;

TollBooth::TollBooth():total_no_cars(0), total_cash(0.0)
{
}

void TollBooth::PayCar()
{
	total_no_cars++;
	total_cash += 0.5;

}

void TollBooth::NoPayCar()
{
	total_no_cars++;
}

void TollBooth::Display()
{
	cout << " Total Number of cars : "<<total_no_cars << endl;
	cout << " Total Cash : " << total_cash << endl;
}
