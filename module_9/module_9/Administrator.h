#pragma once
#include <string>
//#include "User.h"

class Administrator //: public User
{
public:

	//Administrator(std::string name);

public:
	std::string token() {	return _token;	}

private:
	std::string _token;

};

