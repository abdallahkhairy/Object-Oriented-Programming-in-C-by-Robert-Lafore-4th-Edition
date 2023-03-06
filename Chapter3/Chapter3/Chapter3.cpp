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

 
        const unsigned char WHITE = 219; //solid color (primes)
        const unsigned char GRAY = 176; //gray (non primes)
        unsigned char ch;
        //for each screen position
        for (int count = 0; count < 80 * 25 - 1; count++)
        {
            ch = WHITE; //assume it’s prime
                for (int j = 2; j < count; j++) //divide by every integer from
                    if (count % j == 0) //2 on up; if remainder is 0,
                    {
                        ch = GRAY; //it’s not prime
                        break; //break out of inner loop
                    }
            cout << ch; //display the character
        }
        //freeze screen until keypress
        return 0;
 
}

