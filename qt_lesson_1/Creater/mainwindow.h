#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTimer>
#include <QResizeEvent>
#include <QList>
#include <QDebug>

#include <paintscene.h>
#include "databasemanager.h"
#include "componentstablewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:                              //ToolBar
    void on_actionNew_triggered();
    void on_showElement_triggered();
    void on_actionSave_triggered();
    void on_actionDownload_triggered();
    void on_actionQuit_triggered();
    void on_actionconnector_triggered();
    void on_actioneraiser_triggered();
    void on_actionrun_creater_triggered();
    void on_actioncreate_component_triggered();

private slots:
    void slotTimer();
    //void addComponents(const Component &component);

private:
    void resizeEvent(QResizeEvent *event);
    databaseManager *dbManager;

private:
    Ui::MainWindow *ui;

    componentsTableWindow *tableWindow;

    QTimer *timer;
    paintScene *scene;
    bool drawing;
};
#endif // MAINWINDOW_H
