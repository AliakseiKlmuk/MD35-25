#include "Game.h"
#include "Hero.h"
#include <iostream>
#include <conio.h>

void Game::start()
{
    Hero hero{};

    while (true)
    {
        auto currentStep = hero.currentStep();

        std::cout << "current position: " << hero.currentStep() << std::endl;
        auto delta = 1;

        if (std::find_if(_advancePaoints.begin(), _advancePaoints.end(),
            [currentStep](int val) {
                return val == currentStep; }) != _advancePaoints.end())
        {
            hero.setCurrentStrategy(getStrategy("adv"));
        }

        hero.run();
        std::cin.get();
    }
}

std::function<int(int)> Game::getStrategy(std::string name)
{
    if (name == "adv")
    {
        return[](int val) {return val + 5; };
    }
    return[](int val) {return val + 2; };
}
