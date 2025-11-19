#include "dog.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{       //konstruktori ja periytymisen testaus
    Animal objAnimal;
    Dog objDog;
    objAnimal.callOut();
    objDog.callOut();

    return 0;
}
