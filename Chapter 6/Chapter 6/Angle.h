#pragma once
class Angle
{
	int degree;
	float mins;
	char dir;
public:
	Angle();
	Angle(int de, float m, char di);
	void GetData();
	void ShowData();
};

