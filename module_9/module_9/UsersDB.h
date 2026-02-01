#pragma once

#include <string>
#include <vector>

class User;

class UsersDB
{
public:
	void AddUser(const User& user);
	void RemoveUser(std::string email);
	void print();

private:
	std::vector<User> _users;

};

