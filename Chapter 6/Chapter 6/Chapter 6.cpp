#include <iostream>
#include <conio.h>

#include "Int.h"
#include "TollBooth.h"
#include "Time.h"
#include "Employee.h"
#include "Date.h"
#include "Employee_V2.h"
#include "Angle.h"
#include "SerialNo.h"
#include "Fraction.h"
#include "Ship.h"
#include "Calculator.h"
#include "CalF.h"


const int ESC = 27;
using namespace std;

int main()
{
    //**************************ex1****************************
    /*Int n1(7);
    n1.Display(); cout << endl;
    Int n2(11);
    n2.Display(); cout << endl;
    Int n3;
    n3.Display(); cout << endl;
    n3 =n2.add(n1);
    cout << "n3 :"; 
    n3.Display();cout << endl;*/
    //**************************ex2****************************
    /*TollBooth b1;
    cout << "Enter 1 to register paid car   \nEnter 0 o register non-paid car \nEnter ESC to exist "<<endl;
    char ch;
    do {
        ch = _getche(); cout << endl;
        if (ch == '1')b1.PayCar();
        if (ch == '0')b1.NoPayCar();
        
    } while (ch != ESC);
    b1.Display();*/
    //**************************ex3****************************
    /*const Time t1(59, 59, 9);
    const Time t2(40, 14, 10);
    Time t3;
    t3.Add(t1, t2);
    t3.Display();*/
    //**************************ex4****************************
    /*Employee emp[3];
    for (int i = 0; i < 3; i++)emp[i].GetData();
    for (int i = 0; i < 3; i++)emp[i].Display();*/
    //**************************ex5****************************
    /*Date d;
    d.GetDate();
    d.ShowDate();*/
    //**************************ex6****************************
    /*Employee_V2 emp[3];
    for (int i = 0; i < 3; i++)emp[i].GetData();
    for (int i = 0; i < 3; i++)emp[i].Display(); */
    //**************************ex7****************************
    /*Angle a1(18, 42.4, 'W'), a2;
    char ch = 'y';
    a1.ShowData();
    do
    {
        cout << endl;
        a2.GetData();
        a2.ShowData();
        cout << "to continue press y to exist press n ";
        cin >> ch;
    } while (ch != 'n');*/
    //**************************ex8****************************
    /*SerialNo s1, s2, s3;
    s1.ShowSerial();
    s2.ShowSerial();
    s3.ShowSerial();*/
    //**************************ex9****************************
    /*Fraction f1, f2, f3;
    char ch = 'y';
    do {
        f1.GetData();
        f2.GetData();
        f3.Sum(f1, f2);
        f3.Display();
        cout << "to continue press y to exist press n ";
        cin >> ch;
    } while (ch != 'n');*/
    
    //**************************ex10***************************
    /*Ship s[3];
    for (int i = 0; i < 3; i++)s[i].GetPosition();
    for (int i = 0; i < 3; i++)s[i].Display();
    */

    //**************************ex11***************************
    /*Fraction n1, n2;
    Calculator c;
    char ch;
    do
    {
        c.GetEquation();
        c.Result();
        cout << "Do you want to continue (y/n): ";
        cin >> ch;
    } while (ch == 'y');*/
    
    //**************************ex12***************************
    // This answer is copied from google
    CalF f(0, 0), f1(0, 0), f2(0, 0); int x;
    char ch;
    do {
        cout << "Enter a number : ";
        cin >> x;
        cout << "   ";
        for (int i = 1; i < x; i++) {
            f.setData(i, x);
            f.lowTerms();
            f.display();
        }
        for (int j = 1; j < x; j++) {
            cout << endl;
            f.setData(j, x);
            f.lowTerms();
            f.displayN();
            for (int k = 1; k < x; k++) {
                f1.setData(k, x);
                f2.setData(j, x);
                f.mulF(f1, f2);
                f.lowTerms();
                f.display();
            }
        }
        cout << "\n\nPress c to continue or any key to exit: ";
        cin >> ch;
    } while (ch == 'c');
    return 0;
}

