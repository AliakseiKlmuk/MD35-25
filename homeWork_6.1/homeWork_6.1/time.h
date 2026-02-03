#pragma once
#include <iostream>

class Time
{
public:
	
	Time(unsigned int hour, unsigned int minute, unsigned int second) : 
		_hour{hour}, _minute{minute}, _second{second}{}

	void updateTime();
	void displayTime() const;

	void differentTime(const Time& other) const;

public:
	unsigned int getHour() const { return _hour; }
	unsigned int getMinute() const { return _minute; }
	unsigned int getSecond() const { return _second; }

public:
	~Time() {};

private:
	unsigned int _hour;
	unsigned int _minute;
	unsigned int _second;

};

