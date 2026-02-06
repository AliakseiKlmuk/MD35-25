#pragma once

class Stack
{
public:
	Stack() { _top = -1; }

public:
	void push(int var);
	int pop();

protected:
	enum { MAX = 3 };
	int _st[MAX];
	int _top;
};

