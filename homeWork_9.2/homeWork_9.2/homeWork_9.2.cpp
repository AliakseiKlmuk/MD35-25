
#include <iostream>
#include <process.h>

#include "Stack.h"
#include "Stack2.h"

int main()
{
    Stack2 s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);

    std::cout << std::endl << s1.pop();
    std::cout << std::endl << s1.pop();
    std::cout << std::endl << s1.pop();
    std::cout << std::endl << s1.pop();
    std::cout << std::endl;

    std::cout << "Hello World!\n";
}
