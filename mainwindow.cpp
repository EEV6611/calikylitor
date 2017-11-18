#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
int n=1;
int a;
int b;
int c;
int oper=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_q1_clicked()
{
    ui->lineEdit->insert("1");
}

void MainWindow::on_q2_clicked()
{
    ui->lineEdit->insert("2");
}

void MainWindow::on_q3_clicked()
{
    ui->lineEdit->insert("3");
}

void MainWindow::on_q4_clicked()
{
    ui->lineEdit->insert("4");
}

void MainWindow::on_q5_clicked()
{
    ui->lineEdit->insert("5");
}

void MainWindow::on_q6_clicked()
{
    ui->lineEdit->insert("6");
}

void MainWindow::on_q7_clicked()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_q8_clicked()
{
    ui->lineEdit->insert("8");
}

void MainWindow::on_q9_clicked()
{
    ui->lineEdit->insert("9");
}

void MainWindow::on_q0_clicked()
{
    ui->lineEdit->insert("0");
}

void MainWindow::on_z_clicked()
{
    ui->lineEdit->insert(".");
}

void MainWindow::on_pl_clicked()
{
    a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    oper=1;
}


void MainWindow::on_mi_clicked()
{
    a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    oper=2;
}

void MainWindow::on_x_clicked()
{
    a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    oper=3;
}

void MainWindow::on_del_clicked()
{
    a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    oper=4;
}

void MainWindow::on_ravno_clicked()
{
    b=ui->lineEdit->text().toDouble();
    switch (oper)
    {
    case 1: c=a+b;ui->lineEdit->setText(QString::number(c));break;
    case 2: c=a-b;ui->lineEdit->setText(QString::number(c));break;
    case 3: c=a*b;ui->lineEdit->setText(QString::number(c));break;
    case 4: c=a/b;ui->lineEdit->setText(QString::number(c));break;

    }
}
