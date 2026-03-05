#pragma once

#include <vector>
#include "User.h"
#include <map>

class UserDB
{
public:
	void addUser(const User& user);
	void removeUser(const User& user);
	void removeUser(const std::string& id);

	User getUserByID(const std::string& id);

	void print();


private:
	std::vector<User> _users;

	//std::map<std::string, User> _users;
};

