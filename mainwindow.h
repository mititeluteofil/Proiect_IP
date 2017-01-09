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
    void on_pushButton_clicked();
    void on_comboBox_1_currentIndexChanged(int index);
    void on_comboBox_1a_currentIndexChanged(int index);
    void on_pushButton_rev_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
