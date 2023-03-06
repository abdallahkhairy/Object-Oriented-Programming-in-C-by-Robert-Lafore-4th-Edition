// oop_review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Car.h"
#include "Distance.h"
#include "Calculator.h"
#include "Counter.h"
using namespace std;


int main()
{
    //Rectangle b;
    //b.setLength(5);
    //b.setWidth(3);
    //cout << "The Area of the ( "
    //    << b.getLength() << "cm X "
    //    << b.getWidth() << "cm ) box is [ "
    //    << b.getArea() << "cm^2" << " ]" << endl;
    //Rectangle b1(27.024,87.65);
    ////b1.setLength(10.22);
    ////b1.setWidth(45.21);
    //cout << "The Area of the ( "
    //    <<b1.getLength() << "cm X " 
    //    << b1.getWidth() << "cm ) box is [ " 
    //    << b1.getArea() <<"cm^2" << " ]" << endl;
    //Rectangle r(10.5, 5.78);
    //Rectangle r2 = r;
    //r2.print();
    //Rectangle r3(56.17841, 0.548);
    //Rectangle r4 = r.merge(r3);
    //r4.print();
    

    
    //cout << "********************************************************" << endl;

    //Car c1("Fiat", 2022, "Red");
    ////c1.setMaker("Tesla");
    ////c1.setModel(2021);
    //cout << "This Car is made by [ "<<c1.getMaker() <<" ]" << endl;
    //cout << "This Car model is [ " <<c1.getModel() << " ]" << endl;
    //cout << "********************************************************" << endl;
    //
    //
    //

    //Car f1;
    //cout << "This Car No is [ " << f1.getCarsNo() << " ]" << endl;

    //Car f2;
    //cout << "This Car No is [ " << f2.getCarsNo() << " ]" << endl;

    //Car f3;
    //cout << "This Car No is [ " << f3.getCarsNo() << " ]" << endl;
    

    
    //cout << "Result  = " << Calculator::multiply(5.5343, 5.5344) << endl;

    Counter co1(5);
    Counter co2(20);
    Counter co3 = ++co1;
    cout << co3.get_count() << endl;
    Counter co4 = co2--;
    cout << co4.get_count() << endl;

    

    //cout << "****************************************"<< endl;

   /* Distance d1;
    Distance d2(7, 3.551);
    Distance d3(d2);
    d3.print();
    d3.setDistance(10, 7.54);
    Distance d4 = d3;

    d4.print();
    Distance d5 = d4.add_distance(d2);
    d5.print();
    d4.print();
    d2.print();
    Distance d6 = d2 + d4;
    d6.print();
    Distance d7 = d2 - d4;
    d7.print();*/

}

