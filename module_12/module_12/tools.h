#pragma once
#include <iostream>
#include <string>


class CustomObject
{
public:
	std::string name() { return "customObject"; }

private:

};

template <typename T>
void print(T value)
{
	std::cout << value << std::endl;
}

template <>
void print(CustomObject value)
{
	std::cout <<typeid(value).name() << " " << value.name() << std::endl;
}

template <typename T, typename Y>
T sum(T val1, Y val2)
{
	return val1 + val2;
}