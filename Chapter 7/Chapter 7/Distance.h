#pragma once
class Distance
{
	int feet;
	float inches;
public:
	Distance();
	Distance(int f, float i);
	void GetData();
	void ShowData();
	Distance add_distance(Distance d);
	void div_dist(Distance d2, int divisor);
};

