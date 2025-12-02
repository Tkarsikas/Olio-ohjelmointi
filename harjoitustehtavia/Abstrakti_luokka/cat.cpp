#include "cat.h"

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::sound()
{
    cout << "miau"<<endl;
}

void Cat::sayName()
{
    cout << "olen mirri" << endl;
}

Cat::Cat() {}

Cat::~Cat()
{
    cout << "cat tuhottiin"<<endl;
}
