#include "UserDB.h"

void UserDB::addUser(const User& user)
{
	_users.push_back(user);

	//_users[user.id] = user;
}

void UserDB::removeUser(const User& userToRemove)
{
	removeUser( userToRemove.id);
}

void UserDB::removeUser(const std::string& id)
{
	
	//_users.erase(id);
	std::erase_if(_users, [id](const User& user) {return user.id == id; });
}

User UserDB::getUserByID(const std::string& id)
{
	for (const auto& user : _users)
	{
		if (user.id == id)
			return user;
	}

	//return _users[id];

}

void UserDB::print()
{
	for (const auto& user : _users)
	{
		user.print();
		//user.second.print();
	}
}
