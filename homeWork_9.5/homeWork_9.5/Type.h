#pragma once

#include <string>
class Type
{
public:
	Type() :_dimensions("N/A"), _grade ("N/A") {}
	Type(std::string di, std::string gr) :_dimensions(di), _grade(gr) {}

public:
	void getType();
	void showType();

private:
	std::string _dimensions;
	std::string _grade;

};

