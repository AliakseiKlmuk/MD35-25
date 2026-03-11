/********************************************************************************
** Form generated from reading UI file 'createelementdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEELEMENTDIALOG_H
#define UI_CREATEELEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateElementDialog
{
public:
    QPushButton *buttonAccept;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *typeLineEdit;
    QLineEdit *subtypeLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *powerLineEdit;
    QLineEdit *nominalLineEdit;

    void setupUi(QDialog *CreateElementDialog)
    {
        if (CreateElementDialog->objectName().isEmpty())
            CreateElementDialog->setObjectName(QString::fromUtf8("CreateElementDialog"));
        CreateElementDialog->resize(400, 300);
        buttonAccept = new QPushButton(CreateElementDialog);
        buttonAccept->setObjectName(QString::fromUtf8("buttonAccept"));
        buttonAccept->setGeometry(QRect(240, 200, 80, 22));
        widget = new QWidget(CreateElementDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 20, 93, 136));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typeLineEdit = new QLineEdit(widget);
        typeLineEdit->setObjectName(QString::fromUtf8("typeLineEdit"));

        verticalLayout->addWidget(typeLineEdit);

        subtypeLineEdit = new QLineEdit(widget);
        subtypeLineEdit->setObjectName(QString::fromUtf8("subtypeLineEdit"));

        verticalLayout->addWidget(subtypeLineEdit);

        nameLineEdit = new QLineEdit(widget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        powerLineEdit = new QLineEdit(widget);
        powerLineEdit->setObjectName(QString::fromUtf8("powerLineEdit"));

        verticalLayout->addWidget(powerLineEdit);

        nominalLineEdit = new QLineEdit(widget);
        nominalLineEdit->setObjectName(QString::fromUtf8("nominalLineEdit"));

        verticalLayout->addWidget(nominalLineEdit);


        retranslateUi(CreateElementDialog);

        QMetaObject::connectSlotsByName(CreateElementDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateElementDialog)
    {
        CreateElementDialog->setWindowTitle(QCoreApplication::translate("CreateElementDialog", "Dialog", nullptr));
        buttonAccept->setText(QCoreApplication::translate("CreateElementDialog", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateElementDialog: public Ui_CreateElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEELEMENTDIALOG_H
