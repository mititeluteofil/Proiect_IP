#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_comboBox_1_currentIndexChanged(int index);
    void on_comboBox_1a_currentIndexChanged(int index);
    void on_comboBox_2_currentIndexChanged(int index);
    void on_comboBox_2a_currentIndexChanged(int index);
    void on_comboBox_3_currentIndexChanged(int index);
    void on_comboBox_3a_currentIndexChanged(int index);
    void on_comboBox_4_currentIndexChanged(int index);
    void on_comboBox_4a_currentIndexChanged(int index);
    void on_comboBox_5_currentIndexChanged(int index);
    void on_comboBox_5a_currentIndexChanged(int index);
    void on_comboBox_6_currentIndexChanged(int index);
    void on_comboBox_6a_currentIndexChanged(int index);
    void on_comboBox_7_currentIndexChanged(int index);
    void on_comboBox_7a_currentIndexChanged(int index);
    void on_comboBox_8_currentIndexChanged(int index);
    void on_comboBox_8a_currentIndexChanged(int index);
    void on_comboBox_9_currentIndexChanged(int index);
    void on_comboBox_9a_currentIndexChanged(int index);
    void on_comboBox_10_currentIndexChanged(int index);
    void on_comboBox_10a_currentIndexChanged(int index);
    void on_comboBox_11_currentIndexChanged(int index);
    void on_comboBox_11a_currentIndexChanged(int index);

    void on_pushButton_rev_clicked();
    void on_pushButton_rev2_clicked();
    void on_pushButton_rev3_clicked();
    void on_pushButton_rev4_clicked();
//    void on_pushButton_rev5_clicked();
//    void on_pushButton_rev6_clicked();
//    void on_pushButton_rev7_clicked();
//    void on_pushButton_rev8_clicked();
//    void on_pushButton_rev9_clicked();
//    void on_pushButton_rev10_clicked();
//    void on_pushButton_rev11_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
//    void on_pushButton_5_clicked();
//    void on_pushButton_6_clicked();
//    void on_pushButton_7_clicked();
//    void on_pushButton_8_clicked();
//    void on_pushButton_9_clicked();
//    void on_pushButton_10_clicked();
//    void on_pushButton_11_clicked();



    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
