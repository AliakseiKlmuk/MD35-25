#include "type.h"

void type::getData()
{
	publication::getData();
	std::cout << "Enter time (in sec): "; std::cin >> _time;
	sales::getData();
}

void type::putData() const
{
	publication::putData();
	std::cout << " , Time: " << _time << " sec ";
	sales::putData();
}
