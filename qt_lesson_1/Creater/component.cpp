
#include "component.h"

Component::Component(const QString &type, const QString &subtype, const QString &name,
                     double power, double nominal, int id):
    _type(type), _subtype(subtype), _name(name), _power(power), _nominal(nominal) {}
