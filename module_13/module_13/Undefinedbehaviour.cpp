#include "Undefinedbehaviour.h"
#include <iostream>

void Undefinedbehaviour::raise()
{
    float koef = 3.0;
    auto summ = [&koef](int a, int b)
        {
            auto c = (a + b) * koef;
            return c;
        };
}
