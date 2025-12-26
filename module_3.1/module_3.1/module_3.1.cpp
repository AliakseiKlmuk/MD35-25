#include <iostream>
#include <string>

enum class TrafficLight { UNKNOWN = -1, RED, YELLOW, GREEN };

void printLight(TrafficLight color) {

    if (color == TrafficLight::RED) std::cout << "Red" << std::endl;
    else if (color == TrafficLight::YELLOW) std::cout << "Yellow" << std::endl;
    else if (color == TrafficLight::GREEN) std::cout << "Green" << std::endl;
    else std::cout << "Unknown color" << std::endl;

};

int main()
{

    std::string color;

    std::cout << "Enter color Red, Yellow, Green: " << std::endl;
    std::cin >> color;

    if (color == "Red") printLight(TrafficLight::RED);
    else if (color == "Yellow") printLight(TrafficLight::YELLOW);
    else if (color == "Green") printLight(TrafficLight::GREEN);
    else printLight(TrafficLight::UNKNOWN);

}