#include "dog.h"

Dog::Dog()
{

}


Dog::~Dog()
{
    cout << "Dog destruktori" << endl;
}

void Dog::callOut()
{
    cout << "koira haukkuu" << endl;
}
