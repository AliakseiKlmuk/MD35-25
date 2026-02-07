#include "Type.h"
#include <iostream>

void Type::getType()
{
	std::cout << "Enter dimensions: "; std::cin >> _dimensions;
	std::cout << "Enter grade: "; std::cin >> _grade;
}

void Type::showType()
{
	std::cout << "\n Dimensions: " << _dimensions;
	std::cout << "\n Grade: " << _grade;
}
