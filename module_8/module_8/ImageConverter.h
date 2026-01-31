#pragma once

#include <vector>

class ImageConverter
{
public:
	void init() {};
	void deInnit() {};

	std::vector<char>Converter(const std::vector<char> &inputImage);
	std::vector<char> getCurrentImage() { return m_currentImage; }
	void setCurrentImage(const std::vector<char>& inputImage);

private:
	std::vector<char> m_currentImage;
	int m_id = 0;

};

