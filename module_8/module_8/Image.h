#pragma once

#include <vector>

class Image
{
public:
	Image();
	//Image(std::vector<char> data);
	Image(std::vector<char> data, unsigned int width, unsigned int height);


	Image(const Image& other);
	~Image();

public:
	unsigned int width() const{ return _width; }
	unsigned int height() const{ return _height; }

private:
	
	int* _imageData = nullptr;
	unsigned int _width;
	unsigned int _height;

};

