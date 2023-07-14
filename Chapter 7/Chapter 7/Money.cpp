#include "Money.h"
#include <iostream>
using namespace std;

Money::Money():dl_money(0)
{
}

Money::Money(long double dl):dl_money(dl)
{
}

void Money::Madd(Money m1, Money m2)
{
    dl_money = m1.dl_money + m2.dl_money;
}

void Money::Getmoney()
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
    for (int i = money_str.find(".")-3; i > 1; i -= 3)
    {
        money_str.insert(i, ",");
        
    }

    money_str.erase(money_str.find(".") + 3, 4);
    cout << money_str;
}

void Money::Putmoney()
{
    char value[100];
    cout << "Enter Money ex $487.4" << endl;
    cin >> value;
    char value_no[100];

    int v_len = strlen(value);/// sizeof(value[0]);
    int k = 0, comma_count = 0, dot_index = 0;
    for (int i = 0; i < v_len; i++) {
        if (isdigit(value[i])) value_no[k++] = value[i];
        if (value[i] == ',') comma_count;
        if (value[i] == '.') dot_index = i;
    }
    if (dot_index)
        dl_money = stold(value_no) / pow(10, v_len - 1 - dot_index);
    else
        dl_money = stold(value_no);
        
}
