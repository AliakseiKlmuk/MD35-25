#include "manager.h"
#include <iostream>

void manager::getData()
{
	employee::getData();
	std::cout << "Enter ocupation: "; std::cin >> _title;
	std::cout << "Enter deposit: "; std::cin >> _dues;
	student::getedu();
}

void manager::putData() const
{
	employee::putData();
	std::cout << "\n Ocupation: " << _title;
	std::cout << "\n Deposit: " << _dues;
	student::putedu();
}
