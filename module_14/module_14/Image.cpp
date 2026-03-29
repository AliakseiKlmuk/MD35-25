#include "Image.h"

Image::Image()
{
	std::cout << "default ctor" << std::endl;
	_data = new char[50];
}

Image::~Image()
{
	std::cout << "default distructor" << std::endl;
}

Image::Image(const Image* other)
{
	std::cout << "ctor copy" << std::endl;
}

Image::Image(Image&& other)
{
	this->_data = other._data;
	other._data = nullptr;

	std::cout << "move ctor" << std::endl;
}
