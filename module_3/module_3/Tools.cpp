#include "Tools.h"
#include <iostream>
#include <random>

int generation_random(int min, int max) {
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(min, max);

    return distribution(generator);
}

int first_gamer() {
    int min{ -5 };
    int max{ 5 };

    return generation_random(min, max);
}

int second_gamer() {
    int min{ -5 };
    int max{ 5 };

    return generation_random(min, max);
}

bool checkDifferentSigns(int numberOld, int numberNew) {
    return ((numberOld >= 0 && numberNew >= 0) || (numberOld < 0 && numberNew < 0));
}