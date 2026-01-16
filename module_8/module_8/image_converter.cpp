#include "image_converter.h"
#include <iostream>

std::vector<char> convert(const std::vector<char>& inputImage,
	OutputType output,
	InputType inputType,
	float ratio)
{
	return convert(inputImage.data(), inputImage.size(),
		output, inputType, ratio);
	//std::vector<char> result;
	//result.resize(inputImage.size());

	//for (int i = 0; i < inputImage.size(); ++i)
	//	result[i] = inputImage[i] + 10;
	//return result;
}
std::vector<char> convert(const char* inputImage,
	int size,
	OutputType output,
	InputType inputType,
	float ratio)
{
	//std::vector<char> input{ inputImage , inputImage + size };
	//return convert(input);
	std::vector<char> result;
	result.resize(size);
	for (int i = 0; i < size; ++i)
		result[i] = inputImage[i] + 11;
	return result;
}

std::vector<char> convert(const std::vector<char>& inputImage,
	const ConvertParameters& params)
{
	std::cout << params.outputWidth << std::endl;
	return convert(inputImage,
		params.outputType,
		params.inputType,
		params.ratio);
}

int getPixelSize(int pixel)
{
	return 0;
}
int getPixelSize(long pixel)
{
	return 0;
}