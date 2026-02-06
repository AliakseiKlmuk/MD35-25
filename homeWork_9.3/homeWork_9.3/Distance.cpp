#include "Distance.h"
#include <iostream>

void Distance::getDist()
{
	std::cout << "\nEnter feet: "; std::cin >> _feet;
	std::cout << "\nEnter inches: "; std::cin >> _inches;
}

void Distance::showDist()
{
	std::cout << _feet << " \' " << _inches << ' \"' << std::endl;
}
