#ifndef COMPONENT_H
#define COMPONENT_H

#include <QString>

class Component
{
public:
    Component( const QString &type, const QString &subtype, const QString &name,
               double power, double nominal);

public:
    QString getType() const {return _type;};
    QString getSubtype() const {return _subtype;};
    QString getName() const {return _name;};
    double getPower() const {return _power;};
    double getNominal() const {return _nominal;};

private:
    QString _type;           // тип
    QString _subtype;        // подтип
    QString _name;           // название
    double _power;           // мощность
    double _nominal;         // номинал

};

#endif // COMPONENT_H
