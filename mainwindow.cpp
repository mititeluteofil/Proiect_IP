#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iomanip>

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

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{


}


void MainWindow::on_comboBox_editTextChanged(const QString &arg1)
{

}

void MainWindow::on_pushButton_clicked()
{
    double input , output;
    input=ui->lineEdit_1->text().toDouble();
    output=input*39.37007874015748;
     std::setprecision(12);
    double value = 312345678952.1415926535897931;
    ui->lineEdit_1a->setText(QString::number( value, 'f', 10 ));
}
