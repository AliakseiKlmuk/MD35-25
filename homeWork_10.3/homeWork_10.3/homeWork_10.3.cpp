
#include <iostream>
#include <string>

#include "StringComporator.h"

int main()
{
	setlocale(LC_ALL, "RU");
	
	StringComporator comporator;

	const char* ch1 = "Hello";
	const char* ch2 = "Morning";



	comporator.compstr(ch1, ch1);
	comporator.display();


}
