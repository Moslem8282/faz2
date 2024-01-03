#include "cow.h"
#include "ui_cow.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"

cow::cow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cow)
{
    ui->setupUi(this);
    int number_of_cow;
    QFile cow("D:/faz2/faz2/number_of_cow.txt");
    QTextStream in(&cow);
    if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_cow;
        cow.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_cow->setText(QString::number(number_of_cow));
}

cow::~cow()
{
    delete ui;
}