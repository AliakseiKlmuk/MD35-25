/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionAdd_element;
    QAction *actionSave;
    QAction *actionDownload;
    QAction *actionQuit;
    QAction *actionconnector;
    QAction *actioneraiser;
    QAction *actionrun_creater;
    QAction *actioncreate_component;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuGraphics;
    QMenu *menuRun;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionAdd_element = new QAction(MainWindow);
        actionAdd_element->setObjectName(QString::fromUtf8("actionAdd_element"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionDownload = new QAction(MainWindow);
        actionDownload->setObjectName(QString::fromUtf8("actionDownload"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionconnector = new QAction(MainWindow);
        actionconnector->setObjectName(QString::fromUtf8("actionconnector"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Icon/pencil_5481.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionconnector->setIcon(icon);
        actioneraiser = new QAction(MainWindow);
        actioneraiser->setObjectName(QString::fromUtf8("actioneraiser"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Icon/eraser_4884.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioneraiser->setIcon(icon1);
        actionrun_creater = new QAction(MainWindow);
        actionrun_creater->setObjectName(QString::fromUtf8("actionrun_creater"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icon/launch_1324.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionrun_creater->setIcon(icon2);
        actioncreate_component = new QAction(MainWindow);
        actioncreate_component->setObjectName(QString::fromUtf8("actioncreate_component"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 1, 791, 511));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuGraphics = new QMenu(menubar);
        menuGraphics->setObjectName(QString::fromUtf8("menuGraphics"));
        menuRun = new QMenu(menubar);
        menuRun->setObjectName(QString::fromUtf8("menuRun"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuGraphics->menuAction());
        menubar->addAction(menuRun->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionAdd_element);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionDownload);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuFile->addSeparator();
        menuFile->addAction(actioncreate_component);
        menuGraphics->addAction(actionconnector);
        menuGraphics->addAction(actioneraiser);
        menuRun->addAction(actionrun_creater);
        toolBar->addAction(actionconnector);
        toolBar->addAction(actioneraiser);
        toolBar->addAction(actionrun_creater);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionAdd_element->setText(QCoreApplication::translate("MainWindow", "Add element", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionDownload->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionconnector->setText(QCoreApplication::translate("MainWindow", "Connector", nullptr));
        actioneraiser->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
        actionrun_creater->setText(QCoreApplication::translate("MainWindow", "run creater", nullptr));
        actioncreate_component->setText(QCoreApplication::translate("MainWindow", "create component", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuGraphics->setTitle(QCoreApplication::translate("MainWindow", "Graphics", nullptr));
        menuRun->setTitle(QCoreApplication::translate("MainWindow", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
