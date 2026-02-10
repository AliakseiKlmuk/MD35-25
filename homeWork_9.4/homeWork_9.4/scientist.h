#pragma once
#include "employee.h"
#include "student.h"
#include <string>

class scientist
{
public:
	void getData();
	void putData() const;

private:
	int _pubs;
	employee _emp;
	student _stu;

};

