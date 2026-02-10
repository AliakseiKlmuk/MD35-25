#include "manager.h"
#include <iostream>

void manager::getData()
{
	_emp.getData();
	std::cout << "Enter ocupation: "; std::cin >> _title;
	std::cout << "Enter deposit: "; std::cin >> _dues;
	_stu.getedu();
}

void manager::putData() const
{
	_emp.putData();
	std::cout << "\n Ocupation: " << _title;
	std::cout << "\n Deposit: " << _dues;
	_stu.putedu();
}
