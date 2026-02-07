#pragma once
#include "employee.h"
#include "student.h"
#include <string>

class manager
{
public:
	void getData();
	void putData() const;

private:
	std::string _title;
	double _dues;
	employee _emp;
	student _stu;

};

