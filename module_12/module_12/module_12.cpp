
#include <iostream>
#include "tools.h"
#include <string>
#include "ClassesTools.h"


int main()
{
    auto tool1 = new ClassesTools<int>();
    tool1->calculate(5);


    auto tool2 = new ClassesTools<float>();
    tool2->calculate(5.4);

    std::cout << tool1 << " " << typeid(*tool1).name() << std::endl;
    std::cout << tool2 << " " << typeid(*tool2).name() << std::endl;

    return 0;
    int a = 15;
    float b = 2.5;
    std::string c = "Hello";
    //CustomObject object;

    print(a);
    print(b);
    print(c);

    print(sum(b, a));
   // print(d);

   // print(object);
    std::cout << std::endl;




    std::cout << "Hello World, module_12!\n";
}
