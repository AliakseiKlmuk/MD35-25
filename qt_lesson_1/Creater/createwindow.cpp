#include "createwindow.h"

#include <QVBoxLayout>
#include <QLabel>

createWindow::createWindow(QWidget *parent) : QDialog(parent){
setWindowTitle("Create window");
resize(800, 600);
QVBoxLayout *layout = new QVBoxLayout(this);
QLabel *label = new QLabel("Hello from the Creator Window!", this);
layout->addWidget(label);
setLayout(layout);
}
