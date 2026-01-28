#include <iostream>
#include "ImageConverter.h"
#include "Image.h"

int main()
{
    std::cout << "Hello Module8!\n";

    Image imageToConvert;
    imageToConvert.width();
    auto res_val = imageToConvert(imageToConvert(45, 100), 100, 150);
    //auto res_val = imageToConvert(45, 100);

    Image *image_new = new Image({}, 1920, 1880);
    Image image_new2{ {}, 1920, 1880 };
    Image image_new3{ {}, 800, 600 };
   // std::cout << "Total count: " << Image::totalCount << std::endl;
    Image::print(image_new2);
    std::cout << image_new2.height() << " " << image_new2.width() << std::endl;

    auto res = image_new2 + image_new3;
    auto pixel = image_new2[333];
    std::cout << "pixel" << pixel << std::endl;

   /* if (mage_new2 < image_new3)
    {
        std::cout << "image2 < image3" << std::endl;
    }
    else
    {
        std::cout << "image2 > image3" << std::endl;
    }*/

    Image::print(res);

    return 0;

    ImageConverter converter1;
    std::cout << sizeof(converter1) << std::endl;
    std::vector<char> data;
    data.resize(100);
    Image image1(data, 10, 10);

    Image image_copy{ image1 };

    Image* imagePtr = new Image;
    delete imagePtr;

   // std::cout << "Total count: " << Image::totalCount << std::endl;

    return 0;

    //image1.setData(data);
    converter1.Convert(image1);  //ImageConverter::Convert(&converter1, image1);
    //ImageConverter::Convert(ImageConverter* this,const std::vector<char> &imputImage) - Class functions table
   // converter1.m_currentImage = {};
    converter1.setCurrentImage(image1);
    converter1.Convert(image1);
    auto currImage = converter1.getCurentImage();

    ImageConverter* converter2 = new ImageConverter;
    std::cout << sizeof(*converter2) << std::endl;
    Image image2;
    std::vector<char> data2;
    data.resize(200);
    //image2.setData(data2);
    converter2->Convert(image2); //ImageConverter::Convert(converter2, image2);
}