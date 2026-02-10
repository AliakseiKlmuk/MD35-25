#include "publication.h"

void publication::getData()
{
	std::cout << "Enter name: "; std::cin >> _name;
}

void publication::putData() const
{
	std::cout << "Name: " << _name ;
}
