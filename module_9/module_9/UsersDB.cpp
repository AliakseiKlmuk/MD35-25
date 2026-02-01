
#include <string>
#include <iostream>

#include "UsersDB.h"
#include "User.h"


void UsersDB::AddUser(const User& user)
{
	_users.push_back(user);
}

void UsersDB::RemoveUser(std::string email)
{
	std::erase_if(_users, [email](const User& user) {
		return user.email() == email;
		});
}

void UsersDB::print()
{
	for (const auto user : _users)
	{
		std::cout << user.name() << std::endl;
	}
}
