#pragma once
#include "laborer.h"
#include <string>

class foremen : public laborer
{
public:
	void getData();
	void putData() const;
private:
	float _quotas;

};

