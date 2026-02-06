#include "Stack2.h"
#include <iostream>

void Stack2::push(int var)
{
	if (_top >= MAX - 1)
	{
		std::cout << "Mistake, stack is full";
		exit(1);
	}
	Stack::push(var);
}

int Stack2::pop()
{
	if (_top < 0)
	{
		std::cout << "Mistake, stack is empty";
		exit(1);
	}
	
	return Stack::pop();
}
