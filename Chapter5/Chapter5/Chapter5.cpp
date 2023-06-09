#include <iostream>
using namespace std;

const float PI = 3.14159F;
struct Distance 
{
	int feet;	
	float inches;
};
struct Time { int hours, minutes, seconds; };
float circarea(float r);
double power(double n, int p = 2);
char power(char n, int p = 2);
int power(int n, int p = 2);
long power(long n, int p = 2);
float power(float n, int p = 2);
void zeroSmaller(int& n1 ,int& n2);
Distance largerDistance(Distance d1, Distance d2);
void engldisp(Distance);
long hms_to_secs(int h, int m, int s);
Time cTimeToFormat(int scs);
long FormatToSec(Time t);
void swap(int& n1, int& n2);
void swap(Time& n1, Time& n2);
int count = 0;
void CalledXTimes();
void CalledXTimes2();
struct Sterling {int pound, shilling, pence;};
Sterling BritishCurrency(int po, int s, int pe);
Sterling Sterlingfunc(Sterling c1, Sterling c2);
void SterlingDisp(Sterling c);
struct frac { int num, den; };
frac fadd(frac n1, frac n2);
frac fsub(frac n1, frac n2);
frac fmul(frac n1, frac n2);
frac fdiv(frac n1, frac n2);
int main()
{
	//************************************ ex1 *******************************************
	/*float r;
	cout << "To get area enter raduis : ";
	cin >> r;
	cout << endl << "Area : " << circarea(r);*/
	//************************************ ex2 *******************************************
	/*double n;
	int p;
	cout << "Enter n nad power : ";
	cin >> n>>p;
	cout << endl << "result  :  " << power(n, p);*/
	//************************************ ex3 *******************************************
	/*int n1 = 4, n2 = 20;
	zeroSmaller(n1, n2);
	cout << n1 << '\t' << n2;*/
	//************************************ ex4 *******************************************
	/*Distance d1 = { 454, 4 }, d2 = { 600,10 };
	engldisp(largerDistance(d1, d2));*/
	//************************************ ex5 *******************************************
	/*int h, m, s;
	char temp;
	cout << "enter time hh:mm:ss : ";
	cin >> h >> temp >> m >> temp >> s;
	cout<< "time is seconds is   " << hms_to_secs(h, m, s);*/
	//************************************ ex6 *******************************************
	/*Time t;
	char temp;
	cout << "Enter  (HH:MM:SS): ";
	cin >> t.hours >> temp >> t.minutes >> temp >> t.seconds;
	cout << FormatToSec(t)<<endl;
	Time time2 = cTimeToFormat(FormatToSec(t));
	cout  << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;*/
	//************************************ ex7 *******************************************
	/*int n;
	cout << "Enter number ";
	cin >> n;
	cout << "power is " << power(n) << endl;*/
	//************************************ ex8 *******************************************
	/*int a = 5;
	int b = 10;
	cout << "Before swapping: a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "After swapping: a = " << a << ", b = " << b << end*/;
	//************************************ ex9 *******************************************
	/*Time time1 = { 04,12, 54 }, time2 = { 12, 05, 8 };
	cout << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl; 
	cout << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl; 
	swap(time1, time2);
	cout << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
	cout << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;*/
	//************************************ ex10 *******************************************
	/*for (int i = 1; i <= 10; i++)
	{
		CalledXTimes();
	}
	for (int i = 1; i <= 5; i++)
	{
		CalledXTimes2();
	}*/
	//************************************ ex11 *******************************************
	/*int pound, shilling, pence;
	Sterling c1, c2;
	Sterling s1 = { 2, 10, 5 };
	cout << "Enter pound: ";
	cin >> pound;
	cout << "Enter shilling: ";
	cin >> shilling;
	cout << "Enter pence: ";
	cin >> pence;
	c1 = BritishCurrency(pound, shilling, pence);
	c2 = Sterlingfunc(c1, s1);
	cout << "First value is: "; 
	SterlingDisp(c1);
	cout << "Second value is: "; 
	SterlingDisp(s1);
	cout << "Sum of above values is: "; 
	SterlingDisp(c2);
	cout << endl;*/
	//************************************ ex12 *******************************************
	char ch;
	frac n1, n2;
	char temp, op;
	do
	{
	cout << "Enter first fraction: ";
	cin >> n1.num >> temp >> n1.den;
	cout << "Operator: ";
	cin >> op;
	cout << "Enter second fraction: ";
	cin >> n2.num >> temp >> n2.den;

	switch (op)
	{
	case '+':cout << "Sum is: " << fadd(n1, n2).num << "/" << fadd(n1, n2).den << endl; break;
	case '-':cout << "Subtraction is: " << fsub(n1, n2).num << "/" << fsub(n1, n2).den << endl; break;
	case '*':cout << "Multiplication is: " << fmul(n1, n2).num << "/" << fmul(n1, n2).den << endl; break;
	case '/':cout << "Division is: " << fdiv(n1, n2).num << "/" << fdiv(n1, n2).den << endl; break;
	default:cout << "Invalid op" << endl; break;
	}
	cout << "Do you want to continue (y/n): ";
	cin >> ch;
	} while (ch == 'y');

return 0;
}


float circarea(float r)
{
	return (PI * r * r);
}

double power(double n, int p)
{
	if (p == 0)return 1;
	return n * power(n, p - 1);
}

int power(int n, int p)
{
	if (p == 0)return 1;
	return n * power(n, p - 1);
}
long power(long n, int p)
{
	if (p == 0)return 1;
	return n * power(n, p - 1);
}
char power(char n, int p)
{
	if (p == 0)return 1;
	return n * power(n, p - 1);
}
float power(float n, int p)
{
	if (p == 0)return 1;
	return n * power(n, p - 1);
}
void zeroSmaller(int& n1, int& n2) 
{
	(n1 < n2)?n1 = 0:n2 =0;
}

Distance largerDistance(Distance d1, Distance d2)
{
	if ((d1.feet * 12 + d1.inches) > (d2.feet * 12 + d2.inches)) return d1;
		return d2;
}

void engldisp(Distance dd)
{
	cout << dd.feet << "\' - " << dd.inches << "\'";
}

long hms_to_secs(int h, int m, int s)
{
	return (h * 3600 + m * 60 + s);
}

Time cTimeToFormat(int scs) {
	Time result;
	result.hours = scs / 3600;
	result.minutes = (scs % 3600) / 60;
	result.seconds = (scs % 3600) % 60;
	return result;
}
long FormatToSec(Time t)
{
	return (t.hours * 3600 + t.minutes * 60 + t.seconds);
}

void swap(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap(Time& n1, Time& n2)
{
	Time temp = n1;
	n1 = n2;
	n2 = temp;
}

void CalledXTimes()
{
	::count += 1;
	cout << "Called " << ::count << " Times." << endl;
}
void CalledXTimes2()
{
	static int count = 0;
	cout << "Called " << ++count << " Times." << endl;
}
Sterling BritishCurrency(int po, int s, int pe)
{
	Sterling result;
	result.pound = po;
	result.shilling = s;
	result.pence = pe;
	return result;
}

Sterling Sterlingfunc(Sterling c1, Sterling c2)
{
	Sterling result;
	result.pound = c1.pound + c2.pound;
	result.shilling = c1.shilling + c2.shilling;
	result.pence = c1.pence + c2.pence;
	if (result.pence > 11)
	{
		result.shilling += result.pence / 12;
		result.pence = result.pence % 12;
	}
	if (result.shilling > 19)
	{
		result.pound += result.shilling / 20;
		result.shilling = result.shilling % 20;
	}
	return result;
}
void SterlingDisp(Sterling c) {
	cout << c.pound << ":" << c.shilling << ":" << c.pence;
}

frac fadd(frac n1, frac n2)
{
	frac result;
	result.num = n1.num * n2.den + n1.den * n2.num;
	result.den = n1.den * n2.den;
	return result;
}

frac fsub(frac n1, frac n2)
{
	frac result;
	result.num = n1.num * n2.den - n1.den * n2.num;
	result.den = n1.den * n2.den;
	return result;
}

frac fmul(frac n1, frac n2)
{
	frac result;
	result.num = n1.num * n2.num;
	result.den = n1.den * n2.den;
	return result;
}

frac fdiv(frac n1, frac n2)
{
	frac result;
	result.num = n1.num * n2.den ;
	result.den = n1.den * n2.num;
	return result;
}
