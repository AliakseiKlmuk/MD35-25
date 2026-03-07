
#include <iostream>
#include "ImageFabric.h"


int main()
{
    int d = 22;

    int a = d;

    auto objectToMove = ImageFabric::createImage(10, 20);


    auto img{ std::move(objectToMove) };

    std::cout << "maved: " << std::endl;

    std::cout << "Hello World!\n";
}
