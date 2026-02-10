#pragma once
#include "publication.h"
#include "sales.h"

class type : private publication, private sales
{
public:
	type() : publication(""), _time(0.0), sales(0.0){}

	type(const std::string& name, float time, float coast)
		: publication(name), _time(time), sales(coast) {}

public:
	void getData() override;
	void putData() const override;

private:
	float _time;
};

