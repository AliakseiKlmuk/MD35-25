#include "componentstablewindow.h"
#include "ui_componentstablewindow.h"

componentsTableWindow::componentsTableWindow(databaseManager *dbManagerInstance, QWidget *parent) :
    QWidget(parent),
    dbManager(dbManagerInstance)
{
    this->setStyleSheet("...");
    this->setStyleSheet("QTableWidget { background-color: white; alternate-background-color: #f9f9f9; border: 1px solid #CCCCCC; }"
                    "QHeaderView::section { background-color: #e0e0e0; font-weight: bold; }"
                    "QTableWidget::item { padding: 5px; }");

    QVBoxLayout *layout = new QVBoxLayout(this);

    tableWidget = new QTableWidget(this);
    tableWidget->setColumnCount(5);
    tableWidget->setHorizontalHeaderLabels({"Type", "Subtype", "Name", "Power", "Nominal"});
    layout->addWidget(tableWidget);

    QPushButton *closeButton = new QPushButton("Close", this);
    connect(closeButton, &QPushButton::clicked, this, &QWidget::close);
    layout->addWidget(closeButton);

    QPushButton *deleteButton = new QPushButton("Delete selected", this);
    connect(deleteButton, &QPushButton::clicked, this, &componentsTableWindow::deleteSelectComponent);
    layout->addWidget(deleteButton);

    setLayout(layout);
    resize(800, 600);

    loadComponents();
}

void componentsTableWindow::loadComponents()
{
    tableWidget->setRowCount(0);

    QList<Component> components = dbManager->getAllComponents();

    for (const Component &component : components){
        int row = tableWidget->rowCount();
        tableWidget->insertRow(row);

        tableWidget->setItem(row, 0, new QTableWidgetItem(component.getType()));
        tableWidget->setItem(row, 1, new QTableWidgetItem(component.getSubtype()));
        tableWidget->setItem(row, 2, new QTableWidgetItem(component.getName()));
        tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(component.getPower())));
        tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(component.getNominal())));
    }
}

void componentsTableWindow::deleteSelectComponent(){
    int currentRow = tableWidget->currentRow();

    if (currentRow >= 0){
        int componentId = tableWidget->item(currentRow, 0)->data(Qt::UserRole).toInt();
        dbManager->deleteComponent(componentId);
        loadComponents();
    } else {
        QMessageBox::warning(this, "Warning", "No component selected");
    }
}


