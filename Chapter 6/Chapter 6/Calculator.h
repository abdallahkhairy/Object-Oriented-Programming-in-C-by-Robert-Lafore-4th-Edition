#pragma once

#include "Fraction.h"
class Calculator
{
	Fraction f1 ,f2;
	char temp, op;

public:
	void GetEquation();
	void Result();
	Fraction Fadd(Fraction n1, Fraction n2);
	Fraction Fsub(Fraction n1, Fraction n2);
	Fraction Fmul(Fraction n1, Fraction n2);
	Fraction Fdiv(Fraction n1, Fraction n2);
};

