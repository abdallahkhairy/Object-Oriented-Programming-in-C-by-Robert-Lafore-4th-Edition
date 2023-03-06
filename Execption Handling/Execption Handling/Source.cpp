#include <iostream>
using namespace std;

int main()
{
	/*int x = 10, y = 2;
	try
	{
		if (y == 0)
		{
			throw exception();
		}
		else
			cout << x / y << endl;
	}
	catch (execption e)
	{
		cout << e.what() << endl;
	}
	cout << "The Program Continued" << endl;*/

	/*try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted - you are old enough.";
		}
		else {
			throw (age);
		} 
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
	}*/

	/*int x = 10, y = 0;
	cout << "Enter Value For X and Y" << endl;
	cin >> x;
	cin >> y;
	try
	{
		if (y == 0)
		{
			throw "Division by zero Exception";
		}
		else
			cout << x / y << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
		cout << "U must be geater than 0" << endl;
	}
	cout << "The Program Contin ued" << endl;*/

	/*int x = 0, y = 0;
	cout << "Enter Value For X and Y" << endl;
	cin >> x;
	cin >> y;
	try
	{
		if (y == 0)
		{
			throw exception();
		}
		else
			cout << x / y << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
		cout << "please review youe input" << endl;
	}
	cout << "The Program Continued" << endl;
	cout<< x + y + 100<<endl;*/

	/*int x = 0, y = 0;
	cout << "Enter Value For X and Y" << endl;
	cin >> x;
	cin >> y;
	try
	{
		if (x < 30)
		{
			throw "X exception";
		}
		if (y == 0)
		{
			throw exception();
		}
		else
			cout << x / y << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
		cout << "please review youe input" << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
		cout << "X must be graeter than 30 " << endl;
	}
	cout << "The Program Continued" << endl;
	cout << x + y + 100 << endl;*/
	
	//Handling genrel Exception
	int x = 0, y = 0;
	cout << "Enter Value For X and Y" << endl;
	cin >> x;
	cin >> y;
	try
	{
		if (x < 30)
		{
			throw "X exception";
		}
		if (y == 0)
		{
			throw exception();
		}
		else
			cout << x / y << endl;
	}
	catch (...)
	{
		cout << "Unhandeled Exception" << endl;
		cout << "Contact system admin" << endl;
	}
	
	cout << "The Program Continued" << endl;
	cout << x + y + 100 << endl;
}