#include "publication.h"

void publication::getData()
{
	std::cout << "Enter name: "; std::cin >> _name;
	std::cout << "Enter coast: "; std::cin >> _coast;
}

void publication::putData() const
{
	std::cout << "Name: " << _name << " Ñoast: " << _coast;
}
