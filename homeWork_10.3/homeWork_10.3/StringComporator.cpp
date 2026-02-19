#include "StringComporator.h"

void StringComporator::compstr(const char* str1, const char* str2)
{
	int summ = 0;

	while (*str1 && *str2)
	{
		summ += (*str1 - *str2);
		str1++;
		str2++;
	}

	if (*str1) summ += *str1;
	if (*str2) summ -= *str2;

	if (summ > 0) _result = "\tstr1 > str2";
	else if (summ == 0) _result = "\tstr1 == str2";
	else _result = "\tstr1 < str2";

}

void StringComporator::display() const
{
	std::cout << _result << std::endl;
}
