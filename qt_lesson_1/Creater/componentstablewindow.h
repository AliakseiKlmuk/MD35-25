#ifndef COMPONENTSTABLEWINDOW_H
#define COMPONENTSTABLEWINDOW_H

#include <QDialog>
#include <QWidget>
#include <QTableWidget>
#include <QBoxLayout>
#include <QHeaderView>
#include <QPushButton>
#include <QMessageBox>

#include "databasemanager.h"

namespace Ui {
class componentsTableWindow;
}

class componentsTableWindow : public QWidget
{
    Q_OBJECT

public:
    explicit componentsTableWindow(databaseManager *dbManager, QWidget *parent = nullptr);
    void loadComponents();
    void deleteSelectComponent();

private:
    QTableWidget *tableWidget;
    databaseManager *dbManager;

};

#endif // COMPONENTSTABLEWINDOW_H
