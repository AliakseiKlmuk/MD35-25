#pragma once
class Counter
{
public:   // constructor
	Counter() : _count(0){}
	Counter(int c):_count(c){}

public:   // getter
	unsigned int count() const { return _count; }

protected:
	unsigned int _count;
};

