
#include <iostream>

#include "Counter.h"
#include "CountDn.h"
#include "CountUp.h"

int main()
{
    CountDn c1 = 100;
    CountUp c2 = 100;
    std::cout << "\nc2= " << c2.count();
    c2.operator++();
    std::cout << "\nc2= " << c2.count();
    
    std::cout << "\nc1= " << c1.count();
    c1.operator--();
    std::cout << "\nc1= " << c1.count();

    std::cout << std::endl;
        
    std::cout << "Hello World!\n";
}
