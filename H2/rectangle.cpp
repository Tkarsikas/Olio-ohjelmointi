#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    //cout << "olio luotu" << endl;
}

Rectangle::Rectangle(double w, double h)
{
    width=w;
    height=h;
}
Rectangle::~Rectangle()	{
    //cout << "olio poistettu" << endl;
}

double Rectangle::getArea() const
{
    return width*height;
}

double Rectangle::getCircum() const
{
    return (height+width)*2;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}



void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}


