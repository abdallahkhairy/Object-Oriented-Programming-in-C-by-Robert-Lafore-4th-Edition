#include <iostream>
#include<iomanip>
#include <conio.h> //for getche()

using namespace std;
int main()
{
    //int numb;
    //long long fac = 1;
    //cout << "enter numb" << endl;
    //cin >> numb;
    //int n1= 1 ,n2= 1;
    //cout << n1 << " " << n2 << " ";
    //for (int j =1, next=1 ; j <= numb; j++)
    //{
    //    next = n1 + n2;
    //    cout << next << " ";
    //    n1 = n2;
    //    n2 = next;
    //    
    //}

    
 //   unsigned int n1 = 0, n2 = 1, next = 1;
 //   cout << pow(2,(8*sizeof(next))) << endl;
	//while (next < pow(2, (8 * sizeof(next)))/2)
	//{
	//	
	//	cout << next << " ";//1 1 2 3 5 8
	//	next = n1 + n2;// 1, 2, 3, 5, 8 ,..
	//	n1 = n2;//1, 1, 2, 3, 5, ..
	//	n2 = next;//1, 2, 3, 5, 8, ..
	//}

    // showprim.cpp
// displays prime number distribution

 
   //ex 1
    int number = 1;
    cout << "Enter number" << endl;
    cin >> number;
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << number * j << "\t";
        }
    }
 
}

