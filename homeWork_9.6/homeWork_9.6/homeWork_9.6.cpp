
#include <iostream>
#include "book.h"
#include "type.h"

int main()
{
    type t1;
    book b1;

    t1.getData();
    b1.getData();
    std::cout << std::endl;
    t1.putData();
    std::cout << std::endl;
    b1.putData();
    
}
