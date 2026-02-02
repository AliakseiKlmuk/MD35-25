
#include <iostream>
#include "ImageConverter.h"
#include "Image.h"
#include <vector>

int main()
{
    std::cout << "Hello module 8!" << std::endl;

    ImageConverter converter1;  
    std::cout << sizeof(converter1) << std::endl;
    std::vector<char> data;
    data.resize(100);
    Image image1(data, 10,10);

    Image image_copy{ image1 };

    Image* imagePtr = new Image;
    delete imagePtr;
   

   // return 0;


    //auto currImage = converter1.getCurrentImage();

    //ImageConverter* converter2 = new ImageConverter;
    //std::cout << sizeof(*converter2) << std::endl;
    //Image image2;
    //std::vector<char> data2;
    //data2.resize(200);
    //image2.setData(data2);
    //converter2->Converter(image2);
}