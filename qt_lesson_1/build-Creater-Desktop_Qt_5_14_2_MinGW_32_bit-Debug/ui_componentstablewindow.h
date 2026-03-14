/********************************************************************************
** Form generated from reading UI file 'componentstablewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTSTABLEWINDOW_H
#define UI_COMPONENTSTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_componentsTableWindow
{
public:

    void setupUi(QDialog *componentsTableWindow)
    {
        if (componentsTableWindow->objectName().isEmpty())
            componentsTableWindow->setObjectName(QString::fromUtf8("componentsTableWindow"));
        componentsTableWindow->resize(800, 600);

        retranslateUi(componentsTableWindow);

        QMetaObject::connectSlotsByName(componentsTableWindow);
    } // setupUi

    void retranslateUi(QDialog *componentsTableWindow)
    {
        componentsTableWindow->setWindowTitle(QCoreApplication::translate("componentsTableWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class componentsTableWindow: public Ui_componentsTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTSTABLEWINDOW_H
