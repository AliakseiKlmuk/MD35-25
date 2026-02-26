#pragma once
#include <iostream>
#include <string>
class Author
{
public:
	Author(const std::string& name, unsigned int year) :
		_year(year)
	{
		_name = new std::string(name);
	}

public:
	void display() const;
	
public:
	~Author()
	{
		delete _name;
	}

private:
	std::string* _name;
	unsigned int _year;

};

