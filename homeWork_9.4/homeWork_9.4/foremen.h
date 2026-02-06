#pragma once
#include "laborer.h"
class foremen : public laborer
{
public:
	void getData();
	void putData() const;
private:
	float _quotas;

};

