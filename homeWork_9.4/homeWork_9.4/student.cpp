#include "student.h"
#include <iostream>

void student::getedu()
{
	std::cout << "Enter school: "; std::cin >> _school;
	std::cout << "Enter degree education: "; std::cin >> _degree;
}

void student::putedu() const
{
	std::cout << "\nSchool: " << _school;
	std::cout << "\nDegree degree education: " << _degree;
}
