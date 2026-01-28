#pragma once
#include <vector>

class Image
{
public:
	Image();  //default constructor
	//Image(std::vector<char> data);  //user-defined constructor (custom constructor)
	Image(std::vector<char> data, unsigned int width, unsigned int height); //user-defined constructor (custom constructor)

	Image(const Image& other);


	~Image(); //destructor

	void clear();

	static void print(const Image& image);

public:
	Image operator+(const Image& second);
	unsigned int operator[](int index);
	bool operator<(const Image& second);
	bool operator<(unsigned int widht);

	unsigned int operator()(int index, uint32_t contrast, uint32_t brightnes);
	unsigned int operator()(int index, uint32_t contrast);

public:

	static unsigned int RGBtoCMYK(unsigned int pixel);
public:
	unsigned int id() const { return _id; };
	unsigned int width() const { return _width; }
	unsigned int height() const { return _height; }

private:
	void setPixel(uint32_t x, uint32_t y, uint32_t pixel);

private:
	//	std::vector<char> _imageData;
	char* _imageData = nullptr;
	unsigned int _width;
	unsigned int _height;
	unsigned int _id = 0;
	unsigned int totalCount;
};