// Chapter4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Phone_n { int area, exchange, number; };
struct Point_coor { int x, y; };
struct Distance { int feet; float inches; };
struct Volume { Distance height, x_c, y_c; };
struct Date { int day, month, year; };
struct Employee { int employee_n; float com; };
struct Employee_ex7 { int employee_n; float com; Date daat; };
enum etype {laborer, secretary, manager, accountant, executive,researcher};
struct sterling { int pounds, shillings, pence; };
void emp_type(char l);
struct frac { int num, den; };
struct Time { int hours, minutes, seconds; };
sterling convert_to_s(double d_pounds);
Time cTimeToFormat(int scs);


int main()
{	
	//ex1

	/*Phone_n myphone{874, 587, 2654};
	Phone_n phone;
	cout << "My phone:" << '(' << myphone.area << ')' << " " << myphone.exchange << " " << myphone.number << endl;
	cout << "Enter your area code, exchange, and number" << endl;
	cin >> phone.area >> phone.exchange >> phone.number;
	cout << "Your phone:" << '(' << myphone.area << ')' << " " << myphone.exchange << " " << myphone.number << endl;*/

	//ex2
	
	/*Point_coor p1, p2, psum;
	cout << "Enter your point coordinates : " << endl;
	cin >> p1.x >> p1.y;
	cout << "Enter 2nd your point coordinates : " << endl;
	cin >> p2.x >> p2.y;
	cout << "Sum is :" << p1.x + p2.x << " " << p2.y + p2.y;*/
	
	//ex3
	/*Volume v1 = { {5,7},{1,2.5},{10,4.9} };

	float h = v1.height.feet + v1.height.inches / 12;
	float x = v1.x_c.feet + v1.x_c.inches / 12;
	float y = v1.y_c.feet + v1.y_c.inches / 12;
	cout << "Volume : " << h * x * y << endl;*/


	//ex4
	/*Employee e1, e2, e3;
	cout << "Enter 1st employee number and compensation " << endl;
	cin >> e1.employee_n >> e1.com;
	cout << "Enter 2nd employee number and compensation " << endl;
	cin >> e2.employee_n >> e2.com;
	cout << "Enter 3rd employee number and compensation " << endl;
	cin >> e3.employee_n >> e3.com;
	cout << "Enter 1st employee number :" << e1.employee_n << " compensation :" << e1.com<< endl;
	cout << "Enter 2nd employee number :" << e2.employee_n << " compensation :" << e2.com << endl;
	cout << "Enter 3rd employee number :" << e3.employee_n << " compensation :" << e3.com << endl;*/

	 //ex5 
	/*Date d1; char temp;
	cout << "Enter date (DD/MM/YYYY): ";
	cin >> d1.day >> temp >> d1.month >> temp >> d1.year;
	cout << "Date is " << d1.day << "/" << d1.month << "/" << d1.year << endl;*/

	//ex6
	/*int counter;
	char inital;
	etype emp;
	cout << "Enter employee type (first letter only) laborer, secretary,\nmanager, accountant, executive, researcher): " << endl;
	cin >> inital;

	switch (inital)
	{
	case('l'):emp = laborer; break;
	case('s'):emp = secretary; break;
	case('m'):emp = manager; break;
	case('a'):emp = accountant; break;
	case('e'):emp = executive; break;
	case('r'):emp = researcher; break;
	default:cout << "this charachter isn`t an initial a role."; break;
	}
	switch (emp)
	{
	case(0):cout << "laborer"; break;
	case(1):cout << "secretary"; break;
	case(2):cout << "manager"; break;
	case(3):cout << "accountant"; break;
	case(4):cout << "executive"; break;
	case(5):cout << "researcher"; break;
	default:
		break;
	}*/

	//ex7

	//Employee_ex7 e1, e2, e3;
	//char temp,l1,l2,l3;
	//cout << "Enter 1st employee number, compensation , date DD/MM/YYYY and type inital" << endl;
	//cin >> e1.employee_n >> e1.com >> e1.daat.day >> temp >> e1.daat.month >> temp >> e1.daat.year >> l1; //enter date is this format DD/MM/YYYY
	///*cout << "Enter 2nd employee number and compensation and date" << endl;
	//cin >> e2.employee_n >> e2.com >> e2.daat.day >> temp >> e2.daat.month >> temp >> e2.daat.year >> l2;
	//cout << "Enter 3rd employee number and compensation and date" << endl;
	//cin >> e3.employee_n >> e3.com >> e3.daat.day >> temp >> e3.daat.month >> temp >> e3.daat.year >> l3;*/
	//cout << "1st employee number :" << e1.employee_n << " compensation :" << e1.com << endl;
	//cout << "Date is " << e1.daat.day << "/" << e1.daat.month << "/" << e1.daat.year << endl;
	//emp_type(l1);
	///*cout << "2nd employee number :" << e2.employee_n << " compensation :" << e2.com << endl;
	//cout << "Date is " << e2.daat.day << "/" << e2.daat.month << "/" << e2.daat.year << endl;
	//emp_type(l2);
	//cout << "3rd employee number :" << e3.employee_n << " compensation :" << e3.com << endl;
	//cout << "Date is " << e3.daat.day << "/" << e3.daat.month << "/" << e3.daat.year << endl;
	//emp_type(l3);*/

	//ex 8
	/*frac n1, n2, n3;
	char temp;
	cout << "Enter first fraction \"x/y\": ";
	cin >> n1.num >> temp >> n1.den;
	cout << "Enter second fraction: ";
	cin >> n2.num >> temp >> n2.den;

	n3.num = n1.num * n2.den + n1.den * n2.num;
	n3.den = n1.den * n2.den;
	cout << "Sum is: " << n3.num << "/" << n3.den << endl;*/

	//ex9
	/*Time t1;
	char temp;
	cout << "Enter (HH:MM:SS): ";
	cin >> t1.hours >> temp >> t1.minutes >> temp >> t1.seconds;
	int total_secs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	cout << "total_secs : " << total_secs;*/

	


	//ex10
	/*double dpounds;
	cout << "pounds : " << endl;
	cin >> dpounds;
	sterling s = convert_to_s(dpounds);
	cout << "pounds :" << s.pounds << "  pence :" << s.shillings << "  shillings : " << s.pence;*/

	//ex11
	/*Time t1, t2 , Tsum;
	char temp;
	cout << "Enter 1st (HH:MM:SS): ";
	cin >> t1.hours >> temp >> t1.minutes >> temp >> t1.seconds;
	cout << "Enter 2nd (HH:MM:SS): ";
	cin >> t2.hours >> temp >> t2.minutes >> temp >> t2.seconds;
	int total_secs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds +
		t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
	Tsum = cTimeToFormat(total_secs);
	cout << "Summation is: " << Tsum.hours << ':' << Tsum.minutes << ':' << Tsum.seconds << endl;*/

	//ex12 
	char ch;
	do
	{
		frac n1,n2;
		char temp, op;
		cout << "Enter first fraction: ";
		cin >> n1.num >> temp >> n1.den;
		cout << "Operator: ";
		cin >> op;
		cout << "Enter second fraction: ";
		cin >> n2.num >> temp >> n2.den;

		switch (op)
		{
		case '+':cout << "Sum is: " << n1.num * n2.den + n1.den * n2.num << "/" << n1.den * n2.den << endl; break;
		case '-':cout << "Subtraction is: " << n1.num * n2.den - n1.den * n2.num << "/" << n1.den * n2.den << endl; break;
		case '*':cout << "Multiplication is: " << n1.num * n2.num << "/" << n1.den * n2.den << endl; break;
		case '/':cout << "Division is: " << n1.num * n2.den << "/" << n1.den * n2.num << endl; break;
		default:cout << "Invalid op"; break;
		}
		cout << "Do you want to continue (y/n): ";
		cin >> ch;
	} while (ch == 'y');
	
}
void emp_type(char inital)
{
	//char inital;
	etype emp;
	//cout << "Enter employee type (first letter only) laborer, secretary,\nmanager, accountant, executive, researcher): " << endl;
	//cin >> inital;

	switch (inital)
	{
	case('l'):emp = laborer; break;
	case('s'):emp = secretary; break;
	case('m'):emp = manager; break;
	case('a'):emp = accountant; break;
	case('e'):emp = executive; break;
	case('r'):emp = researcher; break;
	default:cout << "this charachter isn`t an initial of a role."; break;
	}
	switch (emp)
	{
	case(0):cout << "laborer"; break;
	case(1):cout << "secretary"; break;
	case(2):cout << "manager"; break;
	case(3):cout << "accountant"; break;
	case(4):cout << "executive"; break;
	case(5):cout << "researcher"; break;
	default:
		break;
	}

}

sterling convert_to_s(double d_pounds)
{
	sterling result;
	result.pounds = int(d_pounds);
	double shillings = (d_pounds - result.pounds)*20;
	result.shillings = shillings;
	double pence = shillings - result.shillings;
	result.pence = pence*12;
	return result;
}

Time cTimeToFormat(int scs) {
	Time result;
	result.hours = scs / 3600;
	result.minutes = (scs % 3600) / 60;
	result.seconds = (scs % 3600) % 60;
	return result;
}