#include "ImageConvertor.h"
#include <iostream>

Image ImageConverter::Convert(const Image&inputImage)
{
	m_currentImage = inputImage;
	std::cout << "ImageConverter::Convert " << std::endl;
	ConvertStep1_Resolution(inputImage);
	ConvertStep2_Contrast(inputImage);
	return {};
}

void ImageConverter::setCurrentImage(Image& inputImage)
{
	if (inputImage.height() > 0 && inputImage.width()>0)
			m_currentImage = inputImage;
	
}