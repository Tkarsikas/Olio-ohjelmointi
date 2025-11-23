#include "dog.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{       //konstruktori ja periytymisen testaus

    unique_ptr<Animal> objAnimal = make_unique <Animal>();
    unique_ptr<Animal> objDog = make_unique <Dog>();

    objAnimal->callOut();
    objDog->callOut();

    return 0;
}
