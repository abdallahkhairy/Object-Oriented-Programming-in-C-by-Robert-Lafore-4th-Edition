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

    
    //unsigned int n1 = 0, n2 = 1, next = 1;
    //cout << pow(2,(8*sizeof(next))) << endl;
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
   /* int number = 1;
    cout << "Enter number" << endl;
    cin >> number;
  
        for (int j = 1; j <= 200; j++)
        {
            cout << setw(5) << number * j<<'\t';
            if (!(j % 10))cout << endl;
        }
        */
    //ex2
    /*float tmp;
    int slct;
    cout<<"Type 1 to convert Fahrenheit to Celsius." << endl;
    cout<<"Or 2 to convert Celsius to Fahrenheit." << endl;
    cin >> slct;
    cout << "Type the unit to convert." << endl;
    cin >> tmp;
    if (slct == 1)cout << (tmp - 32) * 5 / 9 << " C" << endl;
    else if (slct == 2)cout << (tmp * 9 / 5) + 32 << " F" << endl;
    else cout << "Enter 1 or 2" << endl;*/

    //ex3
    //char ch;
    //unsigned int total = 0; 
    //cout << "Enter number" << endl;;
    //while ((ch = _getch()) != '\r') 
    //    total = total * 10 + ch - '0'; //add digit to total*10
    //cout << "number value  " << total << endl;
   
    //ex4
    /*double n1, n2, result;
    char op, ch;
    do {
        cout << "Enter first number, opator, second number :" << endl;
        cin >> n1 >> op >> n2;
        switch (op)
        {
        case '+': result = n1 + n2; break;
        case '-': result = n1 - n2; break;
        case '*': result = n1 * n2; break;
        case '/': result = n1 / n2; break;
        default: cout << "invaild operation or sequence" << endl; result = 0;
        }
        cout << "result =  " << result << endl;;
        cout << "To do another operation (Enter 'y' or 'n') ? " << endl;;
        cin >> ch;
    } while (ch != 'n');
    
    */

    // ex5
    /*int rows = 20;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)cout << ' ';
        for (int k = 1; k < 2 * i ; k++) cout << 'x';
        cout << endl;
    }*/
    /*int rows = 20;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = rows; j > i; j--)cout << ' ';
        for (int k = 1; k < 2 * i ; k++) cout << 'x';
        cout << endl;
    }*/
    //ex6
    /*int n;
        do
        {
            int fact = 1;
            cout << "Enter a number or 0 to exit: ";
            cin >> n;
            for (int i = 1; i <= n; i++)fact *= i;
            cout << fact << endl;

        } while (n != 0);*/
    //ex7
    /*float initial_amount, in_rate, sum=0 ;
    int n_years;
    cout << "Enter initial amount: ";
    cin >> initial_amount;
    sum = initial_amount;
    cout << "Enter number of years: "; 
    cin >> n_years;
    cout << "Enter interest rate (percent per year): "; 
    cin >> in_rate;

    for (int i = 0; i < n_years; i++)
    {
        sum = sum + (sum * in_rate/100);
    }
    cout << sum << endl;*/
    //ex8 ...
    //ex9
    /*int n_guest, n_chairs, pr =1;
    cout << "Enter number of Guests ";
    cin >> n_guest;
    cout << "Enter number of Chairs ";
    cin >> n_chairs;
    for (int i = n_guest; i > (n_guest - n_chairs); i--)pr *= i;
    cout << pr;*/
    //ex 10
    /*float final_amount, in_rate, initial_amount ,sum = 0;
    int n_years=0;
    cout << "enter initial amount: ";
    cin >> initial_amount;
    sum = initial_amount;
    cout << "enter final amount: ";
    cin >> final_amount;
    cout << "enter interest rate (percent per year): ";
    cin >> in_rate;
    while(sum < final_amount)
    {
        sum = sum + (sum * in_rate / 100);
        n_years ++;
    }
    cout << n_years << endl;*/ 
    int a, b, c, d, temp;
    cout << "Enter a/b and c/d : ";
    cin >> a >> temp >> b >> temp >> c >> temp >> d;
    cout << a << '/' << b << ' ' << c << '/' << d;


}

