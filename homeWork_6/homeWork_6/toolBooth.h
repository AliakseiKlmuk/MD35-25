#pragma once
class toolBooth
{
public:

	toolBooth(unsigned int totalCar, double totalCash) : _totalCar{ totalCar }, _totalCash{ totalCash }	{ }
	
public:
	void payingCar();
	void nopayCar();

public:
	void display() const;
	~toolBooth();

private:
	unsigned int _totalCar;
	double _totalCash;

};

