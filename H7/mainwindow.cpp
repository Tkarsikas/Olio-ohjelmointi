#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::growCounter);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::resetCounter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::growCounter()
{
    counter+=1;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("painiketta painettu "+ s +" kertaa");
}

void MainWindow::resetCounter()
{
    counter=0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("painiketta painettu "+ s +" kertaa");
}

