#pragma once
#include <iostream>
#include <string>

#include "Author.h"
#include "Item.h"

class Book : public Item
{
public:
	Book(const std::string& title, const std::string& name, unsigned int year, unsigned int pages) :
		_pages(pages)
	{
		_title = new std::string(title);
		_author = new Author(name, year);
	}

public:
	void setPages(unsigned int pages) { _pages = pages; }
	void setName(const std::string& title)
	{
		if (_title)
		{
			delete _title;
		}

		_title = new std::string(title);
	}

	void print() const; 

public:
	~Book()
	{
		delete _title;
		delete _author;
	}

private:
	unsigned int _pages;
	std::string* _title;
	Author* _author;
};

