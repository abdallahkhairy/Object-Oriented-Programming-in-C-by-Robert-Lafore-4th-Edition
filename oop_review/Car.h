#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string maker;
	int model;
	string color; 
	static int counter ;

public:
	void setMaker(string m);
	string getMaker();
	void setModel(int year);
	int getCarsNo();
	int getModel();
	Car();
	Car(string m, int mod, string c);
	~Car();
};
