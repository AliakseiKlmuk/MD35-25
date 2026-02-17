#pragma once
#include <iostream>
#include <string>
#include <cctype>

class String
{
public:
	String(const std::string&  s) : _str(s) {}
		
public:
	~String() 
	{
		std::cout << "Delete string." << std::endl;
			//delete[] arrptrs;
	}

public:
	void display() const;
	void upit();
	
	static void displayArray(const char* ch[], int size);

	static void bsort(const char* ptr[], int n);
	
	
private:
	std::string _str;
};

