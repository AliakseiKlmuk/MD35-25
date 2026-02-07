#pragma once
#include "Type.h"
#include "Distance.h"

class Lumber : public Type, public Distance
{
public:
	Lumber(): Type(), Distance(), _quantity(0), _price(0.0) {}
	Lumber(std::string di, std::string gr,
			int ft, float in,
			int qu, float prc)
			: Type(di, gr), Distance(ft, in), _quantity(qu), _price(prc) {}

public:
	void getLumber();
	void showLumber() const;

private:
	int _quantity;
	double _price;
};

