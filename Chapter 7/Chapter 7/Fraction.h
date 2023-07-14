#pragma once
class Fraction
{
	int num, den;
	char temp;
public:
	Fraction();
	Fraction(int n, int d);
	void GetData();
	void Display();
	void Sum(Fraction f1, Fraction f2);
	int Num();
	int Den();
	void Lowterms();
	void DivideBy(int n);
};

