#ifndef COMPONENT_H
#define COMPONENT_H

#include <QString>

class Component
{
public:
    Component( const QString &type, const QString &subtype, const QString &name,
               double power, double nominal, const QString &packege = "",
               const QString &schematic = "", const QString &footprint = "",
               const QString &elementSize = "", const QString &pinout = "");

public:
    QString getType() const {return _type;};
    QString getSubtype() const {return _subtype;};
    QString getName() const {return _name;};
    double getPower() const {return _power;};
    double getNominal() const {return _nominal;};
    QString getPackege() const {return _packege;};
    QString getSchematic() const {return _schematic;};
    QString getFootprint() const {return _footprint;};
    QString getElementSize() const {return _elementSize;};
    QString getPinout() const {return _pinout;};

private:
    QString _type;           // тип
    QString _subtype;        // подтип
    QString _name;           // название
    double _power;           // мощность
    double _nominal;         // ноиминал
    QString _packege;        // корпус
    QString _schematic;       // ссылка на схему
    QString _footprint;      // размер точек утсановки
    QString _elementSize;    // размер элемента
    QString _pinout;         // указатель на пины

};

#endif // COMPONENT_H
