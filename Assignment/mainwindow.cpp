#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    ui->label->setStyleSheet("color: rgb(255,0,0)");
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Bold is checked";

    }
}

void MainWindow::on_checkBox_2_clicked()
{
    ui->label->setStyleSheet("color: rgb(0,128,0)");
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Italic is checked";

    }
}

void MainWindow::on_radioButton_clicked()
{
    ui->label->setStyleSheet("color: rgb(255,165,0)");
    QTextStream stream(stdout);
    if(ui->radioButton->isChecked())
    {
        stream<<"Left is checked";

    }
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->label->setStyleSheet("color: rgb(128,0,0)");
    QTextStream stream(stdout);
    if(ui->radioButton_2->isChecked())
    {
        stream<<"Center is checked";

    }
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->label->setStyleSheet("color: rgb(255,20,147)");
    QTextStream stream(stdout);
    if(ui->radioButton_3->isChecked())
    {
        stream<<"Right is checked";

    }
}
