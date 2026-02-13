#pragma once
#include <vector>
#include <functional>
#include <string>

class Game
{
public:
	void start();

private:
	std::function<int(int)> getStrategy(std::string name);

private:
	std::vector<int> _advancePaoints = { 5, 10, 15, 20 };

};

