#include "land.h"
#include "ui_land.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"

land::land(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::land)
{
    ui->setupUi(this);

}

land::~land()
{
    delete ui;
}



void land::on_spinBox_land_valueChanged(int arg1)
{
    int coin;
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stream >> coin;
        file.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "You don't have enough coins");
        return;
    }
//    first men;
    int num;
    num = arg1 * 3;
    if(coin<num){
        QMessageBox::warning(this,"EROR","You don't have enough coins");
        num = 0;
    }
    ui->lineEdit_land->setText(QString::number(num));
}


void land::on_spinBox_worker_valueChanged(int arg1)
{
    int coin;
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stream >> coin;
        file.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "You don't have enough coins");
        return;
    }
    int num;
    num = arg1 * 5;
    if(coin<num){
        QMessageBox::warning(this,"EROR","You don't have enough coins");

        num = 0;
    }
    ui->lineEdit_worker->setText(QString::number(num));
}


void land::on_pushButton_land_clicked()
{
    int number_of_land;
    int coin;
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stream >> coin;
        file.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "You don't have enough coins");
        return;
    }
    int selectedQuantity = ui->spinBox_land->value(); // تعداد انتخاب شده توسط کاربر از spinBox
    int totalPrice = selectedQuantity * 3; // محاسبه مجموعه آن جنس
    QFile land("D:/faz2/faz2/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        return;
    }
    number_of_land += selectedQuantity;
    if (land.open(QIODevice::WriteOnly | QIODevice::Text)) {
        out << number_of_land;
        land.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "فایل باز نشد");
        return;
    }
    if (coin >= totalPrice) {
        coin -= totalPrice; // کم کردن سکه‌ها
        // ذخیره تعداد سکه‌های باقی‌مانده در فایل متنی
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << coin;
            file.close();
        }
     else {
        // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "فایل باز نشد");
        return;
      }
        // تاکید بر نکاتی برای UI
        ui->spinBox_land->setValue(0); // تنظیم مقدار spinBox به 0
        ui->lineEdit_coin->setText(QString::number(coin));
        ui->lineEdit_land->clear();
        }else {
       // اعلام خطا از نظر تعداد سکه
           QMessageBox::warning(this, "ERROR", "You don't have enough coins");

    }

}


void land::on_pushButton_worker_clicked()
{

    int number_of_worker=0;
    int coin;
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stream >> coin;
        file.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "You don't have enough coins");
        return;
    }
    int selectedQuantity = ui->spinBox_worker->value(); // تعداد انتخاب شده توسط کاربر از spinBox
    int totalPrice = selectedQuantity * 5; // محاسبه مجموعه آن جنس
    QFile worker("D:/faz2/faz2/number_of_worker.txt");
    QTextStream in(&worker);
    QTextStream out(&worker);
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        return;
    }
    number_of_worker += selectedQuantity;
    if (worker.open(QIODevice::WriteOnly | QIODevice::Text)) {
        out << number_of_worker;
        worker.close();
    }else {                                                                              // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "فایل باز نشد");
        return;
    }
    if (coin >= totalPrice) {
        coin -= totalPrice; // کم کردن سکه‌ها
        // ذخیره تعداد سکه‌های باقی‌مانده در فایل متنی
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << coin;
            file.close();
        }
     else {
        // اعلام خطا از نظر تعداد سکه
        QMessageBox::warning(this, "ERROR", "فایل باز نشد");
        return;
      }
        // تاکید بر نکاتی برای UI
        ui->spinBox_worker->setValue(0); // تنظیم مقدار spinBox به 0
        ui->lineEdit_coin->setText(QString::number(coin));
        ui->lineEdit_worker->clear();
        }else {
       // اعلام خطا از نظر تعداد سکه
           QMessageBox::warning(this, "ERROR", "You don't have enough coins");

    }

}

