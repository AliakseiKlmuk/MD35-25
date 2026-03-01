#pragma once
#include <string>
#include <iostream>
#include "Tree.h"

class Forest
{
public:
	void changeID(unsigned nextID)
	{
		Tree::idNext = nextID;
	};

private:

};
