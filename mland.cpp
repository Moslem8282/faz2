#include "mland.h"
#include "ui_mland.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
mland::mland(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mland)
{
    ui->setupUi(this);
    player->setMedia(QUrl::fromLocalFile("D:/faz2/faz2/lansvoic.mp3"));
    player->setVolume(100);
    player->play();
    ui->lineEdit_land->setReadOnly(true);

    int number_of_land;
    QFile land("D:/faz2/faz2/number_of_land.txt");
    QTextStream in(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_land->setText(QString::number(number_of_land));
    int number_of_wheat = 0;
    QFile wheat("D:/faz2/faz2/number_of_wheat.txt");
    QTextStream stream(&wheat);
    if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream >> number_of_wheat;
        wheat.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_wheat->setText(QString::number(number_of_wheat));

    int number_of_cron = 0;
    QFile cron("D:/faz2/faz2/number_of_cron.txt");
    QTextStream stream1(&cron);
    if(cron.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> number_of_cron;
        cron.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_cron->setText(QString::number(number_of_cron));
    int number_of_cow = 0;
    QFile cow("D:/faz2/faz2/number_of_cow.txt");
    QTextStream stream2(&cow);
    if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_cow;
        cow.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_cow->setText(QString::number(number_of_cow));
    int number_of_sheep = 0;
    QFile sheep("D:/faz2/faz2/number_of_sheep.txt");
    QTextStream stream3(&sheep);
    if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream3 >> number_of_sheep;
        sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_sheep->setText(QString::number(number_of_sheep));
    int number_of_chicken = 0;
    QFile chicken("D:/faz2/faz2/number_of_chicken.txt");
    QTextStream stream4(&chicken);
    if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream4 >> number_of_chicken;
        chicken.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    ui->lineEdit_chicken->setText(QString::number(number_of_chicken));
}





mland::~mland()
{
    delete ui;
}

void mland::on_toolButton_clicked()
{
    player->stop();
}



void mland::on_pushButton_2_clicked()
{
    QFile wheat("D:/faz2/faz2/number_of_wheat.txt");
    QTextStream stream7(&wheat);

    int number_of_wheat = 0;
    if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream7 >> number_of_wheat;
        wheat.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(number_of_wheat>0){
        number_of_wheat--;
        ui->lineEdit_wheat->setText(QString::number(number_of_wheat));
        QString cultivations="wheat";
        QFile cultivation("D:/faz2/faz2/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        QString baskets="wheat";
         QFile basket("D:/faz2/faz2/basket.txt");
         QTextStream stream1(&basket);
         if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
               stream1 << baskets;
               basket.close();
         }else{
               QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
         }
         if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
               stream7 << number_of_wheat;
               wheat.close();
         }else{
               QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
         }
    }
    else{
        QMessageBox::warning(this,"EROR","You don't have enough wheat");
    }
}


void mland::on_pushButton_clicked()
{
    QFile corn("D:/faz2/faz2/number_of_cron.txt");
    QTextStream stream8(&corn);

    int number_of_corn = 0;
    if(corn.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_corn;
        corn.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(number_of_corn>0){
        number_of_corn--;
        ui->lineEdit_cron->setText(QString::number(number_of_corn));
        QString cultivations="corn";
        QFile cultivation("D:/faz2/faz2/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        QString baskets="corn";
        QFile basket("D:/faz2/faz2/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        if(corn.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_corn;
              corn.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough corn");                   // اگر فایل باز نشده باشد ارور میدهد
     }
}


void mland::on_pushButton_6_clicked()
{
    QFile cow("D:/faz2/faz2/number_of_cow.txt");
    QTextStream stream8(&cow);

    int number_of_cow = 0;
    if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_cow;
        cow.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(number_of_cow>0){
        number_of_cow--;
        ui->lineEdit_cow->setText(QString::number(number_of_cow));
        QString cultivations="cow";
        QFile cultivation("D:/faz2/faz2/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        QString baskets="cow";
        QFile basket("D:/faz2/faz2/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_cow;
              cow.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough cow");                   // اگر فایل باز نشده باشد ارور میدهد
     }
}


void mland::on_pushButton_7_clicked()
{
    QFile chicken("D:/faz2/faz2/number_of_chicken.txt");
    QTextStream stream8(&chicken);

    int number_of_chicken= 0;
    if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_chicken;
        chicken.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(number_of_chicken>0){
        number_of_chicken--;
        ui->lineEdit_chicken->setText(QString::number(number_of_chicken));
        QString cultivations="chicken";
        QFile cultivation("D:/faz2/faz2/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        QString baskets="chicken";
        QFile basket("D:/faz2/faz2/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_chicken;
              chicken.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough chicken");                   // اگر فایل باز نشده باشد ارور میدهد
     }
}


void mland::on_pushButton_10_clicked()
{
    QFile sheep("D:/faz2/faz2/number_of_sheep.txt");
    QTextStream stream8(&sheep);

    int number_of_sheep= 0;
    if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_sheep;
        sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(number_of_sheep>0){
        number_of_sheep--;
        ui->lineEdit_sheep->setText(QString::number(number_of_sheep));
        QString cultivations="sheep";
        QFile cultivation("D:/faz2/faz2/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        QString baskets="sheep";
        QFile basket("D:/faz2/faz2/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_sheep;
              sheep.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough sheep");                   // اگر فایل باز نشده باشد ارور میدهد
     }
}


