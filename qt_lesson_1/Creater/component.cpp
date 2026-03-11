
#include "component.h"

Component::Component(const QString &type, const QString &subtype, const QString &name,
                     double power, double nominal, const QString &packege,
                     const QString &schematic, const QString &footprint, const QString &elementSize,
                     const QString &pinout):
    _type(type), _subtype(subtype), _name(name), _power(power), _nominal(nominal), _packege(packege),
    _schematic(schematic), _footprint(footprint), _elementSize(elementSize), _pinout(pinout){}
