#pragma once
#include <iostream>

class sales
{
public:
	sales(float coast) : _coast(coast) {}

public:
	virtual void getData();
	virtual void putData() const;

private:
	float _size[3];
	float _coast;

};

