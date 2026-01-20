#include <iostream>

enum class dayWeek{
    UNKNOW = -1,
    Mon,
    Tue,
    Wen,
    Thu,
    Fri,
    Sat,
    Sun,
    aMax
};

int main()
{
    dayWeek day1, day2;
    day1 = dayWeek::Thu;
    day2 = dayWeek::Fri;

   // std::cout << static_cast<int>(day1) - static_cast<int>(day2) << std::endl;

    
    for (int i = 0; i < static_cast<int>(dayWeek::aMax); ++i) {
        //if (i == static_cast<int>(day1)) {


            switch (i)
            {
            case static_cast<int>(dayWeek::Mon):
                std::cout << "Monday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Tue):
                std::cout << "Tuesday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Wen):
                std::cout << "Wendesday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Thu):
                std::cout << "Thusday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Fri):
                std::cout << "Friday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Sat):
                std::cout << "Saturday" << std::endl;
                break;
            case static_cast<int>(dayWeek::Sun):
                std::cout << "Sunday" << std::endl;
                break;
            }

        //}
       // else {
        //    std::cout << "Unknow" << std::endl;
       //     continue;
       // }
    } 
    
    //int *array{ new int[4] };

}
