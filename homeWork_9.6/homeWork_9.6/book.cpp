#include "book.h"

void book::getData()
{
	publication::getData();
	std::cout << "Enter page count: "; std::cin >> _page;
}

void book::putData() const
{
	publication::putData();
	std::cout << " , Pages: " << _page << std::endl;
}
