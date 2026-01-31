#include "ImageConverter.h"
#include <iostream>

std::vector<char> ImageConverter::Converter(const std::vector<char> &inputImage)
{
	m_currentImage = inputImage;
	std::cout << "ImageConverter::Converter" << std::endl;
	return std::vector<char>();
}

void ImageConverter::setCurrentImage(const std::vector<char>& inputImage)
{
	if (inputImage.size() > 0)
	{
		m_currentImage = inputImage;
	}
}
 