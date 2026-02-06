#include "Stack.h"

void Stack::push(int var)
{
	_st[++_top] = var;
}

int Stack::pop()
{
	return _st[_top--];
}
