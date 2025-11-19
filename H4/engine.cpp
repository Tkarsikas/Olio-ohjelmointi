#include "engine.h"

Engine::Engine()
{

}

Engine::Engine(int hp, double d)
{
    horsepower=hp;
    displacement=d;
}

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}


