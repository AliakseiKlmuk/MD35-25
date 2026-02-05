#include <iostream>
#include "User.h"
#include "UsersDB.h"

int main()
{
 
	std::cout << "Hello module10!\n";

	UsersDB* db = new UsersDB;
	User user1{ "Yury", Previligies::Ordinary };
	db->AddUser(user1);

	User user2{ "Admin", Previligies::Administrator };
	db->AddUser(user2);

	db->print();

	delete db;
 
}
