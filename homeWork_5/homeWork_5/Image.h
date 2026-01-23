#pragma once
#include <vector>

class Image
{
public:
	Image ();
	Image (std::vector<char> data, unsigned int width, unsigned int height);

	Image(const Image& other);
	
	~Image();

public:
	unsigned int width() { return _width; }
	unsigned int height() { return _height; }

private:
	//std::vector<char> _imageData;
	char* _imageData = nullptr;
	unsigned int _width;
	unsigned int _height;

};

