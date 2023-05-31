#include <iostream>
#include <conio.h>

#include "Int.h"
#include "TollBooth.h"
#include "Time.h"
#include "Employee.h"
#include "Date.h"
#include "Employee_V2.h"

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
        ch = _getche(); 
        if (ch == '1')b1.PayCar();
        if (ch == '0')b1.NoPayCar();
    } while (ch != 27);

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
    
    //**************************ex8****************************
    //**************************ex9****************************
    //**************************ex*****************************
}

