#pragma once
#include <vector>
#include "Image.h"

class ImageConverter
{

public:
	Image Convert(const Image& inputImage);
public:	//setters-getters
	Image getCurentImage() { return m_currentImage; }
	void setCurrentImage(Image& inputImage);

private:
	const Image ConvertStep1_Resolution(
		const Image& inputImage) {
		return {};
	};
	const Image ConvertStep2_Contrast(
		const Image& inputImage) {
		return {};
	};

private:
	void init() {};
	void deInit() {};

private:
	Image m_currentImage;
	int m_id{ 0 };
};