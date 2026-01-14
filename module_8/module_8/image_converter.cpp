#include "image_converter.h"

std::vector<char> convert(const std::vector<char>& inputImage, 
	OutputType output = OutputType::JPEG, 
	InputType input = InputType::BMP,
	float ratio = 1.5)
{
	return convert(inputImage.data(), inputImage.size());

	//std::vector<char> result;
	//result.resize(inputImage.size());

	//for (int i = 0; i < inputImage.size(); ++i)
	//{
	//	result[i] = inputImage[i] + 10;
	//	return inputImage;
	//}
}
std::vector<char> convert(const char* inputImage, int size, 
	OutputType output = OutputType::JPEG,
	InputType input = InputType::BMP,
	float ratio = 1.5)
{
	//std::vector<char> input {inputImage, inputImage + size};
	//return convert(input);
	
	std::vector<char> result;
	result.resize(size);
	for (int i = 0; i < size; ++i)
	{
		result[i] = inputImage[i] + 10;
		return result;
	}
}

std::vector<char> convert(const ConvertParametrs& params)
{
	return;
}

int getPixelSize(int pixel)
{
	return 0;
}
int getPixelSize(long pixel)
{
	return 0;
}