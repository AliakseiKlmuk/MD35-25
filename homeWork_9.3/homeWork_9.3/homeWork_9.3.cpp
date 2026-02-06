
#include <iostream>
#include "DistSing.h"
#include "Distance.h"

int main()
{
    DistSing alpha;
    alpha.getDist();
    
    DistSing beta(11, 6.25);
    DistSing gamma(100, 5.5, neg);

    std::cout << "\nA "; alpha.showDist();
    std::cout << "\nB "; beta.showDist();
    std::cout << "\nC "; gamma.showDist();
    
    std::cout << "Hello World!\n";
}

