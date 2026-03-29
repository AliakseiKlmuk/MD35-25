#pragma once
#include <iostream>

class Image
{
public:
	Image();
	~Image();

	Image(const Image* other);

	Image(Image&& other);

private:
	char* _data = nullptr;
};

