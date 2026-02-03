#include "toolBooth.h"
#include <iostream>

void toolBooth::payingCar()
{
	_totalCar++;
	_totalCash += 0.5;
}

void toolBooth::nopayCar()
{
	_totalCar++;
}

void toolBooth::display() const
{
	std::cout << "Total car: " << _totalCar << ". TotalCash: " << _totalCash << " USD." << std::endl;
}

toolBooth::~toolBooth()
{

}
