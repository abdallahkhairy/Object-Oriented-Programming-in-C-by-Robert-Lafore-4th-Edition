// Chapter 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <stdlib.h>
#include "Employee.h"
#include "Distance.h"
#include "Fraction.h"
#include "Card.h"
#include "SafeArray.h"
#include "Queue.h"
#include "Matrix.h"
#include "Money.h"

using namespace std;

double long  mstold(char value[]);
void  mldtos(double long dl_money);
void reversit(char arr[]);
int maxint(int* arr, int size);
int main()
{
    //**********************************ex1***********************************
    /*char str[80] = "Hello there";
    cout << "Enter a string : "; 
    cin.get(str, 80);
    reversit(str); 
    cout << " Result : " << str << endl;*/
    //**********************************ex2***********************************
    /*Employee emp[100];
    char ch;
    int i;
    for (i = 0 ; i < 100; i++)
    {
        emp[i].GetData();
        cout << "Enter(y / n) to exit "; 
        cin >> ch;
        if (ch == 'y' || ch == 'Y')break;
    }
    for (int j = 0; j < i+1; j++)emp[i].PutData();*/
    //**********************************ex3***********************************
    /*Distance dist[100], sum(0,0.0); 
    int n = 0; 
    char ans; 
    do { 
        dist[n].GetData();
        sum = sum.add_distance(dist[n++]);
        cout << "Enter another(y / n) ? : ";
        cin >> ans;
    } while (ans != 'n'); 
    for (int j = 0; j < n; j++) 
    {
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].ShowData();
    }
    cout << endl << "Average is : ";
    sum.div_dist(sum ,n);
    sum.ShowData();
    cout << endl;*/
    //**********************************ex4***********************************
    /*int n;
    cout<< "enter number : "<<endl;
    cin >> n;
    int  *arr= new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int index = maxint(arr, n);
    cout << arr[index] << " at " << index;*/
    //**********************************ex5***********************************
    /*char ch = 'n';
    Fraction arr[100];
    Fraction sum(0,1);
    int i;
    for (i = 0; i < 100; i++) {
        arr[i].GetData();
        sum.Sum(sum, arr[i]);
        cout << " To exit press 'y' or press any button to continue : ";
        cin >> ch;
        if (ch == 'y')break;
    }
    sum.DivideBy(i + 1);*/
    //**********************************ex6***********************************
    //copied 
    //Card deck[52];
    //int j;
    //cout << endl;
    //for (j = 0; j < 52; j++) //make an ordered deck
    //{
    //    int num = (j % 13) + 2; //cycles through 2 to 14, 4 times
    //    Suit su = Suit(j / 13); //cycles through 0 to 3, 13 times
    //    deck[j].set(num, su); //set Card
    //}
    //cout << "\nOrdered deck : \n";
    //for (j = 0; j < 52; j++) //display ordered deck
    //{
    //    deck[j].display();
    //    cout << " " ;
    //    if (!((j + 1) % 13)) //newline every 13 Cards
    //        cout << endl;
    //}
    //srand(time(NULL)); //seed random numbers with time
    //for (j = 0; j < 52; j++) //for each Card in the deck,
    //{
    //    int k = rand() % 52; //pick another Card at random
    //    Card temp = deck[j]; //and swap them
    //    deck[j] = deck[k];
    //    deck[k] = temp;
    //}
    //const int PLAYERS = 4;
    //const int CARDS_OF_PLAYER = 52 / 4;
    //Card bridge[PLAYERS][CARDS_OF_PLAYER];
    //for (int i = 0; i < PLAYERS; i++)
    //    for (int j = 0; j < CARDS_OF_PLAYER; j++)
    //        bridge[i][j] = deck[i * CARDS_OF_PLAYER + j];
    //for (int i = 0; i < PLAYERS; i++) {
    //    cout << "Player No." << i + 1 << ": ";
    //    for (int j = 0; j < CARDS_OF_PLAYER; j++)
    //    { 
    //        bridge[i][j].display();
    //        cout << " ";
    //    }
    //    cout << endl;
    //}
    //return 0;
    //**********************************ex7***********************************
    /*char a[100];
    cin >> a;
    cout<<fixed<< setprecision(2) <<mstold(a);*/
    //**********************************ex8***********************************
    //SafeArray sa1; // define a safearay object
    //int temp = 12345; // define an int value
    //sa1.PutEl(7, temp); // insert value of temp into array at index 7
    //temp = sa1.GetEl(7); // obtain value from array at index 
    //cout << temp;
    //**********************************ex9***********************************
    /*Queue q;
    q.Put(1);q.Put(2);
    cout << "1- " << q.Get() << endl;
    cout << "2- " << q.Get() << endl;
    q.Put(3);q.Put(4);
    cout << "3- " << q.Get() << endl;
    cout << "4- " << q.Get() << endl;*/
    //**********************************ex10***********************************
    //Matrix m1(3, 4); // define a matrix object
    //int temp = 12345; // define an int value
    //m1.PutEl(7, 4, temp); // insert value of temp into matrix at 7,4
    //temp = m1.GetEl(7, 4); // obtain value from matrix at 7,4
    //**********************************ex11***********************************
    //mldtos(1223232.22);
    //**********************************ex12***********************************
    Money  m1(111111111.12);
    Money  m2;
    m2.Putmoney();
    Money m3;
    m3.Madd(m1, m2);
    m3.Getmoney();
}

void reversit(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i-1]);
}

int maxint(int* arr, int size)
{
    int larg = 0, index=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > larg) {
            larg = arr[i];
            index = i;
        }
    }
    return index;
       
    
}
double long mstold(char value[])
{
    double long dl_value;
    char value_no[100];
 
    int v_len = strlen(value);/// sizeof(value[0]);
    int k = 0, comma_count=0, dot_index=0  ;
    for (int i = 0; i < v_len; i++) {
        if (isdigit(value[i])) value_no[k++] =  value[i];
        if (value[i] == ',') comma_count;
        if (value[i] == '.') dot_index = i;
    }
    if (dot_index)
        dl_value = stold(value_no) / pow(10, v_len - 1 - dot_index);
    else
        dl_value = stold(value_no);

    return dl_value;
}

void mldtos(double long dl_money)
{
    long long no_b_dot = static_cast<long long> (dl_money);
    int n_digits = 0;
    while (no_b_dot > 0) {
        no_b_dot = no_b_dot / 10;
        n_digits++;
    }
    if (n_digits > 15)
    {
        cout << "Too Large Number to convert " << endl;
            return;
    }
    string money_str = to_string(dl_money);
    money_str.insert(0, "$");
    for (int i = money_str.find(".") - 3; i > 1; i -= 3)
    {
        money_str.insert(i, ",");

    }
            
        money_str.erase(money_str.find(".")+3, 4);
    cout<<money_str;
}
