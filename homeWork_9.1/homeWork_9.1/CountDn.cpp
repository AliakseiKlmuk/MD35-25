#include "CountDn.h"

Counter CountDn::operator--()
{
    return Counter(--_count);
}
 