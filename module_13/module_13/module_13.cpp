
#include <iostream>

#include<functional>
#include "Undefinedbehaviour.h"

//class lambda_1
//{
//public:
//    lambda_1(float koef_val) : koef(koef_val){}
//    int operator()(int a, int b)
//    {
//        auto c = (a + b) * koef;
//        return c;
//    }
//
//private:
//    float koef;
//};

int main()
{
    Undefinedbehaviour ub;
    ub.raise();

    std::cout << "Hello Module13!\n";
    float koef = 3.0;

    std::function<float(int, int)> func;
   
    auto summ = [&koef](int a, int b)
        {
            auto c = (a + b)*koef;
            return c;
        };
    auto summ_2 = [&koef](int a, int b)
        {
            auto c = (a + b) * koef;
            return c;
        };

    func = summ;
    func = summ_2;

   // koef = 5.0;
    std::cout << typeid(ub).name() << std::endl;
    std::cout << typeid(summ).name() << std::endl;
    std::cout << typeid(summ_2).name() << std::endl;

    int val1 = 10;
    int val2 = 20;
    
    auto result = summ(val1, val2);
    auto result_2 = summ_2(val1, val2);
    auto result_3 = func(val1, val2);

    std::cout << result << std::endl;
    std::cout << result_2 << std::endl;
    std::cout << result_3 << std::endl;
    
    
    //lambda_1 summ_1{ koef };
    //auto result_lamb = summ_1(val1, val2);
    //std::cout << result_lamb << std::endl;
}
