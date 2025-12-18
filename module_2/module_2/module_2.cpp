#include <iostream>

int main()
{

    int a, b;
    std::cout << "enter a number a\n";
    std::cin >> a;
    std::cout << "enter a number b\n";
    std::cin >> b;
    std::cout << "change and enter operation\n";

    // std::cin.read();

         //a + b plus
         // a - b minus 
         // a * b times
    std::cout << "a + b = " << a + b << "; a - b = " << a - b << "; a * b = " << a * b << std::endl;

    //a == b equal to
    if (a == b) { std::cout << "a == b it's " << true << std::endl; }
    else { std::cout << "a == b it's " << false << std::endl; }

    //a != b not equal to
    if (a != b) { std::cout << "a != b it's " << true << std::endl; }
    else { std::cout << "a != b it's " << false << std::endl; }

    //a > b more than
    if (a > b) { std::cout << "a > b it's " << true << std::endl; }
    else { std::cout << "a > b it's " << false << std::endl; }

    //a < b  less than
    if (a < b) { std::cout << "a < b it's " << true << std::endl; }
    else { std::cout << "a < b it's " << false << std::endl; }

    //a >= b greater than or equal to
    if (a <= b) { std::cout << "a <= b it's " << true << std::endl; }
    else { std::cout << "a <= b it's " << false << std::endl; }

    //a <= b less than or equal to
    if (a >= b) { std::cout << "a >= b it's " << true << std::endl; }
    else { std::cout << "a >= b it's " << false << std::endl; }

    //a & b AND
    int c = a & b;
    std::cout << "a & b = " << c << std::endl;

    //a | b OR
    int d = a | b;
    std::cout << "a | b = " << d << std::endl;

    //a ^ b XOR
    int e = a ^ b;
    std::cout << "a ^ b = " << e << std::endl;

    //~a NOT
    int f = ~a;
    std::cout << "~a = "<< f << std::endl;

    //a << 2
    int g = b << 2;
    std::cout << "a << 2 = " << g << std::endl;

    //b >> 1
    int h = b >> 1;
    std::cout << "b >> 1 = " << h << std::endl;



}