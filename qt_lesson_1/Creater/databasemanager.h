#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include <QDebug>

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
    void deleteComponent(int id);

    QList<Component> fetchComponents();
    QList<Component> getAllComponents();

private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
