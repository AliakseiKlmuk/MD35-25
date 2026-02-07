#include "sales.h"

void sales::getData()
{
	std::cout << "Enter summ: "; std::cin >> _coast;

}

void sales::putData() const
{
	std::cout << " , Summ: " << _coast << std::endl;
}
