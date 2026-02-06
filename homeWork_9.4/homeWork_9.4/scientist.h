#pragma once
#include "employee.h"
#include "student.h"

class scientist : private employee, private student
{
public:
	void getData();
	void putData() const;

private:
	int _pubs;

};

