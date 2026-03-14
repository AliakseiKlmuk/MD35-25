#include "createelementdialog.h"
#include "ui_createelementdialog.h"

CreateElementDialog::CreateElementDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateElementDialog)
{
    ui->setupUi(this);
 }

CreateElementDialog::~CreateElementDialog()
{
    delete ui;
}

QString CreateElementDialog::getType() const{
    return ui->typeLineEdit->text();}
QString CreateElementDialog::getSubtype() const{
    return ui->subtypeLineEdit->text();}
QString CreateElementDialog::getName() const {
    return ui->nameLineEdit->text(); }
double CreateElementDialog::getPower() const{
    return ui->powerLineEdit->text().toDouble();}
double CreateElementDialog::getNominal() const{
    return ui->nominalLineEdit->text().toDouble();}

void CreateElementDialog::on_buttonAccept_clicked()
{
     QString type = ui->typeLineEdit->text();
     QString subtype = ui->subtypeLineEdit->text();
     QString name = ui->nameLineEdit->text();

     bool ok;
     double power = ui->powerLineEdit->text().toDouble(&ok);
     if(!ok){
         QMessageBox::warning(this, "Error", "Enter correct data power");
         return;
     }

     double nominal = ui->nominalLineEdit->text().toDouble(&ok);
     if(!ok){
         QMessageBox::warning(this, "Error", "Enter correct data nominal");
         return;
     }

        Component newComponent(type, subtype, name, power, nominal);
        emit componentCreated(newComponent);

        //ui->statusLabel->setText("Component added sucesfuly");

       accept();
}
