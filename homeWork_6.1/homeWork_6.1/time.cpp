#include "time.h"
#include <iostream>

void Time::updateTime()
{
	std::cout << "Enter hour: ";	std::cin >> _hour;
	std::cout << "Enter minute: ";	std::cin >> _minute;
	std::cout << "Enter secunda: ";	std::cin >> _second;
}

void Time::differentTime(const Time& other) const
{
	int differ_hour{ 0 }, differ_minute{ 0 }, differ_second{ 0 };

	if (_hour > other.getHour())	{differ_hour = _hour - other.getHour();
	}	else { differ_hour = other.getHour() - _hour; }

	if (_minute > other.getMinute()) {differ_minute = _minute - other.getMinute();
	}	else { differ_minute = other.getMinute() - _minute; }
	
	if (_minute > other.getSecond()) {differ_second = _second - other.getSecond();
	}	else { differ_second = other.getSecond() - _second; }
	
	std::cout << differ_hour << " : " << differ_minute << " : " << differ_second << std::endl;
}

void Time::displayTime() const
{
	std::cout << _hour << " : " << _minute << " : " << _second << std::endl;
}
