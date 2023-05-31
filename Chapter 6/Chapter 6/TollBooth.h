#pragma once
class TollBooth
{
	unsigned int total_no_cars;
	double total_cash;
public:
	TollBooth();
	void PayCar();
	void NoPayCar();
	void Display();
};

