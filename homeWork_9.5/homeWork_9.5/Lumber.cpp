#include "Lumber.h"
#include <iostream>
#include "Type.h"

void Lumber::getLumber()
{
	Type::getType();
	Distance::getDist();
	std::cout << "Enter count: "; std::cin >> _quantity;
	std::cout << "Enter price: "; std::cin >> _price;
}

void Lumber::showLumber() const
{
	//Type::showType();
	std::cout << "\n Leinght: ";
	Distance::showDist();
	std::cout << "\n Coast: " << _quantity << " pices: " << (_price * _quantity) << " USD ";
	}
