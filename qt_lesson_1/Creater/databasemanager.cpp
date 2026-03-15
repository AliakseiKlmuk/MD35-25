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
               "soccet TEXT, "
               "name TEXT, "
               "power REAL, "
               "nominal REAL)");
}

void databaseManager::addComponent(const Component &component){
    QSqlQuery query;

    query.prepare("INSERT INTO components (type, soccet, name, power, nominal) VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(component.getType());
    query.addBindValue(component.getSubtype());
    query.addBindValue(component.getName());
    query.addBindValue(component.getPower());
    query.addBindValue(component.getNominal());

    if(!query.exec()){
        qDebug() << "Failed to insert component:" << query.lastError();
    }
    //int id = query.lastInsertId().toInt();
    //component.setId(id);
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
            query.value(5).toDouble()));
        }
        return components;
}

QList<Component> databaseManager::getAllComponents(){
    return fetchComponents();
}

void databaseManager::deleteComponent(int id){
    QSqlQuery query;

    query.prepare("Delete FROM components where id = ?");
    query.addBindValue(id);

    if (!query.exec()){
         qDebug() << "Failed to delete component:" << query.lastError();
    }
}
