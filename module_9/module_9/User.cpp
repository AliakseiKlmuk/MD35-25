#include "User.h"
#include <iostream>

User::User(std::string name, Previligies prev): _name{name}, _previligies{prev}
{

}

void User::print() const
{
	std::cout << _name << " " << static_cast<int>(_previligies) << std::endl;
}
