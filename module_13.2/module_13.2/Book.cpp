#include "Book.h"

void Book::print() const
{
	std::cout << "Title: " << *_title <<
		"\tpages: " << _pages << std::endl;

	_author->display();
}
