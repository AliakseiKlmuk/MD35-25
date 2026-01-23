#include "Image.h"
#include <iostream>

//Image::Image()
//{
//	std::cout << "Image defoult constructor" << std::endl;
//}

Image::Image() : _imageData{}, _width{}, _height{}
{
	std::cout << "Image custom constructor" << std::endl;
}


Image::Image(std::vector<char> data, unsigned int width, unsigned int height) :
	_width{ width }, _height{ height }
{
	auto dataSize = data.size() * sizeof(char);
	_imageData = new char[dataSize];
	memcpy(_imageData, data.data(), dataSize);
	std::cout << "Image custom constructor" << std::endl;
}

Image::Image(const Image& other):
	_width{ other._width },
    _height{ other._height }
{
	_imageData = new char[_width * _height];
	memcpy(_imageData, other._imageData, _width * _height);
	std::cout << "Image copy constructor" << std::endl;
	
		
}

Image::~Image()
{
	std::cout << "Image destructor" << std::endl;
}