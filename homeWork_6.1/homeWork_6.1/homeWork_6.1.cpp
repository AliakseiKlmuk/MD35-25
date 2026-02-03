
#include <iostream>
#include "time.h"

int main()
{
	Time time_1(11, 59, 59);
	time_1.displayTime();

	Time time_2(0, 0, 0);
	time_2.updateTime();
	time_2.displayTime();

	time_1.differentTime(time_2);

   // std::cout << "Hello World!\n";
}
