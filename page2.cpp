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
#include "finish.h"
#include "QMap"
#include "butcher.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QString"
#include "QSqlQuery"
#include "QMovie"
#include "QLabel"
#include "QApplication"
//#include "time_land.h"
//#include <QVector>




page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{    
    ui->setupUi(this);
//    time_land* f[14];
//    for(int i=0; i<14 ; i++){
//        f[i]=new time_land(ui,this);
//    }
//    int obj =5;
//    time_land* f= new time_land(ui,this);
//    f[1].tab();
//    time_land f(ui,this);
//    time_land* f[14];
//    for(int i=0; i<14 ; i++){
//        f[i]=new time_land(ui,this);
//    }
//    f[0]->getUI()->pushButton_12->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->pushButton_19->setEnabled(false);
    ui->pushButton_20->setEnabled(false);
    ui->pushButton_21->setEnabled(false);
    ui->pushButton_22->setEnabled(false);
    ui->pushButton_23->setEnabled(false);
    ui->pushButton_24->setEnabled(false);

    ui->pushButton_basket->hide();
    ui->pushButton_basket_2->hide();
    ui->pushButton_basket_3->hide();
    ui->pushButton_basket_4->hide();
    ui->pushButton_basket_5->hide();
    ui->pushButton_basket_6->hide();
    ui->pushButton_basket_7->hide();
    ui->pushButton_basket_8->hide();
    ui->pushButton_basket_9->hide();
    ui->pushButton_basket_10->hide();
    ui->pushButton_basket_11->hide();
    ui->pushButton_basket_12->hide();
    ui->pushButton_basket_13->hide();
    ui->pushButton_basket_14->hide();

    ui->label_cow->hide();
    ui->label_cow_2->hide();
    ui->label_cow_3->hide();
    ui->label_cow_4->hide();
    ui->label_cow_5->hide();
    ui->label_cow_6->hide();
    ui->label_cow_7->hide();
    ui->label_cow_8->hide();
    ui->label_cow_9->hide();
    ui->label_cow_10->hide();
    ui->label_cow_11->hide();
    ui->label_cow_12->hide();
    ui->label_cow_13->hide();
    ui->label_cow_14->hide();

    ui->label_milk->hide();
    ui->label_milk_2->hide();
    ui->label_milk_3->hide();
    ui->label_milk_4->hide();
    ui->label_milk_5->hide();
    ui->label_milk_6->hide();
    ui->label_milk_7->hide();
    ui->label_milk_8->hide();
    ui->label_milk_9->hide();
    ui->label_milk_10->hide();
    ui->label_milk_11->hide();
    ui->label_milk_12->hide();
    ui->label_milk_13->hide();
    ui->label_milk_14->hide();

    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->label_14->hide();


    ui->label->hide();
    refresh();
    ui->label_player->setText("Login Page Player" + QString::number(play));

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&page2::updateTime);
    timer->start(1000);
}


void page2::refresh()
{

       QFile file("D:/faz2/faz2/fils/coin.txt");
       QFile chicken("D:/faz2/faz2/fils/number_of_chicken.txt");
       QFile cow("D:/faz2/faz2/fils/number_of_cow.txt");
       QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");
       QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
       QFile land("D:/faz2/faz2/fils/number_of_land.txt");
       QFile wheat("D:/faz2/faz2/fils/number_of_wheat.txt");
       QFile cron("D:/faz2/faz2/fils/number_of_cron.txt");
       QFile chicken_egg("D:/faz2/faz2/fils/number_of_chicken_egg.txt");
       QFile chicken_mat("D:/faz2/faz2/fils/number_of_chicken_mat.txt");
       QFile cow_mat("D:/faz2/faz2/fils/number_of_cow_mat.txt");
       QFile cow_milk("D:/faz2/faz2/fils/number_of_cow_milk.txt");
       QFile sheep_milk("D:/faz2/faz2/fils/number_of_sheep_milk.txt");
       QFile sheep_mat("D:/faz2/faz2/fils/number_of_sheep_milk.txt");
       QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
       QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
       QFile basket("D:/faz2/faz2/fils/basket.txt");


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
       QTextStream out14(&workerlan);
       QTextStream out15(&cultivation);
       QTextStream out16(&basket);

       int coin = 10;
       if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
           out<<coin;
           file.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
           ui->pushButton->setEnabled(false);
       }
       int number_of_chicken = 0;
       if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
           stream << number_of_chicken;
           chicken.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_cow = 0;
       if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
           out2 << number_of_cow;
           cow.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_sheep = 0;
       if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
           out3 << number_of_sheep;
           sheep.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_worker = 1;
       if(worker.open(QIODevice::WriteOnly | QIODevice::Text)){
           out4 << number_of_worker;
           worker.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_land = 1;
       if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
           out5 << number_of_land;
           land.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_wheat = 0;
       if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out6 << number_of_wheat;
           wheat.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_cron = 0;
       if(cron.open(QIODevice::WriteOnly | QIODevice::Text)){
           out7 << number_of_cron;
           cron.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_chicken_egg = 0;
       if(chicken_egg.open(QIODevice::WriteOnly | QIODevice::Text)){
           out8 << number_of_chicken_egg;
           chicken_egg.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_chicken_mat = 0;
       if(chicken_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out9 << number_of_chicken_mat;
           chicken_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_cow_mat = 0;
       if(cow_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out10 << number_of_cow_mat;
           cow_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_cow_milk = 0;
       if(cow_milk.open(QIODevice::WriteOnly | QIODevice::Text)){
           out11 << number_of_cow_milk;
           cow_milk.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_sheep_milk = 0;
       if(sheep_milk.open(QIODevice::WriteOnly | QIODevice::Text)){
           out12 << number_of_sheep_milk;
           sheep_milk.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int number_of_sheep_mat = 0;
       if(sheep_mat.open(QIODevice::WriteOnly | QIODevice::Text)){
           out13 << number_of_sheep_mat;
           sheep_mat.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       int workerlans = 0;
       if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
           out14 << workerlans;
           workerlan.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       QString cultivations = "0";
       if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
           out15 << cultivations;
           cultivation.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
       QString baskets = "0";
       if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
           out16 << baskets;
           basket.close();
       }else{
           QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
       }
}


void page2::basketss(int pric)
{
    QFile file("D:/faz2/faz2/fils/coin.txt");
    QTextStream in(&file);
    QTextStream out(&file);
    QTextStream out2(&file);

    int coin;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> coin;
        file.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    coin = coin + pric;
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
       out << coin;
       file.close();
   }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
   }

}


void page2::outcoin(int coin)
{

        QFile file("D:/faz2/faz2/fils/coin.txt");
        QTextStream out(&file);
        if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
            out<<coin;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
}


void page2::outfil(QString fils , int coin)
{
        QFile file(fils);
        QTextStream out(&file);
        if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
            out<<coin;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
}



int page2::incoin()
{
        int coin;
        QFile file("D:/faz2/faz2/fils/coin.txt");
        QTextStream in(&file);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
            in >>coin;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        return coin;
}


int page2::incoin(QString fils)
{
        int num;
        QFile file("fils");
        QTextStream in(&file);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
            in >> num;
            file.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        return num;
}

//void page2::lands(int number , QString cultivations)
//{
//    QMap < int , QPushButton *> buttonmap;
//    QMap < int , QLabel *> milk;
//    QMap < int , QLabel *> cows;
//    QMap < int , QPushButton *>  basket;
//    QMap < int , QLabel *>  Worker;

//    buttonmap[1]=ui->pushButton_7;
//    buttonmap[2]=ui->pushButton_9;
//    buttonmap[3]=ui->pushButton_13;
//    buttonmap[4]=ui->pushButton_14;
//    buttonmap[5]=ui->pushButton_15;
//    buttonmap[6]=ui->pushButton_16;
//    buttonmap[7]=ui->pushButton_17;
//    buttonmap[8]=ui->pushButton_18;
//    buttonmap[9]=ui->pushButton_19;
//    buttonmap[10]=ui->pushButton_20;
//    buttonmap[11]=ui->pushButton_21;
//    buttonmap[12]=ui->pushButton_22;
//    buttonmap[13]=ui->pushButton_23;
//    buttonmap[14]=ui->pushButton_24;

//    milk[1]=ui->label_milk;
//    milk[2]=ui->label_milk_2;
//    milk[3]=ui->label_milk_3;
//    milk[4]=ui->label_milk_4;
//    milk[5]=ui->label_milk_5;
//    milk[6]=ui->label_milk_6;
//    milk[7]=ui->label_milk_7;
//    milk[8]=ui->label_milk_8;
//    milk[9]=ui->label_milk_9;
//    milk[10]=ui->label_milk_10;
//    milk[11]=ui->label_milk_11;
//    milk[12]=ui->label_milk_12;
//    milk[13]=ui->label_milk_13;
//    milk[14]=ui->label_milk_14;

//    cows[1]=ui->label_cow;
//    cows[2]=ui->label_cow_2;
//    cows[3]=ui->label_cow_3;
//    cows[4]=ui->label_cow_4;
//    cows[5]=ui->label_cow_5;
//    cows[6]=ui->label_cow_6;
//    cows[7]=ui->label_cow_7;
//    cows[8]=ui->label_cow_8;
//    cows[9]=ui->label_cow_9;
//    cows[10]=ui->label_cow_10;
//    cows[11]=ui->label_cow_11;
//    cows[12]=ui->label_cow_12;
//    cows[13]=ui->label_cow_13;
//    cows[14]=ui->label_cow_14;

//    basket[1]=ui->pushButton_basket;
//    basket[2]=ui->pushButton_basket_2;
//    basket[3]=ui->pushButton_basket_3;
//    basket[4]=ui->pushButton_basket_4;
//    basket[5]=ui->pushButton_basket_5;
//    basket[6]=ui->pushButton_basket_6;
//    basket[7]=ui->pushButton_basket_7;
//    basket[8]=ui->pushButton_basket_8;
//    basket[9]=ui->pushButton_basket_9;
//    basket[10]=ui->pushButton_basket_10;
//    basket[11]=ui->pushButton_basket_11;
//    basket[12]=ui->pushButton_basket_12;
//    basket[13]=ui->pushButton_basket_13;
//    basket[14]=ui->pushButton_basket_14;

//    Worker[1]=ui->label_worker_1;
//    Worker[2]=ui->label_worker_2;
//    Worker[3]=ui->label_worker_3;
//    Worker[4]=ui->label_worker_4;
//    Worker[5]=ui->label_worker_5;
//    Worker[6]=ui->label_worker_6;
//    Worker[7]=ui->label_worker_7;
//    Worker[8]=ui->label_worker_8;
//    Worker[9]=ui->label_worker_9;
//    Worker[10]=ui->label_worker_10;
//    Worker[11]=ui->label_worker_11;
//    Worker[12]=ui->label_worker_12;
//    Worker[13]=ui->label_worker_13;
//    Worker[14]=ui->label_worker_14;

//    if (cultivations=="wheat"){
////        updatewheat();


//        static int seconds1 = 0;
//        seconds1++;
//        if(seconds1 == 1){
////            ui->pushButton_7->setEnabled(false);
////            ui->pushButton_7->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//            buttonmap[number]->setEnabled(false);
//            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//            Worker[number]->setMovie(movie);
//            movie->start();
//            Worker[number]->show();
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");

//        }
//        if(seconds1 == 15){
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
//        }
//        if (seconds1 == 25 ){
//             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/ppcorn.png);");
//             basket[number]->show();
//             seconds1 = 0;
//             cultivations = "0";
//             QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//             QTextStream stream2(&cultivation);
//             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                 stream2 << cultivations;
//                 cultivation.close();
//             }else{
//                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//             }
//        }



//    }
//    else if (cultivations=="corn"){
//        static int seconds2 = 0;
//        static int secondscount = 0;
//        seconds2++ ;
//        secondscount++;

//        if(seconds2 == 1){
//            buttonmap[number]->setEnabled(false);
//            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//            Worker[number]->setMovie(movie);
//            movie->start();
//            Worker[number]->show();
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//        }
//        if(seconds2 == 10){
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
//        }
//        if (seconds2 == 20 ){
//             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/rsi.png)");
//             basket[number]->show();

//             seconds2 = 0;
//             if(sw==1){
//             cultivations = "0";
//             secondscount=0;
//             sw=0;
//             }
//             QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//             QTextStream stream2(&cultivation);
//             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                 stream2 << cultivations;
//                 cultivation.close();
//             }else{
//                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//             }
//        }
//                 if(secondscount==25||secondscount==30||secondscount==35){
//                    if(sw==0){
//                    ui->label->show();
//                    int coin =incoin();
//                    coin--;
//                    if(secondscount==35){
//                        secondscount=0;
//                        coin++;
//                    }
//                    outcoin(coin);
//                    }
//                }
//    }
//    else if(cultivations=="chicken"){
//        static int seconds3 = 0;
//        seconds3++;
//        if(seconds3 == 1){
//            buttonmap[number]->setEnabled(false);
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//            cows[number]->show();
//            cows[number]->setStyleSheet("");
//            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-rooster-icon.png)");
//            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//            Worker[number]->setMovie(movie);
//            movie->start();
//            Worker[number]->show();
//        }
//        if (seconds3 == 20 ){
//            basket[number]->show();
//            milk[number]->show();
//            milk[number]->setStyleSheet("");
//            milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-egg-icon.png)");

//             seconds3 = 0;
//             cultivations = "0";
//             QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//             QTextStream stream2(&cultivation);
//             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                 stream2 << cultivations;
//                 cultivation.close();
//             }else{
//                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//             }
//        }
//    }
//    else if(cultivations=="sheep"){
//        static int seconds4 = 0;
//        seconds4++;
//        int sheeplan=0;
//        int number_of_sheep=0;
//        QFile sheeplans("D:/faz2/faz2/fils/sheeplan.txt");
//        QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");

//        QTextStream stream9(&sheeplans);
//        QTextStream stream8(&sheep);

//        if(sheeplans.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream9 >> sheeplan;
//            sheeplans.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
//        if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream9 >> number_of_sheep;
//            sheep.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
//        if(seconds4 == 1){
//            buttonmap[number]->setEnabled(false);
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//            cows[number]->show();
//            cows[number]->setStyleSheet("");
//            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/sheepgoat.png)");
//            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//            Worker[number]->setMovie(movie);
//            movie->start();
//            Worker[number]->show();
//        }
//        if (seconds4 == 15 ){
//            if(sheeplan>number_of_sheep){
//                cultivations = "0";
//                sheeplan--;
//            }
//             basket[number]->show();
//             milk[number]->show();
//             milk[number]->setStyleSheet("");
//             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
//             seconds4 = 0;
//             QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//             QTextStream stream2(&cultivation);
//             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                 stream2 << cultivations;
//                 cultivation.close();
//             }else{
//                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//             }
//        }
//    }
//    else if(cultivations=="cow"){
//        static int seconds5 = 0;
//        seconds5++;
//        if(seconds5 == 1){
//            buttonmap[number]->setEnabled(false);
//            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//            cows[number]->show();
//            cows[number]->setStyleSheet("");
//            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-401736967-cow.png)");
//            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//            Worker[number]->setMovie(movie);
//            movie->start();
//            Worker[number]->show();

//        }
//        if (seconds5 == 20 ){
//             basket[number]->show();
//             milk[number]->show();
//             milk[number]->setStyleSheet("");
//             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
//             seconds5 = 0;
//             cultivations = "0";
//             QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//             QTextStream stream2(&cultivation);
//             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                 stream2 << cultivations;
//                 cultivation.close();
//             }else{
//                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//             }
//        }
//    }
//}


void page2::updateTime()
{

    static int seconds = 0;
    seconds++;
//    time_land f;
//    f.tab();

//    QVector<time_land*> f ;
//    time_land* newf = new time_land();
//    f.append(newf);




//    QVector < time_land > f;
//    time_land f;
    //    f.append(time_land());
    //    f[number].get_number(number);
    int number;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream in1(&numbers);

    if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
        in1 >> number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }

    QString cultivations;
    QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
    QTextStream stream2(&cultivation);
    if(cultivation.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> cultivations;
        cultivation.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }




//    f.tab(number,cultivations);
//    lands(number,cultivations);


//    newf->tab(number);
//    f.emplace_back(ui,this);
    QMap < int , QPushButton *> buttonmap;
    QMap < int , QLabel *> milk;
    QMap < int , QLabel *> cows;
    QMap < int , QPushButton *>  basket;
    QMap < int , QLabel *>  Worker;

    buttonmap[1]=ui->pushButton_7;
    buttonmap[2]=ui->pushButton_9;
    buttonmap[3]=ui->pushButton_13;
    buttonmap[4]=ui->pushButton_14;
    buttonmap[5]=ui->pushButton_15;
    buttonmap[6]=ui->pushButton_16;
    buttonmap[7]=ui->pushButton_17;
    buttonmap[8]=ui->pushButton_18;
    buttonmap[9]=ui->pushButton_19;
    buttonmap[10]=ui->pushButton_20;
    buttonmap[11]=ui->pushButton_21;
    buttonmap[12]=ui->pushButton_22;
    buttonmap[13]=ui->pushButton_23;
    buttonmap[14]=ui->pushButton_24;

    milk[1]=ui->label_milk;
    milk[2]=ui->label_milk_2;
    milk[3]=ui->label_milk_3;
    milk[4]=ui->label_milk_4;
    milk[5]=ui->label_milk_5;
    milk[6]=ui->label_milk_6;
    milk[7]=ui->label_milk_7;
    milk[8]=ui->label_milk_8;
    milk[9]=ui->label_milk_9;
    milk[10]=ui->label_milk_10;
    milk[11]=ui->label_milk_11;
    milk[12]=ui->label_milk_12;
    milk[13]=ui->label_milk_13;
    milk[14]=ui->label_milk_14;

    cows[1]=ui->label_cow;
    cows[2]=ui->label_cow_2;
    cows[3]=ui->label_cow_3;
    cows[4]=ui->label_cow_4;
    cows[5]=ui->label_cow_5;
    cows[6]=ui->label_cow_6;
    cows[7]=ui->label_cow_7;
    cows[8]=ui->label_cow_8;
    cows[9]=ui->label_cow_9;
    cows[10]=ui->label_cow_10;
    cows[11]=ui->label_cow_11;
    cows[12]=ui->label_cow_12;
    cows[13]=ui->label_cow_13;
    cows[14]=ui->label_cow_14;

    basket[1]=ui->pushButton_basket;
    basket[2]=ui->pushButton_basket_2;
    basket[3]=ui->pushButton_basket_3;
    basket[4]=ui->pushButton_basket_4;
    basket[5]=ui->pushButton_basket_5;
    basket[6]=ui->pushButton_basket_6;
    basket[7]=ui->pushButton_basket_7;
    basket[8]=ui->pushButton_basket_8;
    basket[9]=ui->pushButton_basket_9;
    basket[10]=ui->pushButton_basket_10;
    basket[11]=ui->pushButton_basket_11;
    basket[12]=ui->pushButton_basket_12;
    basket[13]=ui->pushButton_basket_13;
    basket[14]=ui->pushButton_basket_14;

    Worker[1]=ui->label_worker_1;
    Worker[2]=ui->label_worker_2;
    Worker[3]=ui->label_worker_3;
    Worker[4]=ui->label_worker_4;
    Worker[5]=ui->label_worker_5;
    Worker[6]=ui->label_worker_6;
    Worker[7]=ui->label_worker_7;
    Worker[8]=ui->label_worker_8;
    Worker[9]=ui->label_worker_9;
    Worker[10]=ui->label_worker_10;
    Worker[11]=ui->label_worker_11;
    Worker[12]=ui->label_worker_12;
    Worker[13]=ui->label_worker_13;
    Worker[14]=ui->label_worker_14;

//    QString cultivations;
//    QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//    QTextStream stream2(&cultivation);
    if(cultivation.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> cultivations;
        cultivation.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }



    if (cultivations=="wheat"){
//        updatewheat();


        static int seconds1 = 0;
        seconds1++;
        if(seconds1 == 1){
//            ui->pushButton_7->setEnabled(false);
//            ui->pushButton_7->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            buttonmap[number]->setEnabled(false);
            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
            Worker[number]->setMovie(movie);
            movie->start();
            Worker[number]->show();
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");

        }
        if(seconds1 == 15){
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
        }
        if (seconds1 == 25 ){
             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/ppcorn.png);");
             basket[number]->show();
             seconds1 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
             }
        }



    }
    else if (cultivations=="corn"){
        static int seconds2 = 0;
        static int secondscount = 0;
        seconds2++ ;
        secondscount++;

        if(seconds2 == 1){
            buttonmap[number]->setEnabled(false);
            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
            Worker[number]->setMovie(movie);
            movie->start();
            Worker[number]->show();
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
        }
        if(seconds2 == 10){
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
        }
        if (seconds2 == 20 ){
             buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/rsi.png)");
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
                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
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
        static int seconds3 = 0;
        seconds3++;
        if(seconds3 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-rooster-icon.png)");
            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
            Worker[number]->setMovie(movie);
            movie->start();
            Worker[number]->show();
        }
        if (seconds3 == 20 ){
            basket[number]->show();
            milk[number]->show();
            milk[number]->setStyleSheet("");
            milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-egg-icon.png)");

             seconds3 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
             }
        }
    }
    else if(cultivations=="sheep"){
        static int seconds4 = 0;
        seconds4++;
        int sheeplan=0;
        int number_of_sheep=0;
        QFile sheeplans("D:/faz2/faz2/fils/sheeplan.txt");
        QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");

        QTextStream stream9(&sheeplans);
        QTextStream stream8(&sheep);

        if(sheeplans.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream9 >> sheeplan;
            sheeplans.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
            stream9 >> number_of_sheep;
            sheep.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(seconds4 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/sheepgoat.png)");
            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
            Worker[number]->setMovie(movie);
            movie->start();
            Worker[number]->show();
        }
        if (seconds4 == 15 ){
            if(sheeplan>number_of_sheep){
                cultivations = "0";
                sheeplan--;
            }
             basket[number]->show();
             milk[number]->show();
             milk[number]->setStyleSheet("");
             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
             seconds4 = 0;
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
             }
        }
    }
    else if(cultivations=="cow"){
        static int seconds5 = 0;
        seconds5++;
        if(seconds5 == 1){
            buttonmap[number]->setEnabled(false);
            buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
            cows[number]->show();
            cows[number]->setStyleSheet("");
            cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-401736967-cow.png)");
            QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
            Worker[number]->setMovie(movie);
            movie->start();
            Worker[number]->show();

        }
        if (seconds5 == 20 ){
             basket[number]->show();
             milk[number]->show();
             milk[number]->setStyleSheet("");
             milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
             seconds5 = 0;
             cultivations = "0";
             if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
                 stream2 << cultivations;
                 cultivation.close();
             }else{
                 QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
             }
        }
    }

    static int players=0;
    QFile player("D:/faz2/faz2/fils/number_of_players.txt");
    QTextStream stream1(&player);
    if(player.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> players;
        player.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }

    if (seconds == 180 && play<=players)                                                    // check if 3 minutes have passed
    {
        seconds = 0;
        elapsedTimer.restart();
        QString message = QString("Your turn is over").arg(play);
        QMessageBox::information(this,"Finsh",message);
        QString Username;
        QSqlDatabase database;
        database=QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("d:///database.db");                                 //فایل دیتا بیس خود را در درایو دی جایگزاری کنید
        if(database.open()){
            QSqlQuery qury;
            QString pric =  QString::number(play);
            if(qury.exec("SELECT Username FROM Loginpaigah WHERE number='"+pric+"' ")){
                if(qury.next()){
                    Username = qury.value(0).toString();
                }
            }
            database.close();
        }else {
          qDebug() << "failed db.";
        }
        QSqlDatabase score;
        int coin = incoin();
        QString coins=QString::number(coin);
        QString numbr=QString::number(play);
        score =QSqlDatabase::addDatabase("QSQLITE");
        score.setDatabaseName("d:///score.db");                                           //فایل دیتا بیس خود را در درایو دی جایگزاری کنید
        score.open();
        score.exec("INSERT INTO username(UserName,Score,number)VALUES('"+Username+"','"+coins+"','"+numbr+"')");
        score.close();

        play++;
        ui->label_player->setText("Login Page Player" + QString::number(play));
        refresh();

    }else if (play>players && pos==0){
        QString Username[10];
        QString scor;
        int scr[10];

        QSqlDatabase scores;
        scores=QSqlDatabase::addDatabase("QSQLITE");
        scores.setDatabaseName("d:///score.db");                                 //فایل دیتا بیس خود را در درایو دی جایگزاری کنید
        for(int i = 0; i < play ; i++){
        if(scores.open()){
            QSqlQuery qury;
            QString pric =  QString::number(i);
            if(qury.exec("SELECT Username FROM username WHERE number='"+pric+"' ")){
                if(qury.next()){
                    Username[i] = qury.value(0).toString();
                }
            }
            scores.close();
        }else {
          qDebug() << "failed db.";
        }

        if(scores.open()){
            QSqlQuery qury;
            QString pric =  QString::number(i);
            if(qury.exec("SELECT Score FROM username WHERE number='"+pric+"' ")){
                if(qury.next()){
                    scor = qury.value(0).toString();
                    scr[i]=scor.toInt();
                }
            }
            scores.close();
        }else {
          qDebug() << "failed db.";
        }
        }
        for(int i = 0; i < play-1 ; ++i){
            for(int j = 0; j< play-i-1; ++j){
                if (scr[j]<scr[j+1]){
                    int tmp = scr[j];
                    QString tp = Username[j];
                    scr[j]=scr[j+1];
                    Username[j]=Username[j+1];
                    scr[j+1]=tmp;
                    Username[j+1]=tp;
                }
            }
            QSqlDatabase score;
            pos=1;
            QString coins=QString::number(scr[i]);
            QString numbr=QString::number(i);
            score =QSqlDatabase::addDatabase("QSQLITE");
            score.setDatabaseName("d:///scoretartib.db");                                           //فایل دیتا بیس خود را در درایو دی جایگزاری کنید
            score.open();
            score.exec("INSERT INTO username(UserName,Score)VALUES('"+Username[i]+"','"+coins+"')");
            score.close();

        }

        finish* FINISH = new finish();
        FINISH->show();

    }
    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;
    ui->lcdNumber->display(QString("%1:%2").arg(minutes, 2, 10, QChar('0')).arg(remainingSeconds, 2, 10, QChar('0')));

    QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");

    QTextStream stream8(&sheep);

    int number_of_sheep= 0;
    if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_sheep;
        sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
          stream8 << number_of_sheep;
          sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }

    QFile file("D:/faz2/faz2/fils/coin.txt");
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QFile worklan("D:/faz2/faz2/fils/workerlan.txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);
    worker.open(QIODevice::ReadOnly | QIODevice::Text);
    land.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    QTextStream stream(&worker);
    QTextStream in2(&land);

    int number_of_land;
    int coin;
    int number_of_worker;
    in >> coin;
    stream >> number_of_worker;
    in2 >> number_of_land;

    file.close();
    worker.close();
    land.close();

    ui->lineEdit_coin->setText(" = " + QString::number(coin));
    ui->lineEdit_worker->setText(" = " + QString::number(number_of_worker));
    ui->lineEdit_land->setText(" = " + QString::number(number_of_land));

//    if(number_of_sheep){

//    }
}









page2::~page2()
{
    delete ui;
}

//void time_land::tab(){

//}



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
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
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
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream in1(&numbers);

    if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
        in1 >> number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }

    QMap < int , QPushButton *> buttonmap;
    QMap < int , QPushButton *> basket;
    QMap < int , QLabel *> milk;
    QMap < int , QLabel *> cows;
    QMap < int , QLabel *> Worker;



    buttonmap[1]=ui->pushButton_7;
    buttonmap[2]=ui->pushButton_9;
    buttonmap[3]=ui->pushButton_13;
    buttonmap[4]=ui->pushButton_14;
    buttonmap[5]=ui->pushButton_15;
    buttonmap[6]=ui->pushButton_16;
    buttonmap[7]=ui->pushButton_17;
    buttonmap[8]=ui->pushButton_18;
    buttonmap[9]=ui->pushButton_19;
    buttonmap[10]=ui->pushButton_20;
    buttonmap[11]=ui->pushButton_21;
    buttonmap[12]=ui->pushButton_22;
    buttonmap[13]=ui->pushButton_23;
    buttonmap[14]=ui->pushButton_24;

    milk[1]=ui->label_milk;
    milk[2]=ui->label_milk_2;
    milk[3]=ui->label_milk_3;
    milk[4]=ui->label_milk_4;
    milk[5]=ui->label_milk_5;
    milk[6]=ui->label_milk_6;
    milk[7]=ui->label_milk_7;
    milk[8]=ui->label_milk_8;
    milk[9]=ui->label_milk_9;
    milk[10]=ui->label_milk_10;
    milk[11]=ui->label_milk_11;
    milk[12]=ui->label_milk_12;
    milk[13]=ui->label_milk_13;
    milk[14]=ui->label_milk_14;

    cows[1]=ui->label_cow;
    cows[2]=ui->label_cow_2;
    cows[3]=ui->label_cow_3;
    cows[4]=ui->label_cow_4;
    cows[5]=ui->label_cow_5;
    cows[6]=ui->label_cow_6;
    cows[7]=ui->label_cow_7;
    cows[8]=ui->label_cow_8;
    cows[9]=ui->label_cow_9;
    cows[10]=ui->label_cow_10;
    cows[11]=ui->label_cow_11;
    cows[12]=ui->label_cow_12;
    cows[13]=ui->label_cow_13;
    cows[14]=ui->label_cow_14;

    basket[1]=ui->pushButton_basket;
    basket[2]=ui->pushButton_basket_2;
    basket[3]=ui->pushButton_basket_3;
    basket[4]=ui->pushButton_basket_4;
    basket[5]=ui->pushButton_basket_5;
    basket[6]=ui->pushButton_basket_6;
    basket[7]=ui->pushButton_basket_7;
    basket[8]=ui->pushButton_basket_8;
    basket[9]=ui->pushButton_basket_9;
    basket[10]=ui->pushButton_basket_10;
    basket[11]=ui->pushButton_basket_11;
    basket[12]=ui->pushButton_basket_12;
    basket[13]=ui->pushButton_basket_13;
    basket[14]=ui->pushButton_basket_14;

    Worker[1]=ui->label_worker_1;
    Worker[2]=ui->label_worker_2;
    Worker[3]=ui->label_worker_3;
    Worker[4]=ui->label_worker_4;
    Worker[5]=ui->label_worker_5;
    Worker[6]=ui->label_worker_6;
    Worker[7]=ui->label_worker_7;
    Worker[8]=ui->label_worker_8;
    Worker[9]=ui->label_worker_9;
    Worker[10]=ui->label_worker_10;
    Worker[11]=ui->label_worker_11;
    Worker[12]=ui->label_worker_12;
    Worker[13]=ui->label_worker_13;
    Worker[14]=ui->label_worker_14;

    ui->label->hide();
    cows[number]->hide();
    milk[number]->hide();
    Worker[number]->hide();
    if(buttonmap.contains(number)){
      buttonmap[number]->setEnabled(true);
    }
    QFile file("D:/faz2/faz2/fils/coin.txt");
    QTextStream in(&file);
    QTextStream out(&file);
    QTextStream out2(&file);

    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    int workerlans=0;
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }

    int coin;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> coin;
        file.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    QString baskets;
    QFile baskett("D:/faz2/faz2/fils/basket.txt");
    QTextStream stream2(&baskett);
    if(baskett.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> baskets;
        baskett.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(baskets == "corn" ){
        basketss(2);
        workerlans--;
//        QFile corn("D:/faz2/faz2/fils/number_of_cron.txt");
//        QTextStream stream8(&corn);

//        int number_of_corn = 0;
//        if(corn.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream8 >> number_of_corn;
//            corn.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
//        number_of_corn++;
//        if(corn.open(QIODevice::WriteOnly | QIODevice::Text)){
//              stream8 << number_of_corn;
//              corn.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
    }
    if(baskets == "wheat" ){
        basketss(3);
        workerlans--;
        //        QFile wheat("D:/faz2/faz2/fils/number_of_wheat.txt");
        //        QTextStream stream7(&wheat);

        //        int number_of_wheat = 0;
        //        if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
        //            stream7 >> number_of_wheat;
        //            wheat.close();
        //        }else{
        //            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        //        }
        //        number_of_wheat++;
        //        if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
        //              stream7 << number_of_wheat;
        //              wheat.close();
        //        }else{
        //            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        //        }
    }
    if(baskets == "cow" ){
        basketss(5);
        workerlans--;

//        QFile cow("D:/faz2/faz2/fils/number_of_cow.txt");
//        QTextStream stream8(&cow);

//        int number_of_cow = 0;
//        if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream8 >> number_of_cow;
//            cow.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
//        number_of_cow++;
//        if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
//              stream8 << number_of_cow;
//              cow.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }

    }
    if(baskets == "sheep" ){
        basketss(3);
        workerlans--;


    }
    if(baskets == "chicken" ){
        basketss(3);
        workerlans--;

//        QFile chicken("D:/faz2/faz2/fils/number_of_chicken.txt");
//        QTextStream stream8(&chicken);

//        int number_of_chicken= 0;
//        if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream8 >> number_of_chicken;
//            chicken.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
//        number_of_chicken++;
//        if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
//              stream8 << number_of_chicken;
//              chicken.close();
//        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }
    }

    if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream1 << workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }


    basket[number]->hide();
    buttonmap[number]->setStyleSheet("");
    buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/lanppc.png)");
}






void page2::on_pushButton_9_clicked()
{
//    int number=2;
//    QFile numbers("D:/faz2/faz2/fils/number.txt");
//    QTextStream stream(&numbers);

//    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
//        stream << number;
//        numbers.close();
//    }else{
//        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//    }
    number[0][0]=1;
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_Butcher_clicked()
{
    Butcher* BUTCHER = new Butcher();
    BUTCHER->show();
}





void page2::on_pushButton_13_clicked()
{
    int number=3;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_14_clicked()
{
    int number=4;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_15_clicked()
{
    int number=5;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_16_clicked()
{
    int number=6;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_17_clicked()
{
    int number=7;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_19_clicked()
{
    int number=9;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_24_clicked()
{
    int number=14;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_23_clicked()
{
    int number=13;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_22_clicked()
{
    int number=12;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_21_clicked()
{
    int number=11;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_20_clicked()
{
    int number=10;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_18_clicked()
{
    int number=8;
    QFile numbers("D:/faz2/faz2/fils/number.txt");
    QTextStream stream(&numbers);

    if(numbers.open(QIODevice::WriteOnly | QIODevice::Text)){
        stream << number;
        numbers.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    mland* MLAND = new mland();
    MLAND ->show();
}


void page2::on_pushButton_look_2_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }

    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_look_2->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_3_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_look_3->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_4_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_look_4->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_5_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_look_5->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_6_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_look_6->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_7_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_look_7->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_8_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_18->setEnabled(true);
    ui->pushButton_look_8->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_9_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_19->setEnabled(true);
    ui->pushButton_look_9->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_10_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_20->setEnabled(true);
    ui->pushButton_look_10->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_11_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_21->setEnabled(true);
    ui->pushButton_look_11->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_12_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_22->setEnabled(true);
    ui->pushButton_look_12->hide();

    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_13_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_23->setEnabled(true);
    ui->pushButton_look_13->hide();
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}


void page2::on_pushButton_look_14_clicked()
{
    int coin = incoin();
    int number_of_land=0;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    QTextStream out(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
    if(coin>3){
    coin -= 3;
    number_of_land ++;
    ui->pushButton_24->setEnabled(true);
    ui->pushButton_look_14->hide();
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough coins");            // Declaring an error in terms of the number of coins
    }
    outcoin(coin);
    if(land.open(QIODevice::WriteOnly | QIODevice::Text)){
        out << number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        return;
    }
}

