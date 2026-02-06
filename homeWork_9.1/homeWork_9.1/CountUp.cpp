#include "CountUp.h"

Counter CountUp::operator++()
{
    return Counter(++_count);
}
