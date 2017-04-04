#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <math.h>
#include <string.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:

    int num;  //接受到的数字
    int num1;  //算式的第一个数
    int num2;  //算式的第二个数
    float result; //结果
    int flag1;  //运算符前面的num1是否有数值
    int flag2;  //运算符后面的num2是否有数值

    QString S1; //显示第一个数的字符串
    QString S2; //显示第二个数的字符串
    char fuhao; //运算符号
    int mark; //标记输入的是第一个数字还是第二个数字

    QWidget *widget;
    QGridLayout *gridLayout;

    QLabel *label;
    QLineEdit *lineEdit;

    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton0;
    QPushButton *pushButton11_jia;
    QPushButton *pushButton12_jian;
    QPushButton *pushButton13_cheng;
    QPushButton *pushButton14_chu;
    QPushButton *pushButton15_ce;
    QPushButton *pushButton16_dyu;
public slots:
    void cao();
};

#endif // MAINWINDOW_H
