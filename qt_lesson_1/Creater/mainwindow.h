#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTimer>
#include <QResizeEvent>
#include <QList>

#include <paintscene.h>
#include "databasemanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QTimer *timer;
    paintScene *scene;
    bool drawing;

private:
    void resizeEvent(QResizeEvent *event);
    databaseManager dbManager;

private slots:                              //ToolBar
    void on_actionNew_triggered();
    void on_actionAdd_element_triggered();
    void on_actionSave_triggered();
    void on_actionDownload_triggered();
    void on_actionQuit_triggered();
    void on_actionconnector_triggered();
    void on_actioneraiser_triggered();
    void on_actionrun_creater_triggered();
    void on_actioncreate_component_triggered();

 private slots:
    void slotTimer();

};
#endif // MAINWINDOW_H
