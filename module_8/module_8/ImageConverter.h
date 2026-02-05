#pragma once

#include <vector>
#include "Image.h"

class ImageConverter
{
public:
	void init() {};
	void deInnit() {};

	Image Converter(Image &inputImage);


public: // setters-getters
	Image getCurrentImage() { return m_currentImage; }
	void setCurrentImage( Image& inputImage);

private:
	const Image ConvertStep1_Resolution(
		const Image& inputImage) {
		return Image{};
	}
	const Image ConvertStep2_Contrast(
		const Image& inputImage) {
		return {};
	}


private:
	Image m_currentImage;
	int m_id = 0;

};

