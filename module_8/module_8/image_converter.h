#pragma once
#include <vector>

enum class OutputType
{
	Unknow = 1,
	JPEG,
	PNG
};

enum class InputType
{
	Unknow = -1,
	BMP,
	RAW
};

struct ConvertParametrs
{
	std::vector<char> image;
	InputType inputType;
	OutputType outPut;
	float ratio = 1.5;
	unsigned int outputWidth = 1000;

};

std::vector<char> convert(const std::vector<char>& inputImage, 
	OutputType output = OutputType::JPEG,
	InputType input = InputType::BMP,
	float ratio = 1.5);
std::vector<char> convert(const char* inputImage, int size, 
	OutputType output = OutputType::JPEG,
	InputType input = InputType::BMP,
	float ratio = 1.5);

std::vector<char> convert(const ConvertParametrs& params);

int getPixelSize(int pixel);
int getPixelSize(long pixel);