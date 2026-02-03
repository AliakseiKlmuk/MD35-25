
#include <iostream>
#include "toolBooth.h"

int main()
{
    std::cout << "Hello class homeWork topic 6!\n";

    toolBooth booth(0, 0.0);
    char input;

    std::cout << "Press button q or w. exit button e" << std::endl;
    
    do {
        std::cin >> input;

        switch (input)
        {
        case 'q':
            booth.payingCar();
            booth.display();
            break;
        case 'w':
            booth.nopayCar();
            booth.display();
            break;
        }
    } while (input != 'e');

    std::cout << "Total result: "; booth.display();
    
}
