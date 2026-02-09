#pragma once
#include <iostream>
#include <vector>

template <typename T>
class ClassesTools
{
public:
	T calculate(const T& value);

private:
	std::vector<T> _privareObjects;
};

template<typename T>
inline T ClassesTools<T>::calculate(const T& value)
{
	std::cout << typeid(value).name() << std::endl;
	return T();
}
