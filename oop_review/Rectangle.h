  #pragma once

class Rectangle
{

private:
    double length;
    double width;
   

public:
    void setLength(double len);
    double getLength();
    void setWidth(double w);
    double getWidth();
    double getArea();
    void print();
    Rectangle();
    Rectangle(double l,double w);
    Rectangle merge(Rectangle r2);
    ~Rectangle();
};

