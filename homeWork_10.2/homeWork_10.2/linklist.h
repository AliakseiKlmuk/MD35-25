#pragma once
#include <iostream>
struct link
{
	int data;
	link* next;
};

class linklist
{
public:
	linklist() { _first = NULL; }

public:
	~linklist();

public:
	void additem(int d);
	void display() const;
	void display(int index) const;

private:
	link* _first;

};

