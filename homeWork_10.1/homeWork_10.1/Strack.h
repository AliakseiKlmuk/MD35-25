#pragma once
//const int MAX = 40;

class Strack
{
public:
	Strack() { _top = 0; }

public:
	void push(char var);
	char pop();
	int getTop();
private:
	char _st[40];
	int _top;

};

