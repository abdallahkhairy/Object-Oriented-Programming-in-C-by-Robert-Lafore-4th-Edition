#include "Calculator.h"
#include <iostream>

using namespace std;

void Calculator::GetEquation()
{
	cout << "Enter first fraction ";
	f1.GetData();
	cout << "Operator: ";
	cin >> op;
	cout << "Enter second fraction ";
	f2.GetData();

}



Fraction Calculator::Fadd(Fraction n1, Fraction n2)
{
	
	int num = n1.Num() * n2.Den() + n1.Den() * n2.Num();
	int den = n1.Den() * n2.Den();

	return Fraction(num, den);
}

Fraction  Calculator::Fsub(Fraction n1, Fraction n2)
{
	
	int num = n1.Num() * n2.Den() - n1.Den() * n2.Num();
	int den = n1.Den() * n2.Den();
	return Fraction(num, den);
}

Fraction  Calculator::Fmul(Fraction n1, Fraction n2)
{
	
	int num = n1.Num() * n2.Num();
	int den = n1.Den() * n2.Den();
	return Fraction(num, den);
}

Fraction  Calculator::Fdiv(Fraction n1, Fraction n2)
{
	
	int num = n1.Num() * n2.Den();
	int den = n1.Den() * n2.Num();
	return Fraction(num, den);
}


void Calculator::Result()
{
	switch (op)
	{
	case '+':cout << "Sum is: "; Fadd(f1, f2).Lowterms(); break;
	case '-':cout << "Subtraction is: "; Fsub(f1, f2).Lowterms(); break;
	case '*':cout << "Multiplication is: "; Fmul(f1, f2).Lowterms(); break;
	case '/':cout << "Division is: "; Fdiv(f1, f2).Lowterms(); break;
	default:cout << "Invalid op" << endl; break;
	}
}