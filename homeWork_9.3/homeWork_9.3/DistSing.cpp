#include "DistSing.h"
#include <iostream>

void DistSing::getDist()
{
	Distance::getDist();
	char ch;
	std::cout << "Enter sing (+ or -): "; std::cin >> ch;
	_sign = (ch == '+') ? pos : neg;
}

void DistSing::showDist()
{
	std::cout << ((_sign == pos) ? "+" : "-");
	Distance::showDist();
}
