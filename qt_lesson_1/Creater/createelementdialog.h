#ifndef CREATEELEMENTDIALOG_H
#define CREATEELEMENTDIALOG_H

#include <QDialog>
#include <QLine>
#include <QMessageBox>
#include <QLabel>

#include "component.h"

namespace Ui {
class CreateElementDialog;
}

class CreateElementDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateElementDialog(QWidget *parent = nullptr);
    ~CreateElementDialog();

public:
    QString getType() const;
    QString getSubtype() const;
    QString getName() const;
    double getPower() const;
    double getNominal() const;

private slots:
    void on_buttonAccept_clicked();

private:
    Ui::CreateElementDialog *ui;

signals:
    void componentCreated(const Component& component);
};

#endif // CREATEELEMENTDIALOG_H
