#pragma once

const int LEN = 80;

class employee
{
public:
	void getData();
	void putData() const;

private:
	char _name[LEN];
	unsigned long _number;

};

