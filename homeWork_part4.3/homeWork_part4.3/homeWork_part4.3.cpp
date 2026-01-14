
#include <iostream>

enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    days_of_week day1, day2;
    day1 = Mon;
    day2 = Thu;
    int diff = day2 - day1;

    std::cout << "Diferent day2 and day1: " << diff << std::endl;

    if (day1 < day2)
    {
        std::cout << "day2 more than day1 on: " << diff << " days" << std::endl;
    }
    return 0;
}
