// Module7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "image_converter.h"



int main()
{
    std::cout << "Hello Module7!\n";

    std::vector<char> vct_chr_struct;
    vct_chr_struct.resize(200);

    ConvertParameters params;
    params.inputType = InputType::BMP;
    params.outputType = OutputType::JPEG;
    params.ratio = 1.5;
    params.outputWidth = 1800;
    params.size.width = 100;
    params.print();

    auto res_struct_func = convert(vct_chr_struct, params);

    return 0;






    std::cout << "Type name: " << typeid(params).name()
        << " Type size: " << sizeof(params) << std::endl;

    std::cout << params.ratio << std::endl;

    ConvertParameters* param_ptr = new ConvertParameters{};
    std::cout << "Type name: " << typeid(param_ptr).name()
        << " Type size: " << sizeof(param_ptr) << std::endl;

    //
    param_ptr->inputType = InputType::BMP;
    param_ptr->outputType = OutputType::JPEG;
    param_ptr->ratio = 1.5;

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