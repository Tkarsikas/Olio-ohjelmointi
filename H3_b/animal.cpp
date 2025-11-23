#include "animal.h"

Animal::Animal()
{

}



Animal:: ~Animal()
{
    cout << "Animal destruktori" << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee" << endl;
}
