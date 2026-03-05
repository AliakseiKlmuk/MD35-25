#pragma once
#include <iostream>
#include <string>

struct User
{
	std::string name;
	std::string id;
	std::string email;

	void print() const {
		std::cout << name << " " << email << " " << id << std::endl;
 	}

}; 
