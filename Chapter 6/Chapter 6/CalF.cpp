#include "CalF.h"
#include <iostream>
#include<iomanip>

using namespace std;
void CalF::mulF(CalF f1, CalF f2)
{
    num = f1.num * f2.num;
    den = f1.den * f2.den;
}
void CalF::lowTerms()
{
	long tnum, tden, temp, gcd;

	tnum = labs(num);
	tden = labs(den);

	if (tden == 0) {
		cout << "Illegal fraction: division by 0";
		exit(1);
	}
	else if (tnum == 0) {
		num = 0;
		den = 1;
		return;
	}

	while (tnum != 0) {
		if (tnum < tden) {
			temp = tnum;
			tnum = tden;
			tden = temp;
		}
		tnum = tnum - tden;
	}
	gcd = tden;
	num = num / gcd;
	den = den / gcd;
}
void CalF::displayN() {
    cout << num << "/" << den;
}
void CalF::display() {
    cout << setw(7) << num << "/" << den;
}

