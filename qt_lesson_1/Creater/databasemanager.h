#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include "component.h"

class databaseManager
{
public:
    databaseManager();
    ~databaseManager();

public:
    bool openDatabase();
    void addComponent(const Component &component);
    void createTable();
    QList<Component> fetchComponents();

private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
