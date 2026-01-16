#pragma once
#include <vector>
#include <iostream>

enum class OutputType
{
	Unknown = -1,
	JPEG,
	PNG
};

enum class InputType
{
	Unknown = -1,
	BMP,
	RAW
};



struct ConvertParameters
{
	struct Size
	{
		int width;
		int height;
	};

	InputType inputType{ InputType::BMP };
	OutputType outputType{ OutputType::JPEG };
	float ratio = 1.5;
	unsigned int outputWidth = 1000;
	Size size;

	void print()
	{
		std::cout << ratio << std::endl;
	}
};

std::vector<char> convert(const std::vector<char>& inputImage,
	OutputType out = OutputType::JPEG,
	InputType inpt = InputType::BMP,
	float ratio = 1.5);

std::vector<char> convert(const char* input,
	int size,
	OutputType output = OutputType::JPEG,
	InputType inputType = InputType::BMP,
	float ratio = 1.5);

std::vector<char> convert(const std::vector<char>& inputImage,
	const ConvertParameters& params);
//std::vector<char> convert(const char* input,
//	int size,
//	const ConvertParameters& params);

int getPixelSize(int pixel);
int getPixelSize(long pixel);