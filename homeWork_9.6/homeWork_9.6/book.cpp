#include "book.h"

void book::getData()
{
	publication::getData();
	std::cout << "Enter page count: "; std::cin >> _page;
	sales::getData();
}

void book::putData() const
{
	publication::putData();
	std::cout << " , Pages: " << _page;
	sales::putData();
}
