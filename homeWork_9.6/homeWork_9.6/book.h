#pragma once
#include "publication.h"

class book : private publication
{
public:
	book():publication("", 0.0), _page(0){}
	book(const std::string& name, float coast, int page) : publication(name, coast), _page(page) {}

public:
	void getData() override;
	void putData() const override;


private:
	int _page;

};

