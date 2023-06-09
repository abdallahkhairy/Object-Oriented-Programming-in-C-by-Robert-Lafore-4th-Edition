#include "SerialNo.h"
#include <iostream>

using namespace std;
int SerialNo::counter = 0;
SerialNo::SerialNo()
{
	
	serial_no = ++counter;
}

void SerialNo::ShowSerial()
{
	cout << "Serial Number is : " << serial_no << endl;
}
