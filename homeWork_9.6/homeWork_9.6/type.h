#pragma once
#include "publication.h"

class type : private publication
{
public:
	type() : publication("", 0.0), _time(0.0) {}
	type(const std::string& name, float coast, float time): publication(name, coast), _time(time){}

public:
	void getData() override;
	void putData() const override;

private:
	float _time;
};

