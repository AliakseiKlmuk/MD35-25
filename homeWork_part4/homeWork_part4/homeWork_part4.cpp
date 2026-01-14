// структура

#include <iostream>
using namespace std;

struct part             // определение структуры
{
    int modelnumber;
    int partnumber;
    float cost;
};

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

int main()
{

    Room dining = { {13,6.5},{10, 0.0} };   //инициализация переменной

    dining.length.feet = 13;              //инициализация переменной
    dining.length.inches = 6.5f;

    dining.width.feet = 10;
    dining.width.inches = 0.0f;

    float l = dining.length.feet + dining.length.inches / 12;
    float w = dining.width.feet + dining.width.inches / 12;

    std::cout << "squaer room: " << l * w << std::endl;


    return 0;
    Distance d1, d3;
    Distance d2 = {11, 6.25f};

    std::cout << "Enter the number of pounds: "; std::cin >> d1.feet;
    std::cout << "Enter the number of inches: "; std::cin >> d1.inches;

    d3.inches = d1.inches + d2.inches;
    d3.feet = 0;

    if (d3.inches >= 12.0)
    {
        d3.inches -= 12.0;
        d3.feet++;
    }

    d3.feet += d1.feet + d2.feet;

    std::cout << d1.feet << "\'- " << d1.inches << std::endl;
    std::cout << d2.feet << "\'- " << d2.inches << std::endl;
    std::cout << d3.feet << "\'- " << d3.inches << std::endl;
    
    
    return 0;
    part part1 = { 6244, 373, 217.55f };                 // объявление переменной типа part
    part part2;
    

    std::cout << "Model: " << part1.modelnumber << std::endl;
    std::cout << "Detail: " << part1.partnumber << std::endl;
    std::cout << "Coast: " << part1.cost << std::endl;

    part2 = part1;

    std::cout << "Model: " << part2.modelnumber << std::endl;
    std::cout << "Detail: " << part2.partnumber << std::endl;
    std::cout << "Coast: " << part2.cost << std::endl;
    return 0;

    std::cout << "Hello World!\n";
}

 