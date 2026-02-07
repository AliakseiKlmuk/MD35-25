#include "Distance.h"
#include <iostream>

void Distance::getDist()
{
	std::cout << "Enter feet: "; std::cin >> _feet;
	std::cout << "Enter inches: "; std::cin >> _inches;
}

void Distance::showDist() const
{
	std::cout << _feet << " \' - " << _inches << "\"" << std::endl;
}
