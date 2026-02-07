#pragma once
#include "publication.h"
#include "sales.h"

class book : private publication, private sales
{
public:
	book():publication(""), _page(0), sales(0.0)  {}

	book(const std::string& name, int page, float coast)
		: publication(name), _page(page), sales(coast) {}

public:
	void getData() override;
	void putData() const override;


private:
	int _page;

};

