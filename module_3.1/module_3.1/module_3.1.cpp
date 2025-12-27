#include <iostream>
#include <string>
<<<<<<< HEAD
#include <algorithm>
=======
>>>>>>> 56d2f8f01327c55aeea666533f9407b686285afe

enum class TrafficLight { UNKNOWN = -1, RED, YELLOW, GREEN };

void printLight(TrafficLight color) {

<<<<<<< HEAD
    switch (color) {
        case TrafficLight::RED:
            std::cout << "Red" << std::endl;
            break;
        case TrafficLight::YELLOW:
            std::cout << "Yellow" << std::endl;
            break;
        case TrafficLight::GREEN:
            std::cout << "Green" << std::endl;
            break;
        default:
            std::cout << "Unknown color" << std::endl;
    }
}

int main()
{
    TrafficLight light;

    std::string color;
    std::string strRed = "Red";
    std::string strYellow = "Yellow";
    std::string strGreen = "Green";
    
    std::cout << "Enter color Red, Yellow, Green: " << std::endl;
    std::cin >> color;
    std::transform(color.begin(), color.end(), color.begin(), ::tolower);
   
    std::transform(strRed.begin(), strRed.end(), strRed.begin(), ::tolower);
    std::transform(strYellow.begin(), strYellow.end(), strYellow.begin(), ::tolower);
    std::transform(strGreen.begin(), strGreen.end(), strGreen.begin(), ::tolower);
    //std::cout << color << std::endl;
    
    if (color == strRed) printLight(TrafficLight::RED);
    else if (color == strYellow) printLight(TrafficLight::YELLOW);
    else if (color == strGreen) printLight(TrafficLight::GREEN);
=======
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
>>>>>>> 56d2f8f01327c55aeea666533f9407b686285afe
    else printLight(TrafficLight::UNKNOWN);

}