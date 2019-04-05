#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap icon("Icons/baseball.png");
    ui->baseballicon->setPixmap(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_initDB_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Excel File (*.xlsx)"));
}
