
#include <iostream>
#include "employee.h"
#include "manager.h"
#include "scientist.h"
#include "laborer.h"
#include "foremen.h"
#include "student.h"

int main()
{
    manager m1, m2;
    scientist s1, s2;
    laborer l1;
    foremen f1;

    std::cout << std::endl;
    std::cout << "Enter information about first menager: ";
    m1.getData();
    std::cout << "Enter information about first scientist: ";
    s1.getData();
    std::cout << "Enter information about first laborer: ";
    l1.getData();
   // std::cout << "Enter information about first foremen: ";
   // f1.getData();

    std::cout << "Information about first menager: ";
    m1.putData();
    std::cout << "Information about first scientist: ";
    s1.putData();
    std::cout << "Information about first laborer: ";
    l1.putData();
   // std::cout << "Information about first foremen: ";
   // f1.putData();

    std::cout << std::endl;


    //std::cout << "Hello World!\n";
}
