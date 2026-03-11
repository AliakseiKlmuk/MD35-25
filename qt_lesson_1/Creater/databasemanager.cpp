#include "databasemanager.h"

#include <QSqlError>
#include <QDebug>

databaseManager::databaseManager(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("components.db");
    openDatabase();
    createTable();
}

databaseManager::~databaseManager(){ db.close();}

bool databaseManager::openDatabase(){
    if(!db.open()){
        qWarning() <<"Cannot open database: " << db.lastError().text();
        return false;
    }
    return true;
}

void databaseManager::createTable(){
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS components ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "type TEXT, "
               "subtype TEXT, "
               "name TEXT, "
               "power REAL, "
               "nominal REAL, "
               "packege TEXT, "
               "schematic TEXT, "
               "footprint TEXT, "
               "elementSize TEXT, "
               "pinout TEXT)");
}

void databaseManager::addComponent(const Component &component){
    QSqlQuery query;
    query.prepare("INSERT INTO components (type, subtype, name, power, nominal, packege, "
                  "schematic, footprint, slsmentSize, pinout) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(component.getType());
    query.addBindValue(component.getSubtype());
    query.addBindValue(component.getName());
    query.addBindValue(component.getPower());
    query.addBindValue(component.getNominal());
    query.addBindValue(component.getPackege());
    query.addBindValue(component.getSchematic());
    query.addBindValue(component.getFootprint());
    query.addBindValue(component.getElementSize());
    query.addBindValue(component.getPinout());

    if(!query.exec()){
        qWarning() << "Failed to insert component:" << query.lastError().text();
    }
}

QList<Component> databaseManager::fetchComponents(){
    QList<Component> components;
    QSqlQuery query("SELECT * FROM components");
        while(query.next()){
            components.append(Component(
            query.value(1).toString(),
            query.value(2).toString(),
            query.value(3).toString(),
            query.value(4).toDouble(),
            query.value(5).toDouble(),
            query.value(6).toString(),
            query.value(7).toString(),
            query.value(8).toString(),
            query.value(9).toString(),
            query.value(10).toString() ));
        }
        return components;
}
