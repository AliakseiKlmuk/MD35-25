#include "Hero.h"

Hero::Hero()
{
    _curentStrategy = [](int val)
        {return val + 1; };
}

void Hero::run()
{
    _currentStep = _curentStrategy(_currentStep);
}

void Hero::setCurrentStrategy(std::function<int(int)> strategy)
{
    _curentStrategy = strategy;
}
