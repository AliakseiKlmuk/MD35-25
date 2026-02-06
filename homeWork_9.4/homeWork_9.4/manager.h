#pragma once
#include "employee.h"
#include "student.h"

class manager : private employee, private student
{
public:
	void getData();
	void putData() const;

private:
	char _title[LEN];
	double _dues;

};

