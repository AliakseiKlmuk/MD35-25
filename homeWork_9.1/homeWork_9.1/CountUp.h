#pragma once

#include "Counter.h"

class CountUp : public Counter
{
public:
	CountUp() :Counter() {}
	CountUp(int c) :Counter(c) {}

public:
	Counter operator++();
	
};

