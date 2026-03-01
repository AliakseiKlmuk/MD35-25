#pragma once
#include <string>
#include <iostream>

class Forest;
class Tree
{
	friend void changeID(unsigned nextID);

public:
	Tree(std::string name, std::string type) : _name(name), _type(type), _id(idNext++) {}

	static unsigned idNext;

public:
	void print() const 
	{
		std::cout << "Name: " << _name << "\tType: " << _type << "\tID: " << _id << std::endl;
	}

public:
	~Tree() {}

private:
	std::string _name;
	std::string _type;
	unsigned _id;
};

