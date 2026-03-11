#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

#include <QCoreApplication>
#include "databasemanager.h"
#include "component.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    databaseManager dbManager;

    Component resistor("Resistor", "Fixed", "10k", 0.125, 10000.0,
                       "C1-4", "http://example.com/schematic", "ExampleFootprint",
                       "5mm", "1, 2");

    dbManager.addComponent(resistor);


    QList<Component> components = dbManager.fetchComponents();

    for (const auto &component : components){
        qDebug() << component.getName();
    }

    MainWindow w;
    w.show();
    return a.exec();
}
