#pragma once

#include "Counter.h"

class CountDn : public Counter
{
public:
	CountDn():Counter(){}
	CountDn(int c):Counter(c){}

public:
	Counter operator--();
};

