#include<iostream>
using namespace std;
#include "Student.h"
#include "PostGraduatedStudent.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "PrintClass.h"


void print(Person p)
{
	cout << "The Basic Data of Person :" << endl;
	cout << "Name : [" << p.name << "], Gender : [" << p.gender << "], Age : [" << p.age << "]"    << endl;
}
void main()
{

	/*Student s;
	s.display();
	s.set_age(24);
	s.set_name("Abdullah");
	s.set_gender("Male");
	s.display();
	s.set_depart("CE");
	s.set_GPA(2.7);
	s.set_level(4);*/
	
	/*Student s1("Abdullah", "Male", 24, 5, 2.7, "CE");
	s1.display();*/

	/*PostGraduatedStudent s2("Abdullah", "Male", 24, 5, 2.7, "CE", "Karim Benzima");
	s2.display();*/
	
	Shape* shape_ptr;
	Rectangle r1(10, 7, "Red");
	Circle c1(5, "Green"); 
	shape_ptr = &r1;
	(*shape_ptr).area();
	shape_ptr -> draw();

	shape_ptr = &c1;
	shape_ptr -> area();
	shape_ptr -> draw();

	Person p1("Abdullah", "Male", 24);
	print(p1);

	Person p2("BogaBoga", "Male", 17);
	PrintClass pc;
	pc.print(p2); 
}