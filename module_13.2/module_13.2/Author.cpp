#include "Author.h"

void Author::display() const
{
	std::cout << "Author: " << *_name << "\tyear: " << _year << std::endl;
}
