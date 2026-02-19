#pragma once
#include "Strack.h"
#include <string>

class express
{
public:
	express(char* ptr)
	{
		_pStr = ptr;
		_len = strlen(_pStr);
	}

public:
	void parse();
	int solve();

private:
	Strack s;
	char* _pStr;
	int _len;

};

