#include "Image.h"
#include <iostream>

unsigned int totalCount;

Image::Image() : _imageData{}, _width{}, _height{}
{
	_id = totalCount++;
	std::cout << "Image default constructror" << std::endl;
}

Image::Image(std::vector<char> data, unsigned int width, unsigned int height) :
	_width{ width }, _height{ height }
{
	_id = totalCount++;
	auto dataSize = data.size() * sizeof(char);
	_imageData = new char[dataSize];
	memcpy(_imageData, data.data(), dataSize);
	std::cout << "Image custom constructror" << std::endl;
}

Image::Image(const Image& other) :
	_width{ other._width },
	_height{ other._height }
{
	_id = totalCount++;
	_imageData = new char[_width * _height];
	//memcpy(_imageData, other._imageData, _width * _height);
	std::cout << "Image copy-constructor" << std::endl;
}

Image::~Image()
{
	totalCount--;
	std::cout << "Image destructor" << std::endl;
	delete _imageData;
}

void Image::clear()
{
	return;
}
Image Image::operator+(const Image& second)
{
	Image result({}, this->width() + second.width(), this->height() + second.height());
	return result;
}
unsigned int Image::operator[](int index)
{
	return index*4;
}
bool Image::operator<(const Image& second)
{
	return false;
}

bool Image::operator<(unsigned int widht)
{
	return false;
}

unsigned int Image::operator()(int index, uint32_t contrast, uint32_t brightnes)
{
	return index*3;
}

unsigned int Image::operator()(int index, uint32_t contrast)
{
	return index*2;
}

void Image::setPixel(uint32_t x, uint32_t y, uint32_t pixel)
{
	std::cout << std::endl;
}

void Image::print(const Image& image)
{
	std::cout << "resolution" << std::endl;
}

unsigned int Image::RGBtoCMYK(unsigned int pixel)
{
	return pixel ^ 2323;
}
