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


int indexA[20] ,indexb[20] ;
void MainWindow::on_comboBox_1_currentIndexChanged(int index)
{
    indexA[1] = index;

}
void MainWindow::on_comboBox_1a_currentIndexChanged(int index)
{
    indexb[1] = index;
    on_pushButton_clicked();
}
void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    indexA[2] = index;

}
void MainWindow::on_comboBox_2a_currentIndexChanged(int index)
{
    indexb[2] = index;
    on_pushButton_2_clicked();
}
void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    indexA[3] = index;

}
void MainWindow::on_comboBox_3a_currentIndexChanged(int index)
{
    indexb[3] = index;
    on_pushButton_3_clicked();
}
void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    indexA[4] = index;

}
void MainWindow::on_comboBox_4a_currentIndexChanged(int index)
{
    indexb[4] = index;

}
void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    indexA[5] = index;

}
void MainWindow::on_comboBox_5a_currentIndexChanged(int index)
{
    indexb[5] = index;

}
void MainWindow::on_comboBox_6_currentIndexChanged(int index)
{
    indexA[6] = index;

}
void MainWindow::on_comboBox_6a_currentIndexChanged(int index)
{
    indexb[6] = index;
}
void MainWindow::on_comboBox_7_currentIndexChanged(int index)
{
    indexA[7] = index;
}
void MainWindow::on_comboBox_7a_currentIndexChanged(int index)
{
    indexb[7] = index;

}
void MainWindow::on_comboBox_8_currentIndexChanged(int index)
{
    indexA[8] = index;

}
void MainWindow::on_comboBox_8a_currentIndexChanged(int index)
{
    indexb[8] = index;

}
void MainWindow::on_comboBox_9_currentIndexChanged(int index)
{
    indexA[9] = index;

}
void MainWindow::on_comboBox_9a_currentIndexChanged(int index)
{
    indexb[9] = index;

}
void MainWindow::on_comboBox_10_currentIndexChanged(int index)
{
    indexA[10] = index;

}
void MainWindow::on_comboBox_10a_currentIndexChanged(int index)
{
    indexb[10] = index;

}
void MainWindow::on_comboBox_11_currentIndexChanged(int index)
{
    indexA[11] = index;

}
void MainWindow::on_comboBox_11a_currentIndexChanged(int index)
{
    indexb[11] = index;

}

//Lungime
double normalizationLength(double input){
    switch (indexA[1]) {
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
    input=normalizationLength(input);

    switch (indexb[1]) {
    case 0:
       output = input*1000000;
       break;
    case 1:
       output = input*100000;      
       break;
    case 2:
       output = input*1000;      
       break;
    case 3:
       output = input;       
       break;
    case 4:
       output = input*3280.839895013123;      
       break;
    case 5:
       output = input*39370.07874015748;      
       break;
    case 6:
       output = input*0.5399568034557235;      
       break;
    case 7:
       output = input*0.621371192237334;
       break;
    case 8:
       output = input*1093.613298337708;   
       break;
    default:
        break;
    }

    ui->lineEdit_1a->setText(QString::number( output, 'g', 15 ));
}
void MainWindow::on_pushButton_rev_clicked()
{
    int a,b;
    a=indexA[1];
    b=indexb[1];
    ui->comboBox_1a->setCurrentIndex(a);
    ui->comboBox_1->setCurrentIndex(b);
     on_pushButton_clicked();

}

//Arie
double normalizationArea(double input){
    switch (indexA[2]) {
    case 0:
       return input*100;
       break;
    case 1:
       return input*10000;
       break;
    case 2:
       return input*4046.856119;
       break;
    case 3:
       return input*0.0006452;
       break;
    case 4:
       return input*0.0929;
       break;
    case 5:
       return input*0.836127816;
       break;
    case 6:
       return input*0.000001;
       break;
    case 7:
      return input*0.0001;
      break;
    case 8:
      return input;
      break;
    case 9:
        return input*1000000;
        break;
    default:
        break;
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    double input , output;
    input=ui->lineEdit_2->text().toDouble();
    input=normalizationArea(input);

    switch (indexb[2]) {
    case 0:
       output = input*0.01;

       break;
    case 1:
       output = input*0.0001;

       break;
    case 2:
       output = input*0.00024710539999309525;
              break;
    case 3:
       output = input*1549.9070055796653;

       break;
    case 4:
       output = input*10.764262648008613;

       break;
    case 5:
       output = input*1.195989394042597;

       break;
    case 6:
       output = input*1000000;

       break;
    case 7:
       output = input*10000;

       break;
    case 8:
       output = input;
       break;
    case 9:
       output = input*0.000001;
       break;

    default:
        break;
    }

    ui->lineEdit_2a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev2_clicked()
{
    int a,b;
    a=indexA[2];
    b=indexb[2];
    ui->comboBox_2a->setCurrentIndex(a);
    ui->comboBox_2->setCurrentIndex(b);
     on_pushButton_2_clicked();

}

//Volum
double normalizationVolume(double input){
    switch (indexA[3]) {
    case 0:
       return input*0.001;
       break;
    case 1:
       return input*0.01;
       break;
    case 2:
       return input*0.1;
       break;
    case 3:
       return input;
       break;
    case 4:
       return input*0.000001;
       break;
    case 5:
       return input*0.001;
       break;
    case 6:
       return input;
       break;
    case 7:
      return input*1000;
      break;
    case 8:
      return input*0.016387064;
      break;
    case 9:
        return input*28.316846592;
        break;
    case 10:
        return input*764.55485798;
        break;
    case 11:
        return input*4.54609;
        break;
    case 12:
        return input*3.78541;
        break;
    default:
        break;
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    double input , output;
    input=ui->lineEdit_3->text().toDouble();
    input=normalizationVolume(input);

    switch (indexb[3]) {
    case 0:
       output = input*1000;

       break;
    case 1:
       output = input*100;

       break;
    case 2:
       output = input*10;
              break;
    case 3:
       output = input;

       break;
    case 4:
       output = input*1000000;

       break;
    case 5:
       output = input*1000;

       break;
    case 6:
       output = input;

       break;
    case 7:
       output = input*0.001;

       break;
    case 8:
       output = input*61.023744095;
       break;
    case 9:
        output = input*0.0353146667;
        break;
    case 10:
        output = input*0.0013079506;
        break;
    case 11:
        output = input*0.2199692483;
        break;
    case 12:
        output = input*0.2641721769;
        break;
    default:
        break;
    }

    ui->lineEdit_3a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev3_clicked()
{
    int a,b;
    a=indexA[3];
    b=indexb[3];
    ui->comboBox_3a->setCurrentIndex(a);
    ui->comboBox_3->setCurrentIndex(b);
     on_pushButton_3_clicked();

}

//Time
double normalizationTime(double input){
    switch (indexA[4]) {
    case 0:
       return input*0.001;
       break;
    case 1:
       return input*0.01;
       break;
    case 2:
       return input*0.1;
       break;
    case 3:
       return input;
       break;
    case 4:
       return input*60;
       break;
    case 5:
       return input*3600;
       break;
    case 6:
       return input*86400;
       break;
    case 7:
      return input*604800;
      break;
    case 8:
      return input*2628000;
      break;
    case 9:
        return input*31536000;
        break;
    case 10:
        return input*3153600000;
        break;
    case 11:
        return input*31536000000;
        break;

    default:
        break;
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    double input , output;
    input=ui->lineEdit_4->text().toDouble();
    input=normalizationTime(input);

    switch (indexb[4]) {
    case 0:
       output = input*1000;
       break;
    case 1:
       output = input*100;
       break;
    case 2:
       output = input*10;
       break;
    case 3:
       output = input;
       break;
    case 4:
       output = input*0.01666666666666666666666666666667;
       break;
    case 5:
       output = input*0.0002777777777777778;
       break;
    case 6:
       output = input*0.000011574074074074073;
       break;
    case 7:
       output = input*0.0000016534391534391535;
       break;
    case 8:
       output = input*3.805175038051750380517503805175e-7;
       break;
    case 9:
        output = input*3.1709791983764586504312531709792e-8;
        break;
    case 10:
        output = input*3.1709791983764586504312531709792e-10;
    case 11:
        output = input*3.1709791983764586504312531709792e-11;
        break;
    default:
        break;
    }

    ui->lineEdit_4a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev4_clicked()
{
    int a,b;
    a=indexA[4];
    b=indexb[4];
    ui->comboBox_4a->setCurrentIndex(a);
    ui->comboBox_4->setCurrentIndex(b);
     on_pushButton_4_clicked();

}
//Speed
double normalizationSpeed(double input){
    switch (indexA[5]) {
    case 0:
       return input*0.2777777778;
       break;
    case 1:
       return input*16.666666667;
       break;
    case 2:
       return input*1000;
       break;
    case 3:
       return input*0.0002777778;
       break;
    case 4:
       return input*0.0166666667;
       break;
    case 5:
       return input;
       break;
    case 6:
       return input*0.0001666667;
       break;
    case 7:
       return input*0.01;
       break;
    case 8:
      return input*0.0000846667;
      break;
    case 9:
      return input*0.00508;
      break;
    case 10:
        return input*0.3048;
        break;
    case 11:
        return input*0.0254;
        break;
    case 12:
        return input*1609.344;
        break;
    case 13:
       return input*26.8224;
       break;
    case 14:
       return input*0.5144444444;
       break;
    case 15:
       return input*0.000254;
       break;
    case 16:
       return input*0.01524;
       break;
    case 17:
       return input*0.9144;
       break;
    case 18:
       return input*29765;
       break;
    case 19:
       return input*299792458;
       break;
    default:
        break;
    }

}

void MainWindow::on_pushButton_5_clicked()
{
    double input , output;
    input=ui->lineEdit_5->text().toDouble();
    input=normalizationSpeed(input);

    switch (indexb[5]) {
    case 0:
       output = input*3.6;
       break;
    case 1:
       output = input*0.06;
       break;
    case 2:
       output = input*0.001;
       break;
    case 3:
       output = input*3600;
       break;
    case 4:
       output = input*60;
       break;
    case 5:
       output = input;
       break;
    case 6:
       output = input*6000;
       break;
    case 7:
      output = input*1000;
       break;
    case 8:
      output = input*11811.023622;
       break;
    case 9:
       output = input*196.8503937;
        break;
    case 10:
        output = input*3.280839895;
    case 11:
        output = input*39.37007874015748031496062992126;
        break;
    case 12:
       output = input*0.0006213712;
       break;
    case 13:
       output = input*0.0372822715;
       break;
    case 14:
       output = input*1.9438444924;
       break;
    case 15:
       output = input*3937.007874;
       break;
    case 16:
       output = input*65.6167979;
       break;
    case 17:
      output = input*1.0936132983;
      break;
    case 18:
      output = input*0.0000335965;
      break;
    case 19:
      output = input*3.335640951E-9;
      break;
    default:
        break;
    }

    ui->lineEdit_5a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev5_clicked()
{
    int a,b;
    a=indexA[5];
    b=indexb[5];
    ui->comboBox_5a->setCurrentIndex(a);
    ui->comboBox_5->setCurrentIndex(b);
     on_pushButton_5_clicked();

}

//Temperature
double normalizationTemp(double input){
    switch (indexA[6]) {
    case 0:
       return input;
       break;
    case 1:
       return ((input-32)*5)/9 ;
       break;
    case 2:
       return input-273.15;
       break;
    case 3:
       return (((input-491.67)*5)/9);
       break;
    case 4:
       return ((input*100)/33);
       break;
    case 5:
       return ((input*5)/4);
       break;
  default:
        break;
    }

}

void MainWindow::on_pushButton_6_clicked()
{
    double input , output;
    input=ui->lineEdit_6->text().toDouble();
    input=normalizationTemp(input);

    switch (indexb[6]) {
    case 0:
       output = ((input)*9)/5+32;
       break;
    case 1:
       output = input+273.15;
       break;
    case 2:
       output = ((input+273.15)*9)/5;
       break;
    case 3:
       output = ((input*100)/33);
       break;
    case 4:
       output = ((input*4)/5);
       break;
    case 5:
       output = ((input*33)/100);
       break;
    default:
        break;
    }

    ui->lineEdit_6a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev6_clicked()
{
    int a,b;
    a=indexA[6];
    b=indexb[6];
    ui->comboBox_6a->setCurrentIndex(a);
    ui->comboBox_6->setCurrentIndex(b);
     on_pushButton_6_clicked();
}


//Mass
double normalizationMass(double input){
    switch (indexA[7]) {
    case 0:
       output = input*0.000001;
       break;
    case 1:
       output = input*0.001;
       break;
    case 2:
       output = input;
       break;
    case 3:
       output = input*1000;
       break;
    case 4:
       output = input*0.45359237;
       break;
    case 5:
       output = input*0.3732417216;
       break;
    case 6:
       output = input*0.028349523125;
       break;
    case 7:
       output = input*0.0311034768;
       break;
    case 8:
      output = input*14.593903
       break;
  default:
        break;
    }

}

void MainWindow::on_pushButton_7_clicked()
{
    double input , output;
    input=ui->lineEdit_7->text().toDouble();
    input=normalizationMass(input);

    switch (indexb[7]) {
    case 0:
       output = input*1000;
       break;
    case 1:
       output = input;
       break;
    case 2:
       output = input*2.2046226218487758072297380134503;
       break;
    case 3:
       output = input*2.6792288807189983768416955024569;
       break;
    case 4:
       output = input*1000000;
       break;
    case 5:
       output = input*35.273961949580412915675808215204;
       break;
    case 6:
       output = input*32.150746568627980522100346029483;
       break;
    case 7:
      output = input*0.06852176556196104633558274301261;
       break;
    case 8:
      output = input**0.001;
       break;
    default:
        break;
    }

    ui->lineEdit_7a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev7_clicked()
{
    int a,b;
    a=indexA[7];
    b=indexb[7];
    ui->comboBox_7a->setCurrentIndex(a);
    ui->comboBox_7->setCurrentIndex(b);
     on_pushButton_7_clicked();
}
//Energy
double normalizationEnergy(double input){
    switch (indexA[8]) {
    case 0:
       return input*4.1868;
       break;
    case 1:
       return input*0.0000001;
       break;
    case 2:
       return input*1.3558179483314004;
       break;
    case 3:
       return input*0.1129848290276167;
       break;
    case 4:
       return input;
       break;
    case 5:
       return input*4186.8;
       break;
    case 6:
       return input*0.001;
       break;
    case 7:
      return input*3600000;
      break;
    case 8:
      return input*1055.05585262;
      break;
    case 9:
        return input*1055055852620000000;
        break;
    case 10:
        return input*29307600000;
        break;
    case 11:
        return input*29288000000;
        break;
    case 12:
       return input*29307600000;
       break;
    case 13:
       return input*41868000000;
       break;
    case 14:
       return input*4184000000;
       break;
    case 15:
       return input*4186800;
       break;
    case 16:
       return input*3600;
       break;
    case 17:
      return input;
      break;


    default:
        break;
    }

}

void MainWindow::on_pushButton_8_clicked()
{
    double input , output;
    input=ui->lineEdit_8->text().toDouble();
    input=normalizationEnergy(input);

    switch (indexb[8]) {
    case 0:
       output = input*0.23884589662749593961975733256903;
       break;
    case 1:
       output = input*10000000;
       break;
    case 2:
       output = input*0.73756214927726536387808206497105;
       break;
    case 3:
       output = input*8.8507457913271843665369847796527;
       break;
    case 4:
       output = input;
       break;
    case 5:
       output = input*2.3884589662749593961975733256903e-4;
       break;
    case 6:
       output = input*1000;
       break;
    case 7:
      output = input*2.7777777777777777777777777777778e-7;
       break;
    case 8:
      output = input*9.4781712031331720001278504447561e-4;
       break;
    case 9:
       output = input*9.4781712031331720001278504447561e-19;
        break;
    case 10:
        output = input*3.4120842375356562802822476081289e-11;
    case 11:
        output = input*3.4143676591095329145042338158973e-11;
        break;
    case 12:
       output = input*3.4120842375356562802822476081289e-11;
       break;
    case 13:
       output = input*2.3884589662749593961975733256903e-11;
       break;
    case 14:
       output = input*2.3900573613766730401529636711281e-10;
       break;
    case 15:
       output = input*2.3884589662749593961975733256903e-7;
       break;
    case 16:
       output = input*2.7777777777777777777777777777778e-4;
       break;
    case 17:
      output = input;
      break;
    default:
        break;
    }

    ui->lineEdit_8a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev8_clicked()
{
    int a,b;
    a=indexA[8];
    b=indexb[8];
    ui->comboBox_8a->setCurrentIndex(a);
    ui->comboBox_8->setCurrentIndex(b);
     on_pushButton_8_clicked();

}

//Pression
double normalizationPression(double input){
    switch (indexA[9]) {
    case 0:
       return input*98066.5;
       break;
    case 1:
       return input*101325;
       break;
    case 2:
       return input*100000;
       break;
    case 3:
       return input*6894.75729317;
       break;
    case 4:
       return input;
       break;
    case 5:
       return input*1000;
       break;
    case 6:
       return input*1000000;
       break;
    case 7:
      return input*98066.5;
      break;
    case 8:
      return input*3386.38815789;
      break;
    case 9:
        return input*248.84;
        break;
    case 10:
        return input*47.88;
        break;
    case 11:
        return input*6894.75729317;
        break;
    case 12:
       return input*100;
       break;
    case 13:
       return input*98.0638;
       break;
    case 14:
       return input*9.80638;
       break;
    case 15:
       return input* 133.3224;
       break;
    case 16:
       return input* 1333.224;
       break;
    case 17:
      return input* 1000000;
      break;
    case 18:
      return input * 10000;
       break;
    case 19:
       return input;
        break;
    case 20:
       return input *133.32236842;
       break;
    default:
        break;
    }

}

void MainWindow::on_pushButton_9_clicked()
{
    double input , output;
    input=ui->lineEdit_9->text().toDouble();
    input=normalizationPression(input);

    switch (indexb[9]) {
    case 0:
       output = input*1000;
       break;
    case 1:
       output = input*100;
       break;
    case 2:
       output = input
       break;
    case 3:
       output = input;
       break;
    case 4:
       output = input
       break;
    case 5:
       output = input
       break;
    case 6:
       output = input
       break;
    case 7:
      output = input
       break;
    case 8:
      output = input
       break;
    case 9:
       output = input
        break;
    case 10:
        output = input
    case 11:
        output = input
        break;
    case 12:
       output = input;
       break;
    case 13:
       output = input;
       break;
    case 14:
       output = input*;
       break;
    case 15:
       output = input*;
       break;
    case 16:
       output = input*;
       break;
    case 17:
      output = input*;
      break;
    case 18:
      output = input
       break;
    case 19:
       output = input
        break;
    case 20:
       output = input;
       break;
    case 21:
       output = input;
       break;
    case 22:
       output = input
       break;
    case 23:
       output = input;
       break;
    case 24:
       output = input
       break;
    case 25:
       output = input
       break;
    case 26:
       output = input
       break;
    default:
        break;
    }

    ui->lineEdit_9a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev9_clicked()
{
    int a,b;
    a=indexA[9];
    b=indexb[9];
    ui->comboBox_9a->setCurrentIndex(a);
    ui->comboBox_9->setCurrentIndex(b);
     on_pushButton_9_clicked();

}

//Density
double normalizationDensity(double input){
    switch (indexA[10]) {
    case 0:
       return input*0.001;
       break;
    case 1:
       return input*1000;
       break;
    case 2:
       return input;
       break;
    case 3:
       return input*1000;
       break;
    case 4:
       return input*1000000;
       break;
    case 5:
       return input; //kg/m3
       break;
    case 6:
       return input*1000;
       break;
    case 7:
       return input*27679.89858;
       break;
    case 8:
       return input*16.017940092904052;
       break;
    case 9:
       return input*99.77637266;
       break;
    case 10:
       return input*119.82642736;
       break;
    case 11:
       return input;
       break;
    case 12:
       return input*0.000001;
       break;
    case 13:
       return input*0.001;
       break;
    case 14:
       return input*6.236023291;
       break;
    case 15:
       return input*7.489150094;
       break;
    case 16:
       return input*1729.994044;
       break;
    case 17:
       return input*1.001153961;
       break;
    case 18:
       return input*1000;
       break;
  default:
        break;
    }

}

void MainWindow::on_pushButton_10_clicked()
{
    double input , output;
    input=ui->lineEdit_10->text().toDouble();
    input=normalizationDensity(input);

    switch (indexb[10]) {
    case 0:
       output =  input*1000;
       break;
    case 1:
       output =  input*0.001;
       break;
    case 2:
       output =  input;
       break;
    case 3:
       output =  input*0.001;
       break;
    case 4:
       output =  input*0.000001;
       break;
    case 5:
       output =  input; //kg/m3
       break;
    case 6:
       output =  input*0.001;
       break;
    case 7:
       output =  input*3.6127300001111492511834196178619e-5;
       break;
    case 8:
       output =  input*0.0624300000000000021001452;
       break;
    case 9:
       output =  input*0.01002241285527206296416989829664;
       break;
    case 10:
       output =  input*0.00834540444901736407740630480565;
       break;
    case 11:
       output =  input;
       break;
    case 12:
       output =  input*1000000;
       break;
    case 13:
       output =  input*1000;
       break;
    case 14:
       output =  input*0.16035860569078172803123355108072;
       break;
    case 15:
       output =  input*0.1335264999964627494885937053033;
       break;
    case 16:
       output =  input*5.7803667213087815694237153107794e-4;
       break;
    case 17:
       output =  input*0.99884736909111624640518202973978;
       break;
    case 18:
       output =  input*0.001;
       break;
  default:
        break;
    }

    ui->lineEdit_10a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev10_clicked()
{
    int a,b;
    a=indexA[10];
    b=indexb[10];
    ui->comboBox_10a->setCurrentIndex(a);
    ui->comboBox_10->setCurrentIndex(b);
     on_pushButton_10_clicked();
}

//Consumption
double normalizationFuelConsumption(double input){
    switch (indexA[11]) {
    case 0:
       return input*0.001;
       break;
    case 1:
       return input*0.01;
       break;
    case 2:
       return input*0.1;
       break;
    case 3:
       return input;
       break;
    case 4:
       return input*;
       break;
  default:
        break;
    }

}

void MainWindow::on_pushButton_11_clicked()
{
    double input , output;
    input=ui->lineEdit_11->text().toDouble();
    input=normalizationFuelConsumption(input);

    switch (indexb[11]) {
    case 0:
       output = input*1000;
       break;
    case 1:
       output = input*100;
       break;
    case 2:
       output = input
       break;
    case 3:
       output = input;
       break;
    case 4:
       output = input;
       break;

    default:
        break;
    }

    ui->lineEdit_11a->setText(QString::number( output, 'g', 15 ));

}
void MainWindow::on_pushButton_rev11_clicked()
{
    int a,b;
    a=indexA[11];
    b=indexb[11];
    ui->comboBox_11a->setCurrentIndex(a);
    ui->comboBox_11->setCurrentIndex(b);
     on_pushButton_11_clicked();
}




