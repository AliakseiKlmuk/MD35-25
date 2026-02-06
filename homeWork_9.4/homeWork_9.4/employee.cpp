#include "employee.h"
#include <iostream>

void employee::getData()
{
	std::cout << "\n Enter Second name: "; std::cin >> _name;
	std::cout << "Enter number: "; std::cin >> _number;
}

void employee::putData() const
{
	std::cout << "\n Second name: " << _name;
	std::cout << "\n Number: " << _number;
}
