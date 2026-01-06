
#include <iostream>
#define DEBUG 4
#define PI 3.14
#define FUNC_MULT(x,y) ((x)*(y))
#define FUNC_PLUS(x,y) ((x)+(y))


int main()
{

    setlocale(LC_ALL, "ru");

#if DEBUG == 5
    std::cout << "начало цикла" << std::endl;
#endif //DEBUG

    for (int i = 0; i < 5; ++i) {

        std::cout << i << std::endl;
    }

#if DEBUG == 4
    std::cout << "конец цикла" << std::endl;
#endif // DEBUG

    std::cout << PI << std::endl;

    std::cout << FUNC_MULT(5,6) << std::endl;

    std::cout << FUNC_PLUS(5, 6) << std::endl;

#ifdef DEBUG

    std::cout << "DEBUG определен" << std::endl;

#else

    std::cout << "DEBUG неопределен" << std::endl;
#endif

}


    
