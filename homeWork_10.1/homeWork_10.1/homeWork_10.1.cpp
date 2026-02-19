
#include <iostream>
#include "Strack.h"
#include "express.h"

const int LEN = 80;


int main()
{
	char ans;
	char string[LEN];
	std::cout << " Enter mathematics formula: ";

	do {
		std::cout << " Your formula: "; std::cin >> string;

		express* eptr = new express(string);
		eptr->parse();
		std::cout << " Result: " << eptr->solve();
		delete eptr;
		std::cout << " Next formula (y or n): "; std::cin >> ans;

	} while (ans == 'y');
}
