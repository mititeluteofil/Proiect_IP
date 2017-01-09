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
int index2 ,index1;
void MainWindow::on_comboBox_1_currentIndexChanged(int index)
{
    index1 = index;

}
void MainWindow::on_comboBox_1a_currentIndexChanged(int index)
{
    index2 = index;

}
double normalization(double input){
    switch (index1) {
    case 0:
       return input*0.000001;
       break;
    case 1:
       return input*0.00001;
       break;
    case 2:
       return input*0.0001;
       break;
    case 3:
       return input;
       break;
    case 4:
       return input*0.0003048;
       break;
    case 5:
       return input*0.0000254;
       break;
    case 6:
       return input*1.852;
       break;
    case 7:
      return input*1.609344;
      break;
    case 8:
      return input*0.0009144;
      break;
    default:
        break;
    }

}

void MainWindow::on_pushButton_clicked()
{
    double input , output;
    input=ui->lineEdit_1->text().toDouble();

    input=normalization(input);

    switch (index2) {
    case 0:
       output = input*1000000;

       break;
    case 1:
       output = input*100000;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 2:
       output = input*1000;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 3:
       output = input;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 4:
       output = input*3280.839895013123;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 5:
       output = input*39370.07874015748;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 6:
       output = input*0.5399568034557235;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 7:
       output = input*0.621371192237334;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    case 8:
       output = input*1093.613298337708;
       ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
       break;
    default:
        break;
    }

    ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
}



void MainWindow::on_pushButton_rev_clicked()
{
    int a,b;
    a=index1;
    b=index2;
    ui->comboBox_1a->setCurrentIndex(a);
    ui->comboBox_1->setCurrentIndex(b);
     on_pushButton_clicked();

}
