#pragma once
class Distance
{
public:
	Distance() : _feet(0), _inches(0.0) {}
	Distance(int ft, float in) : _feet(ft), _inches(in) {}

public:
	void getDist();
	void showDist() const;

private:
	int _feet;
	float _inches;

};

