#pragma once
class Distance
{
private:
	int feet;
	double inches;


public:
	void setDistance(int f, double i);
	Distance add_distance(Distance d);
	void print();
	Distance operator +(Distance d2);
	Distance operator -(Distance d2);
	Distance();
	Distance(int f ,double i);
	~Distance();
};

