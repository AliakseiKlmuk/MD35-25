#pragma once
#include <string>
#include <iostream>

class publication
{
public:
	publication(const std::string& name): _name(name) {}

public:
	virtual void getData();
	virtual void putData() const;

private:
	std::string  _name;
	
};

