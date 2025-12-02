#include "animal.h"
#include "cat.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    //ei voida luoda aminal oliota, koska
    //Animal luokassa on puhdas virtuaalifunktio
    //Animal luokka on abstrakti luokka
    //Animal objAnimal;
    Cat objCat;
    objCat.setName("Karvinen");
    cout << objCat.getName() << " sanoo: ";
    objCat.sound();
    objCat.sayName();
    Dog objDog;
    objDog.sayName();
    return 0;
}
