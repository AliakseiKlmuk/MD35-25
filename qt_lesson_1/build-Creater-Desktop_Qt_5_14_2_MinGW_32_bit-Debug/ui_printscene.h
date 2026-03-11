/********************************************************************************
** Form generated from reading UI file 'printscene.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTSCENE_H
#define UI_PRINTSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_printScene
{
public:

    void setupUi(QWidget *printScene)
    {
        if (printScene->objectName().isEmpty())
            printScene->setObjectName(QString::fromUtf8("printScene"));
        printScene->resize(400, 300);

        retranslateUi(printScene);

        QMetaObject::connectSlotsByName(printScene);
    } // setupUi

    void retranslateUi(QWidget *printScene)
    {
        printScene->setWindowTitle(QCoreApplication::translate("printScene", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printScene: public Ui_printScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTSCENE_H
