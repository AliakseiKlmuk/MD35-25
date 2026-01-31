
#include <iostream>
#include "ImageConverter.h"

int main()
{
    std::cout << "Hello module 8!" << std::endl;

    ImageConverter converter1;  
    std::cout << sizeof(converter1) << std::endl;
    std::vector<char> image1;
    image1.resize(100);
    converter1.Converter(image1);
    //converter1.m_currentImage = {};

    auto currImage = converter1.getCurrentImage();

    ImageConverter* converter2 = new ImageConverter;
    std::cout << sizeof(*converter2) << std::endl;
    std::vector<char> image2;
    image1.resize(200);
    converter2->Converter(image2);
}