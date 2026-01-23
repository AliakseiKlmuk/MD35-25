
#include <iostream>
#include "ImageConvertor.h"
#include "Image.h"

int main()
{
    std::cout << "Hello Module8!\n";

    ImageConverter converter1;
    std::cout << sizeof(converter1) << std::endl;
    std::vector<char> data;
    data.resize(100);
    Image image1(data, 10, 10);

    Image image_copy{ image1 };

    Image* imagePtr = new Image;
    delete imagePtr;
    
    return 0;

    //converter1.Convert(image1); // ImageConverter::Convert(&converter1, image1);

    //  ImageConverter::Convert(ImageConvertor* this, const std::vector<char> &inputImage) - Class function
   
    //ImageConverter* converter2 = new ImageConverter;
   // std::cout << sizeof(*converter2) << std::endl;
    //std::vector<char> data2;
   // data2.resize(200);
   // converter2->Convert(data2); //ImageConverter::Convert(converter2, image2);


}
