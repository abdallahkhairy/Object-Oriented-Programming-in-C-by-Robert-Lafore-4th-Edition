#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction() :num(0), den(0)
{
}

Fraction::Fraction(int n, int d) :num(n), den(d)
{
}

void Fraction::GetData()
{
	cout << "Enter Fraction Like that \"num/den\" : ";
	cin >> num >> temp >> den;
}

void Fraction::Display()
{
	cout << num << '/' << den << endl;
}

void Fraction::Sum(Fraction f1, Fraction f2)
{
	num = f1.num * f2.den + f2.num * f1.den;
	den = f1.den * f2.den;
}

int Fraction::Num()
{
	return num;
}

int Fraction::Den()
{
	return den;
}
void Fraction::Lowterms() // change ourself to lowest terms
{
	long tnum, tden, temp, gcd;
	tnum = labs(num); // use non-negative copies
	tden = labs(den); // (needs cmath)
	if (tden == 0) // check for n/0
	{
		cout << "Illegal fraction : division by 0"; exit(1);
	}
	else if (tnum == 0) // check for 0/n
	{
		num = 0; den = 1; return;
	}
	// this ‘while’ loop finds the gcd of tnum and tden
	while (tnum != 0)
	{
		if (tnum < tden) // ensure numerator larger
		{
			temp = tnum; tnum = tden; tden = temp;
		} // swap them
		tnum = tnum - tden; // subtract them
	}
	gcd = tden; // this is greatest common divisor
	num = num / gcd; // divide both num and den by gcd
	den = den / gcd; // to reduce frac to lowest terms
	cout << num << '/' << den << endl;
}

void Fraction::DivideBy(int n) // change ourself to lowest terms
{
	long tnum, tden, temp, gcd;
	tnum = labs(num); // use non-negative copies
	tden = labs(den); // (needs cmath)
	if (tden == 0) // check for n/0
	{
		cout << "Illegal fraction : division by 0"; exit(1);
	}
	else if (tnum == 0) // check for 0/n
	{
		num = 0; den = 1; return;
	}
	// this ‘while’ loop finds the gcd of tnum and tden
	while (tnum != 0)
	{
		if (tnum < tden) // ensure numerator larger
		{
			temp = tnum; tnum = tden; tden = temp;
		} // swap them
		tnum = tnum - tden; // subtract them
	}
	gcd = tden; // this is greatest common divisor
	num = num / gcd; // divide both num and den by gcd
	den = (den*n) / gcd; // to reduce frac to lowest terms
	cout << num << '/' << den << endl;
}
