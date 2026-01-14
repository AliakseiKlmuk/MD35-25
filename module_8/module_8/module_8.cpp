
#include <iostream>
#include "image_converter.h"



int main()
{
    std::cout << "Hello World!\n";

    ConvertParametrs params;
    params.image.resize(200);
    params.inputType = InputType::BMP;
    params.outPut = OutputType::JPEG;
    params.ratio = 1.5;

    ConvertParametrs* params_ptr = new ConvertParametrs{};
    params_ptr->image.resize(200);
    params_ptr->inputType = InputType::BMP;
    params_ptr->outPut = OutputType::JPEG;
    params_ptr->ratio = 1.5;



    std::vector<char> vct_chr;
    vct_chr.resize(200);

    //OutputType output{ OutputType::JPEG };

    auto output = convert(vct_chr);

    char* image = new char[200];
    auto output2 = convert(image, 200, OutputType::JPEG, InputType::BMP, 1.1f);
    delete[] image;

    auto res = getPixelSize(25);
    std::cout << "Converted" << std::endl;



}
