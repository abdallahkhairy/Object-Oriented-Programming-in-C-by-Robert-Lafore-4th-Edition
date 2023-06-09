#include "Angle.h"
#include <iostream>
using namespace std;

Angle::Angle()
{
}

Angle::Angle(int de, float m, char di) : degree(de), mins(m), dir(di)
{
}

void Angle::GetData()
{
	cout << "Enter angle value(in degrees and minutes) and a direction( E, W, S, N) \n";
	cin >> degree >> mins >> dir;
}

void Angle::ShowData()
{

	cout << "The angle value is : " << degree << '\xf8' << mins << '\'' << ' ' << dir;
	if (dir == 'W' || dir == 'E' || dir == 'w' || dir == 'e')cout << " Longitude." << endl;
	if (dir == 'N' || dir == 'S' || dir == 'n' || dir == 's')cout << " Latitude." << endl;
}
