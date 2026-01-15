
#include <iostream>

enum class cardinalDirections {
    NORTH = 0,
    NORTH_WEST = 45,
    WEST = 90,
    SOUTH_WEST = 135,
    SOUTH = 180,
    SOUTH_EAST = 225,
    EAST = 270,
    NORTH_EAST = 315,
    UNKNOW = -1,
    ROUND = 359
};

void Cardinal(cardinalDirections cardinal) {

    int cardinalValue = static_cast<int>(cardinal);

    if (cardinal < cardinalDirections::NORTH || cardinal > cardinalDirections::ROUND)
    {
        std::cout << "Unknown direction" << std::endl;
    }

    else if (cardinalDirections::NORTH == cardinal)
    {
        std::cout << "Your direction North" << std::endl;
    }
    else if (cardinalDirections::NORTH <= cardinal && cardinal < cardinalDirections::WEST)
    {
        std::cout << "Your direction NorthWest" << std::endl;
    }

    else if (cardinalDirections::WEST == cardinal)
    {
        std::cout << "Your direction West" << std::endl;
    }
    else if (cardinalDirections::WEST < cardinal && cardinal < cardinalDirections::SOUTH)
    {
        std::cout << "Your direction SouthWest" << std::endl;
    }

    else if (cardinalDirections::SOUTH == cardinal)
    {
        std::cout << "Your direction South" << std::endl;
    }
    else if (cardinalDirections::SOUTH < cardinal && cardinal < cardinalDirections::EAST)
    {
        std::cout << "Your direction SouthEast" << std::endl;
    }

    else if (cardinalDirections::EAST == cardinal)
    {
        std::cout << "Your direction East" << std::endl;
    }
    else if (cardinalDirections::EAST < cardinal && cardinal <= cardinalDirections::ROUND)
    {
        std::cout << "Your direction NorthEast" << std::endl;
    }

}

int main()
{

    int degreeInput;

    while (true) {

        std::cout << "enter degree 0 - 359" << std::endl;
        std::cin >> degreeInput;

        if (degreeInput < 0 || degreeInput > 359) {
            std::cout << "uncorrect degree. enter degree 0 - 359" << std::endl;
            continue;
        }
        cardinalDirections degree = static_cast<cardinalDirections>(degreeInput);
        Cardinal(degree);
        break;
    }



    return 0;
}
