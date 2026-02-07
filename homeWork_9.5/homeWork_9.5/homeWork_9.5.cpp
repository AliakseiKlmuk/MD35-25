
#include <iostream>
#include <string>

#include "Type.h"
#include "Distance.h"
#include "Lumber.h"

int main()
{
    Lumber siding;
    std::cout << "\n Information:\n";
    siding.getLumber();

    Lumber studs("2*2", "const", 8, 0.0, 200, 4.45F);
    std::cout << "\n Obshivka: "; siding.showLumber();
    std::cout << "\n Brus: "; studs.showLumber();

    std::cout << std::endl;
    std::cout << "Hello World!\n";
}
