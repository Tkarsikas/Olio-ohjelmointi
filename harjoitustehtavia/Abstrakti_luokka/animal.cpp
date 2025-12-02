#include "animal.h"

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

void Animal::sound()
{

}

Animal::Animal() {}

Animal::~Animal()
{
    cout << "Animal tuhottiin"<<endl;
}
