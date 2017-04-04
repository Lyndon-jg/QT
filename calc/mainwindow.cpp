#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //变量初始化

    num1=0;
    num2=0;
    result=0;
    flag1=0;
    flag2=0;
    mark=1;
    S1="";
    S2="";


    widget = new QWidget();
    gridLayout = new QGridLayout(widget);

    label = new QLabel("输入：");

    pushButton1 = new QPushButton("1");     //初始化各个按钮组件
    pushButton2 = new QPushButton("2");
    pushButton3 = new QPushButton("3");
    pushButton4 = new QPushButton("4");
    pushButton5 = new QPushButton("5");
    pushButton6 = new QPushButton("6");
    pushButton7 = new QPushButton("7");
    pushButton8 = new QPushButton("8");
    pushButton9 = new QPushButton("9");
    pushButton0 = new QPushButton("0");
    pushButton11_jia = new QPushButton("+");
    pushButton12_jian = new QPushButton("-");
    pushButton13_cheng = new QPushButton("*");
    pushButton14_chu = new QPushButton("/");
    pushButton15_ce = new QPushButton("ce");
    pushButton16_dyu = new QPushButton("=");

    lineEdit = new QLineEdit();

    gridLayout->addWidget(lineEdit,0,1,1,3);        //计算器布局
    gridLayout->addWidget(label,0,0,1,1);
    gridLayout->addWidget(pushButton1,1,0,1,1);
    gridLayout->addWidget(pushButton2,1,1,1,1);
    gridLayout->addWidget(pushButton3,1,2,1,1);
    gridLayout->addWidget(pushButton11_jia,1,3,1,1);
    gridLayout->addWidget(pushButton4,2,0,1,1);
    gridLayout->addWidget(pushButton5,2,1,1,1);
    gridLayout->addWidget(pushButton6,2,2,1,1);
    gridLayout->addWidget(pushButton12_jian,2,3,1,1);
    gridLayout->addWidget(pushButton7,3,0,1,1);
    gridLayout->addWidget(pushButton8,3,1,1,1);
    gridLayout->addWidget(pushButton9,3,2,1,1);
    gridLayout->addWidget(pushButton13_cheng,3,3,1,1);
    gridLayout->addWidget(pushButton0,4,0,1,1);
    gridLayout->addWidget(pushButton15_ce,4,1,1,1);
    gridLayout->addWidget(pushButton16_dyu,4,2,1,1);
    gridLayout->addWidget(pushButton14_chu,4,3,1,1);

    connect(pushButton1,SIGNAL(clicked()),this,SLOT(cao()));        //将信号和槽连接在一起
    connect(pushButton2,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton3,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton4,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton5,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton6,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton7,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton8,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton9,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton0,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton11_jia,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton12_jian,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton13_cheng,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton14_chu,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton15_ce,SIGNAL(clicked()),this,SLOT(cao()));
    connect(pushButton16_dyu,SIGNAL(clicked()),this,SLOT(cao()));


    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::cao()
{
    //在槽（SLOT)中sender()函数会返回一个指向QObject 的指针来指向信号的发送者
    //然后通过C++ RTTI(Run-Time Type Identification)机制提供的dynamic_cast运算符，
    //在执行的时候检查sender()返回的对象是否是QPushButton类，
    //如果是则将sender()返回的QObject指针转换为QPushButton指针，然后if中的语句就会执行。

    if (QPushButton* btn = dynamic_cast<QPushButton*>(sender()))
    {
          if(btn->text()==pushButton0->text())
          {
            if(mark==1)
            {
                S1+="0";
                lineEdit->setText(S1);
                num = 0;
                num1 = num1 * 10 + num;
                flag1 = 1;
            }
            else
            {
                if(fuhao != '/')        //除数不能为0
                {
                S2+="0";
                lineEdit->setText(S1+QString(fuhao)+S2);
                num = 0;
                num2 = num2 * 10 + num;
                flag2=1;
                }
            }
          }
          if(btn->text()==pushButton1->text())
          {
              if(mark==1)
              {
                  S1+="1";
                  lineEdit->setText(S1);
                  num = 1;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="1";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 1;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton2->text())
          {

              if(mark==1)
              {
                  S1+="2";
                  lineEdit->setText(S1);
                  num = 2;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="2";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 2;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton3->text())
          {

              if(mark==1)
              {
                  S1+="3";
                  lineEdit->setText(S1);
                  num = 3;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="3";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 3;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton4->text())
          {

              if(mark==1)
              {
                  S1+="4";
                  lineEdit->setText(S1);
                  num = 4;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="4";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 4;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton5->text())
          {

              if(mark==1)
              {
                  S1+="5";
                  lineEdit->setText(S1);
                  num = 5;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="5";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 5;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton6->text())
          {

              if(mark==1)
              {
                  S1+="6";
                  lineEdit->setText(S1);
                  num = 6;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="6";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 6;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton7->text())
          {

              if(mark==1)
              {
                  S1+="7";
                  lineEdit->setText(S1);
                  num = 7;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="7";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 7;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton8->text())
          {

              if(mark==1)
              {
                  S1+="8";
                  lineEdit->setText(S1);
                  num = 8;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="8";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 8;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton9->text())
          {

              if(mark==1)
              {
                  S1+="9";
                  lineEdit->setText(S1);
                  num = 9;
                  num1 = num1 * 10 + num;
                  flag1 = 1;
              }
              else
              {
                  S2+="9";
                  lineEdit->setText(S1+QString(fuhao)+S2);
                  num = 9;
                  num2 = num2 * 10 + num;
                  flag2 = 1;
              }
          }
          if(btn->text()==pushButton11_jia->text())
          {
              if(flag1&&(!flag2))
              {
                  fuhao='+';
                  lineEdit->setText(S1+QString(fuhao));
                  mark=2;
              }
          }
          if(btn->text()==pushButton12_jian->text())
          {
              if(flag1&&(!flag2))
              {
                  fuhao='-';
                  lineEdit->setText(S1+QString(fuhao));
                  mark=2;
              }
          }
          if(btn->text()==pushButton13_cheng->text())
          {
              if(flag1&&(!flag2))
              {
                  fuhao='*';
              lineEdit->setText(S1+QString(fuhao));
              mark=2;
              }
          }
          if(btn->text()==pushButton14_chu->text())
          {
              if(flag1&&(!flag2))
              {
                  fuhao='/';
              lineEdit->setText(S1+QString(fuhao));
              mark=2;
              }
          }
          if(btn->text()==pushButton15_ce->text())
          {
              S1="";
              S2="";
              lineEdit->setText("0");
              num1=num2=0;
              flag1=0;
              flag2=0;
              mark=1;
          }
          if(btn->text()==pushButton16_dyu->text())
          {
              if(flag1&&flag2)
              {
              S2+="=";
              switch(fuhao)
              {
              case '*':
                  result = num1 * num2;
                  break;
              case '/':
                  result = (1.0*num1) / (double)num2;
                  break;
              case '+':
                  result = num1 + num2;
                  break;
              case '-':
                  result = num1 - num2;
                  break;
             }
              QString Sresult;
              Sresult=QString::number(result);
              lineEdit->setText(S1+QString(fuhao)+S2+Sresult);
              num1=num2=0;
              mark=1;
              flag1=0;
              flag2=0;
              S1="";
              S2="";
              }
          }
     }
}
