#pragma once

class CalF{
    int num, den;
    public:
        CalF(int n, int d): num(n), den(d) { }
        void mulF(CalF, CalF);
        void lowTerms();
        void setData(int n, int d){
            num = n;
            den = d;
        }
        void displayN();
        void display();
};