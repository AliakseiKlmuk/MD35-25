
#include <QApplication>
#include <QLabel>

#include <QCoreApplication>

#include "databasemanager.h"
#include "component.h"
#include "createelementdialog.h"
#include "mainwindow.h"
#include "componentstablewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    databaseManager dbManager;

    MainWindow w;
    w.show();

    return a.exec();
}
