#include "page2.h"
#include "ui_page2.h"
#include <QTime>
#include <QTimer>
#include "time.h"
#include "QTimer"
#include "QTime"
#include "QLineEdit"
#include "shop.h"
#include "chicken.h"
#include "sheep.h"
#include "cow.h"
#include "land.h"
#include "mland.h"
#include "hous.h"
#include "worker.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "sheep.h"
#include "QMap"
#include "butcher.h"
page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    QMap < int , QPushButton *> buttonmap;
    QMap < int , QLabel *> milk;
    QMap < int , QLabel *> cows;
    QMap < int , QPushButton *> basket;

    buttonmap[1]=ui->pushButton_7;
    buttonmap[2]=ui->pushButton_9;
    milk[1]=ui->label_milk;
    milk[2]=ui->label_milk_2;
    cows[1]=ui->label_cow;
    cows[2]=ui->label_cow_2;
    basket[1]=ui->pushButton_basket;
    basket[2]=ui->pushButton_basket_2;

    ui->setupUi(this);
    ui->pushButton_basket->hide();
    ui->label_cow->hide();
    ui->label_milk->hide();
    ui->pushButton_basket_2->hide();
    ui->label_cow_2->hide();
    ui->label_milk_2->hide();
    ui->label_2->hide();

    ui->label->hide();
    refresh();
//    ui->label_player->setText("Login Page Player" + QString::number(play));

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&page2::updateTime);
    timer->start(1000);

}


void page2::refresh()
{
       ui->lineEdit_coin->setReadOnly(true);
       ui->lineEdit_worker->setReadOnly(true);
       QFile file("D:/faz2/faz2/coin.txt");
       QFile chicken("D:/faz2/faz2/number_of_chicken.txt");
       QFile cow("D:/faz2/faz2/number_of_cow.txt");
       QFile sheep("D:/faz2/faz2/number_of_sheep.txt");
       QFile worker("D:/faz2/faz2/number_of_worker.txt");
       QFile land("D:/faz2/faz2/number_of_land.txt");
       QFile wheat("D:/faz2/faz2/number_of_wheat.txt");
       QFile cron("D:/faz2/faz2/number_of_cron.txt");
       QFile chicken_egg("D:/faz2/faz2/number_of_chicken_egg.txt");
       QFile chicken_mat("D:/faz2/faz2/number_of_chicken_mat.txt");
       QFile cow_mat("D:/faz2/faz2/number_of_cow_mat.txt");
       QFile cow_milk("D:/faz2/faz2/number_of_cow_milk.txt");
       QFile sheep_milk("D:/faz2/faz2/number_of_sheep_milk.txt");
       QFile sheep_mat("D:/faz2/faz2/number_of_sheep_milk.txt");


       QTextStream stream(&chicken);
       QTextStream out(&file);
       QTextStream out2(&cow);
       QTextStream out3(&sheep);
       QTextStream out4(&worker);
       QTextStream out5(&land);
       QTextStream out6(&wheat);
       QTextStream out7(&cron);
       QTextStream out8(&chicken_egg);
       QTextStream out9(&chicken_mat);
       QTextStream out10(&cow_mat);
       QTextStream out11(&cow_milk);
       QTextStream out12(&sheep_milk);
       QTextStream out13(&sheep_mat);

       int coin = 200;
       if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
           out<<coin;
           file.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
           ui->pushButton->setEnabled(false);
       }
       int number_of_chicken = 0;
       if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
           stream << number_of_chicken;
           chicken.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_cow = 0;
       if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
           out2 << number_of_cow;
           cow.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_sheep = 0;
       if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
           out3 << number_of_sheep;
           sheep.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_worker = 1;
       if(worker.open(QIODevice::WriteOnly | QIODevice::Text)){
           out4 << number_of_worker;
           worker.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_land = 1;
       if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
           out5 << number_of_land;
           land.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_wheat = 0;
       if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out6 << number_of_wheat;
           wheat.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_cron = 0;
       if(cron.open(QIODevice::WriteOnly | QIODevice::Text)){
           out7 << number_of_cron;
           cron.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_chicken_egg = 0;
       if(chicken_egg.open(QIODevice::WriteOnly | QIODevice::Text)){
           out8 << number_of_chicken_egg;
           chicken_egg.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_chicken_mat = 0;
       if(chicken_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out9 << number_of_chicken_mat;
           chicken_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_cow_mat = 0;
       if(cow_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out10 << number_of_cow_mat;
           cow_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_cow_milk = 0;
       if(cow_milk.open(QIODevice::WriteOnly | QIODevice::Text)){
           out11 << number_of_cow_milk;
           cow_milk.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_sheep_milk = 0;
       if(sheep_milk.open(QIODevice::WriteOnly | QIODevice::Text)){
           out12 << number_of_sheep_milk;
           sheep_milk.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
       int number_of_sheep_mat = 0;
       if(sheep_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out13 << number_of_sheep_mat;
           sheep_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
       }
}


void page2::basketss(int pric)
{
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream in(&file);
    QTextStream out(&file);
    QTextStream out2(&file);

    int coin;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> coin;
        file.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    coin = coin + pric;
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
       out << coin;
       file.close();
   }else{
       QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
   }

}


void page2::outcoin(int coin)
{

        QFile file("D:/faz2/faz2/coin.txt");
        QTextStream out(&file);
        if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
            out<<coin;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
            ui->pushButton->setEnabled(false);
        }
}


int page2::incoin()
{
        int coin;
        QFile file("D:/faz2/faz2/coin.txt");
        QTextStream in(&file);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
            in >>coin;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
            ui->pushButton->setEnabled(false);
        }
        return coin;
}

void page2::updateTime()
{
    int number;
    QFile numbers("D:/faz2/faz2/number.txt");
    QTextStream in1(&numbers);

    if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
        in1 >> number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    QMap < int , QPushButton *> buttonmap;
    QMap < int , QLabel *> milk;
    QMap < int , QLabel *> cows;
    QMap < int , QPushButton *>  basket;

    buttonmap[1]=ui->pushButton_7;
    buttonmap[2]=ui->pushButton_9;
    milk[1]=ui->label_milk;
    milk[2]=ui->label_milk_2;
    cows[1]=ui->label_cow;
    cows[2]=ui->label_cow_2;
    basket[1]=ui->pushButton_basket;
    basket[2]=ui->pushButton_basket_2;
    static int seconds = 0;
    seconds++;
    int players=0;
    QString cultivations;
    QFile cultivation("D:/faz2/faz2/cultivation.txt");
    QTextStream stream2(&cultivation);
    if(cultivation.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> cultivations;
        cultivation.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }



    if (cultivations=="wheat"){
//        updatewheat();


        static int seconds1 = 0;
        seconds1++;
        if(seconds1 == 1){
//            ui->pushButton_7->setEnabled(false);
//            ui->pushButton_7->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");

        }
        if(seconds1 == 15){
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
        }
        if (seconds1 == 25 ){
             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/ppcorn.png);");
             basket[number]->show();
             seconds1 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
             }
        }



    }
    else if (cultivations=="corn"){
//           updatecorn();
        static int seconds2 = 0;
        static int secondscount = 0;
        seconds2++ ;
        secondscount++;

        if(seconds2 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
        }
        if(seconds2 == 10){
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
        }
        if (seconds2 == 20 ){
             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/rsi.png)");
             basket[number]->show();

             seconds2 = 0;
             if(sw==1){
             cultivations = "0";
             secondscount=0;
             sw=0;
             }
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
             }
        }
                 if(secondscount==25||secondscount==30||secondscount==35){
                    if(sw==0){
                    ui->label->show();
                    int coin =incoin();
                    coin--;
                    if(secondscount==35){
                        secondscount=0;
                        coin++;
                    }
                    outcoin(coin);
                    }
                }
    }
    else if(cultivations=="chicken"){
//        updatechicken();
        static int seconds3 = 0;
        seconds3++;
        if(seconds3 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/favpng_chicken-rooster-icon.png)");
        }
        if (seconds3 == 20 ){
            basket[number]->show();
            milk[number]->show();
            milk[number]->setStyleSheet("");
            milk[number]->setStyleSheet("border-image: url(:/new/prefix1/favpng_chicken-egg-icon.png)");

             seconds3 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
             }
        }
    }
    else if(cultivations=="sheep"){
//        updatesheep();
        static int seconds4 = 0;
        seconds4++;
        if(seconds4 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/sheepgoat.png)");
        }
        if (seconds4 == 15 ){
             basket[number]->show();
             milk[number]->show();
             milk[number]->setStyleSheet("");
             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/milk-bucket-7808176-6347464.webp)");

             seconds4 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
             }
        }
    }
    else if(cultivations=="cow"){
//        updatecow();
        static int seconds5 = 0;
        seconds5++;
        if(seconds5 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/Lovepik_com-401736967-cow.png)");

        }
        if (seconds5 == 20 ){
             basket[number]->show();
             milk[number]->show();
             milk[number]->setStyleSheet("");
             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/milk-bucket-7808176-6347464.webp)");
             seconds5 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
             }
        }
    }





    QFile player("D:/faz2/faz2/number_of_players.txt");
    QTextStream stream1(&player);
    if(player.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> players;
        player.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }

    if (seconds == 180 && play<=players) // check if 3 minutes have passed
    {
        seconds = 0;
        play++;
        elapsedTimer.restart();
        QString message = QString("gfsddjg % 1").arg(play);
        QMessageBox::information(this,"jafs",message);

        ui->label_player->setText("Login Page Player" + QString::number(play));
        refresh();
    }else{

    }
    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;
    ui->lcdNumber->display(QString("%1:%2").arg(minutes, 2, 10, QChar('0')).arg(remainingSeconds, 2, 10, QChar('0')));



    QFile file("D:/faz2/faz2/coin.txt");
    QFile worker("D:/faz2/faz2/number_of_worker.txt");
    QFile land("D:/faz2/faz2/number_of_land.txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);
    worker.open(QIODevice::ReadOnly | QIODevice::Text);
    land.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QTextStream stream(&worker);
    QTextStream in2(&land);

    int coin;
    int number_of_worker;
    int number_of_land;
    in >> coin;
    stream >> number_of_worker;
    in2 >> number_of_land;
    file.close();
    worker.close();
    ui->lineEdit_coin->setText(" = " + QString::number(coin));
    ui->lineEdit_worker->setText(" = " + QString::number(number_of_worker));
    ui->lineEdit_land->setText(" = " + QString::number(number_of_land));

}









page2::~page2()
{
    delete ui;
}


void page2::on_pushButton_3_clicked()
{
    shop* SHOP = new shop();
    SHOP->show();

}


void page2::on_pushButton__clicked()
{
    land* LAND = new land();
    LAND->show();

}


void page2::on_pushButton_2_clicked()
{
    land* LAND = new land();
    LAND->show();
}


void page2::on_pushButton_clicked()
{
    land* LAND = new land();
    LAND->show();

}


void page2::on_pushButton_6_clicked()
{
    sheep* SHEEP = new sheep();
    SHEEP ->show();
}


void page2::on_pushButton_1_clicked()
{
    cow* COW = new cow();
    COW ->show();
}


void page2::on_pushButton_7_clicked()
{
    int number=1;
    QFile numbers("D:/faz2/faz2/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_4_clicked()
{
    hous* HOUS = new hous();
    HOUS ->show();
}


void page2::on_pushButton_8_clicked()
{
    chicken* CHICKEN = new chicken();
    CHICKEN ->show();
}


void page2::on_pushButton_10_clicked()
{
    worker* WORKER = new worker();
    WORKER ->show();
}


void page2::on_pushButton_5_clicked()
{
    land* LAND = new land();
    LAND->show();
}


void page2::on_pushButton_basket_clicked()
{
    int number;
    sw=1;
    QFile numbers("D:/faz2/faz2/number.txt");
    QTextStream in1(&numbers);

    if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
        in1 >> number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }

    QMap < int , QPushButton *> buttonmap;
    QMap < int , QPushButton *> basket;

    QMap < int , QLabel *> milk;
    QMap < int , QLabel *> cows;
    buttonmap[1]=ui->pushButton_7;
    buttonmap[2]=ui->pushButton_9;
    milk[1]=ui->label_milk;
    milk[2]=ui->label_milk_2;
    cows[1]=ui->label_cow;
    cows[2]=ui->label_cow_2;
    basket[1]=ui->pushButton_basket;
    basket[2]=ui->pushButton_basket_2;
    ui->label->hide();
    cows[number]->hide();
    milk[number]->hide();
//    ui->pushButton_7->setEnabled(true);
    if(buttonmap.contains(number)){
      buttonmap[number]->setEnabled(true);
    }
    QFile file("D:/faz2/faz2/coin.txt");
    QTextStream in(&file);
    QTextStream out(&file);
    QTextStream out2(&file);

    int coin;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> coin;
        file.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    QString baskets;
    QFile baskett("D:/faz2/faz2/basket.txt");
    QTextStream stream2(&baskett);
    if(baskett.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> baskets;
        baskett.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    if(baskets == "corn" ){
        basketss(2);
        QFile corn("D:/faz2/faz2/number_of_cron.txt");
        QTextStream stream8(&corn);

        int number_of_corn = 0;
        if(corn.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream8 >> number_of_corn;
            corn.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        number_of_corn++;
        if(corn.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_corn;
              corn.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }
    if(baskets == "wheat" ){
        basketss(3);
        QFile wheat("D:/faz2/faz2/number_of_wheat.txt");
        QTextStream stream7(&wheat);

        int number_of_wheat = 0;
        if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream7 >> number_of_wheat;
            wheat.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        number_of_wheat++;
        if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream7 << number_of_wheat;
              wheat.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }
    if(baskets == "cow" ){
        basketss(5);
        QFile cow("D:/faz2/faz2/number_of_cow.txt");
        QTextStream stream8(&cow);

        int number_of_cow = 0;
        if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream8 >> number_of_cow;
            cow.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        number_of_cow++;
        if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_cow;
              cow.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }

    }
    if(baskets == "sheep" ){
        basketss(3);
        QFile sheep("D:/faz2/faz2/number_of_sheep.txt");
        QTextStream stream8(&sheep);

        int number_of_sheep= 0;
        if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream8 >> number_of_sheep;
            sheep.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        number_of_sheep++;
        if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_sheep;
              sheep.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }
    if(baskets == "chicken" ){
        basketss(3);
        QFile chicken("D:/faz2/faz2/number_of_chicken.txt");
        QTextStream stream8(&chicken);

        int number_of_chicken= 0;
        if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream8 >> number_of_chicken;
            chicken.close();
        }else{
            QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
        number_of_chicken++;
        if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
              stream8 << number_of_chicken;
              chicken.close();
        }else{
              QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
        }
    }
    basket[number]->hide();
    buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/lanppc.png)");
}






void page2::on_pushButton_9_clicked()
{
    int number=2;
    QFile numbers("D:/faz2/faz2/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","فایل باز نشد");                   // اگر فایل باز نشده باشد ارور میدهد
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_Butcher_clicked()
{
    Butcher* BUTCHER = new Butcher();
    BUTCHER->show();
}

