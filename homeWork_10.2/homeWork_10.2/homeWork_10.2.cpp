
#include <iostream>
#include "String.h"
#include "linklist.h"

struct Person
{
    std::string name;
    int age;
};

enum class Color {
    red, blue, green, orange
};

const int DAYS = 7;

int main()
{
    Color color =  Color::red;

    if (Color::blue != color)
        std::cout << "unknow color";


    Person person;
    person.age = 30;
    person.name = "Van";

    std::cout << person.name << " " << person.age << std::endl;


    link Link;
    Link.data = 20;
    

    linklist li;

    li.additem(25);
    li.additem(36);
    li.additem(49);
    li.additem(64);

    li.display();
    li.display(2);


    //const char* arrptrs[DAYS] = { "Monday", "Tuesday", "Wednesday", "Thursday", 
    //                              "Friday", "Saturday", "Sunday" };

    //String::displayArray(arrptrs, DAYS);

    //String::bsort(arrptrs, DAYS);
   
    //String::displayArray(arrptrs, DAYS);

    //String s1 ("Enter");

    //std::cout << "s1 = ";
    //s1.display();
    //s1.upit();
    //s1.display();

    return 0;
    //float* array = new float[20];
    //int coin = 0;
    //float summ = 0.0;

    //do {
    //    std::cout << "Enter number: "; std::cin >> *(array+coin);
    //    coin++;
    //   
    //} while (coin != 20);

    //for (int i = 0; i < coin; ++i)
    //{
    //    summ += *(array + i);
    //    std::cout << *(array+i) << " ";

    //}
    //std::cout << std::endl;

    //float resalt = summ / coin;
    //std::cout << resalt << std::endl;

    //delete[] array;

    //std::cout << "Hello World!\n";
}
