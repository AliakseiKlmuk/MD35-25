#pragma once
#include "Distance.h"

class DistSing : public Distance
{
public:
	DistSing() : Distance() { _sign = pos; }
	DistSing(int ft, float in, posneg sg = pos) : Distance(ft, in) { _sign = sg; }

public:
	void getDist();
	void showDist();

private:
	posneg _sign;
};

