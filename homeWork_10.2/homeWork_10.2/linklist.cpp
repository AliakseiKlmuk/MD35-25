#include "linklist.h"

linklist::~linklist()
{
	link* current = _first;
	while (current)
	{
		link* temp = current;
		current = current->next;
		delete temp;

		std::cout << "delete" << " ";
	}
}

void linklist::additem(int d)
{
	link* newlink = new link;
	newlink->data = d;
	newlink->next = _first;
	_first = newlink;

	
}

void linklist::display() const
{
	link* current = _first;
	while (current != NULL)
	{
		std::cout << current->data << std::endl;
		current = current->next;
	}
}

void linklist::display(int index) const
{
	link* current = _first;
	int counter = 0;

	while (current)
	{
		if (counter == index)
		{
			std::cout << current->data << std::endl;
			return;
		}
		current = current->next;
		++counter;

	}
}
