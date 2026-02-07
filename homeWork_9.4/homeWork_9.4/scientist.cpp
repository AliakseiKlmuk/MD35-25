#include "scientist.h"
#include <iostream>

void scientist::getData()
{
	_emp.getData();
	std::cout << "Enter publication: "; std::cin >> _pubs;
	_stu.getedu();
}

void scientist::putData() const
{
	_emp.putData();
	std::cout << "\n Publication: " << _pubs;
	_stu.putedu();
}
