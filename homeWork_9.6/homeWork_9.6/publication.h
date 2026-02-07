#pragma once
#include <string>
#include <iostream>

class publication
{
public:
	publication(const std::string& name, float coast): _name(name), _coast(coast){}

public:
	virtual void getData();
	virtual void putData() const;

private:
	std::string  _name;
	float _coast;

};

