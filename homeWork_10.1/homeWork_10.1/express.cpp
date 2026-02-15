#include "express.h"
#include <iostream>

void express::parse()
{
	char ch;
	char lastVal;
	char lastTop;

	for (int i = 0; i < _len; ++i)
	{
		ch = _pStr[i];

		if (ch >= '0' && ch <= '9')	{
			s.push(ch - '0');
		}
		else if (ch == '+' || ch == '/' ||ch == '*' || ch == '/') {
			if (s.getTop() == 1) {
				s.push(ch);
			}
			else {
				lastVal = s.pop();
				lastTop = s.pop();

				if ((ch == '+' || ch == '/') && (ch == '*' || ch == '/')) {
					s.push(lastTop);
					s.push(lastVal);
				}
				else {
					switch (lastTop) {
					case '+':
						s.push(s.pop() + lastVal);
						break;
					case '-':
						s.push(s.pop() - lastVal);
						break;
					case '*':
						s.push(s.pop() * lastVal);
						break;
					case '/':
						s.push(s.pop() / lastVal);
						break;
					default:
						std::cout << "Unknown";
						exit(1);
					}
				}
				s.push(ch);
			}
		}
		else {
			std::cout << "Unknown";
			exit(1);
		}
	}
}

int express::solve()
{
	char lastVal;
	while (s.getTop() > 1)
	{
		lastVal = s.pop();
		switch (s.pop())
		{
		case '+':
			s.push(s.pop() + lastVal);
			break;
		case '-':
			s.push(s.pop() - lastVal);
			break;
		case '*':
			s.push(s.pop() * lastVal);
			break;
		case '/':
			s.push(s.pop() / lastVal);
			break;
		default:
			std::cout << "Unknown";
			exit(1);
		}
	}
	return int (s.pop());
}
