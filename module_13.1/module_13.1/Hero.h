#pragma once
#include <functional>

class Hero
{
public:
	Hero();

public:
	void run();
	void setCurrentStrategy(std::function<int(int)> strategy);

public:
	int currentStep() const { return _currentStep; }

private:
	int _currentStep = 0;
	std::function<int(int)> _curentStrategy;
};

