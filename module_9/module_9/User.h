#pragma once
#include<string>

enum class Previligies {
	UNKNOW = -1,
	Ordinary,
	Manager,
	Administrator
};

class User
{
public:

	User(std::string name, Previligies prev);
	
public: 
	void print() const;

public:
	std::string name() const { return _name; }
	std::string email() const { return _email; }
	std::string password() const { return _password; }
	Previligies previligies() const { return _previligies; }
private:
	std::string _name;
	std::string _email;
	std::string _password;
	Previligies _previligies = Previligies::UNKNOW;

};

