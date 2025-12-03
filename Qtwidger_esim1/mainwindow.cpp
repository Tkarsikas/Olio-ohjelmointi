#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btntesti2, &QPushButton::clicked, this, &MainWindow::btnTest2_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btntesti1_clicked()
{
    qDebug()<<"klikkasit testi painiketta";
    ui->labelresult->setText("klikkasit testi painiketta");
}

void MainWindow::btnTest2_clicked()
{
    QString name=ui->textName->text();
    ui->labelresult->setText("Terve "+name);
}

