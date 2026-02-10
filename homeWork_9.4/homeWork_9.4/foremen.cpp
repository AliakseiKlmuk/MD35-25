#include "foremen.h"
#include <iostream>

void foremen::getData()
{
	laborer::getData();
	std::cout << "Enter number quotas: "; std::cin >> _quotas;
}

void foremen::putData() const
{
	laborer::putData();
	std::cout << "Enter number quotas: " << _quotas;
}
