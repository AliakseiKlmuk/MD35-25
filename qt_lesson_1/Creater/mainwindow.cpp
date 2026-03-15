#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "createwindow.h"
#include "createelementdialog.h"
#include "component.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      dbManager(new databaseManager()),
      ui(new Ui::MainWindow),
      tableWindow(nullptr),
      drawing(false)
{
    ui->setupUi(this);

        scene = new paintScene(this);       // Инициализируем графическую сцену
        ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену

        timer = new QTimer();       // Инициализируем таймер
        connect(timer, &QTimer::timeout, this, &MainWindow::slotTimer);
        timer->start(100);          // Запускаем таймер
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dbManager;
}

void MainWindow::slotTimer() {
    timer->stop();
    scene->setSceneRect(0, 0, ui->graphicsView->width() - 20, ui->graphicsView->height() - 20);
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    timer->start();
    QWidget::resizeEvent(event);
}

void MainWindow::on_actionNew_triggered() {
   ui->statusbar->showMessage("Create new project");
}

void MainWindow::on_actionSave_triggered() {
   ui->statusbar->showMessage("Save project");
}

void MainWindow::on_actionDownload_triggered() {
    ui->statusbar->showMessage("Downloud project");
}

void MainWindow::on_actionQuit_triggered() {
    QApplication::quit();
}

void MainWindow::on_actionconnector_triggered() {
    drawing = ! drawing;
    scene->setDrawing(drawing);

    if (drawing){
         ui->statusbar->showMessage("Draiwing mode activated");
        } else {
         ui->statusbar->showMessage("Draiwing mode deactivated");
    }
}

void MainWindow::on_actioneraiser_triggered() {
   ui->statusbar->showMessage("Clear connection pin");

   if (scene){
       scene->clear();
   }
}

void MainWindow::on_actionrun_creater_triggered() {
    ui->statusbar->showMessage("Run project");

    createWindow *creatorWindow = new createWindow(this);
    creatorWindow->exec();
}

void MainWindow::on_actioncreate_component_triggered() {
    CreateElementDialog *dialog = new CreateElementDialog(this);

    connect(dialog, &CreateElementDialog::componentCreated, this, [this](const Component &component) {
    dbManager->addComponent(component);
    ui->statusbar->showMessage("Component added succesfully!");
    });

    if (componentsTableWindow *tableWindow = findChild<componentsTableWindow *>()) {
                tableWindow->loadComponents(); // Убедитесь, что метод loadComponents существует
            }

    dialog->exec();
    delete dialog;
}

void MainWindow::on_showElement_triggered()
{
    if(!tableWindow){
        tableWindow = new componentsTableWindow(dbManager, this);
        tableWindow->setWindowTitle("Components");
        tableWindow->resize(800, 600);
    }
        tableWindow->show();
        ui->statusbar->showMessage("Choose element");
}

