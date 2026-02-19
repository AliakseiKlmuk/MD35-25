#pragma once
#include <string>
#include <iostream>

class StringComporator
{
public:
	StringComporator() = default;

	void compstr(const char* str1, const char* str2);

public:
	//std::string getStringComporator() { return _result; } // получает значение
	//void setStringComporator() {_str1 = str};  // устанавлиывает значение

public:
	void display() const;

private:

	std::string _result;

};

