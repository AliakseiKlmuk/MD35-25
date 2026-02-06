#include "scientist.h"
#include <iostream>

void scientist::getData()
{
	employee::getData();
	std::cout << "Enter publication: "; std::cin >> _pubs;
	student::getedu();
}

void scientist::putData() const
{
	employee::putData();
	std::cout << "\n Publication: " << _pubs;
	student::putedu();
}
