#include "Strack.h"

void Strack::push(char var)
{
	_st[++_top] = var;
}

char Strack::pop()
{
	return _st[_top--];
}

int Strack::getTop()
{
	return _top;
}
