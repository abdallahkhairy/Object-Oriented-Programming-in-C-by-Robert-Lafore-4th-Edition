#include "Calculator.h"

int Calculator::add(int num1, int num2)
{
    return num1+num2;
}

int Calculator::add(int num1, int num2, int num3)
{
    return num1 + num2+num3 ;
}

double Calculator::add(double num1, double num2)
{
    return num1+num2;
}

int Calculator::subtract(int num1, int num2)
{
    return num1 -num2;
}

int Calculator::subtract(int num1, int num2, int num3)
{
    return num1 - num2 -num3;
}

double Calculator::subtract(double num1, double num2)
{
    return num1 - num2;
}

int Calculator::multiply(int num1, int num2)
{
    return num1 * num2;
}

int Calculator::multiply(int num1, int num2, int num3)
{
    return num1 * num2* num3;
}

double Calculator::multiply(double num1, double num2)
{
    return num1 * num2;
}
