#pragma once
#include <string>

const int LEN = 80;

class employee
{
public:
	void getData();
	void putData() const;

private:
	char _name;
	unsigned long _number;

};

