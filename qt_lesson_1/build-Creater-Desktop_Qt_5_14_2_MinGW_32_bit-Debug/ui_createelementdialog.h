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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateElementDialog
{
public:
    QPushButton *buttonAccept;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *typeLineEdit;
    QLineEdit *soccetLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *powerLineEdit;
    QLineEdit *nominalLineEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *CreateElementDialog)
    {
        if (CreateElementDialog->objectName().isEmpty())
            CreateElementDialog->setObjectName(QString::fromUtf8("CreateElementDialog"));
        CreateElementDialog->resize(400, 300);
        buttonAccept = new QPushButton(CreateElementDialog);
        buttonAccept->setObjectName(QString::fromUtf8("buttonAccept"));
        buttonAccept->setGeometry(QRect(140, 210, 80, 22));
        layoutWidget = new QWidget(CreateElementDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 20, 93, 136));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typeLineEdit = new QLineEdit(layoutWidget);
        typeLineEdit->setObjectName(QString::fromUtf8("typeLineEdit"));

        verticalLayout->addWidget(typeLineEdit);

        soccetLineEdit = new QLineEdit(layoutWidget);
        soccetLineEdit->setObjectName(QString::fromUtf8("soccetLineEdit"));

        verticalLayout->addWidget(soccetLineEdit);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        powerLineEdit = new QLineEdit(layoutWidget);
        powerLineEdit->setObjectName(QString::fromUtf8("powerLineEdit"));

        verticalLayout->addWidget(powerLineEdit);

        nominalLineEdit = new QLineEdit(layoutWidget);
        nominalLineEdit->setObjectName(QString::fromUtf8("nominalLineEdit"));

        verticalLayout->addWidget(nominalLineEdit);

        layoutWidget1 = new QWidget(CreateElementDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 20, 111, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);


        retranslateUi(CreateElementDialog);

        QMetaObject::connectSlotsByName(CreateElementDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateElementDialog)
    {
        CreateElementDialog->setWindowTitle(QCoreApplication::translate("CreateElementDialog", "Dialog", nullptr));
        buttonAccept->setText(QCoreApplication::translate("CreateElementDialog", "Enter", nullptr));
        label->setText(QCoreApplication::translate("CreateElementDialog", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("CreateElementDialog", "Soccet", nullptr));
        label_3->setText(QCoreApplication::translate("CreateElementDialog", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("CreateElementDialog", "Power", nullptr));
        label_5->setText(QCoreApplication::translate("CreateElementDialog", "Nominal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateElementDialog: public Ui_CreateElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEELEMENTDIALOG_H
