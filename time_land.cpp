#include "time_land.h"
#include "QMap"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "QMovie"
time_land::time_land(Ui::page2 *ui, QObject *parent) : QObject(parent), m_ui(ui)
{
//    m_ui->pushButton_9->setEnabled(false);
//    m_ui->pushButton_13->setEnabled(false);
//    m_ui->pushButton_14->setEnabled(false);
//    m_ui->pushButton_15->setEnabled(false);
//    m_ui->pushButton_16->setEnabled(false);
//    m_ui->pushButton_17->setEnabled(false);
//    m_ui->pushButton_18->setEnabled(false);
//    m_ui->pushButton_19->setEnabled(false);
//    m_ui->pushButton_20->setEnabled(false);
//    m_ui->pushButton_21->setEnabled(false);
//    m_ui->pushButton_22->setEnabled(false);
//    m_ui->pushButton_23->setEnabled(false);
//    m_ui->pushButton_24->setEnabled(false);

//    m_ui->pushButton_basket->hide();
//    m_ui->pushButton_basket_2->hide();
//    m_ui->pushButton_basket_3->hide();
//    m_ui->pushButton_basket_4->hide();
//    m_ui->pushButton_basket_5->hide();
//    m_ui->pushButton_basket_6->hide();
//    m_ui->pushButton_basket_7->hide();
//    m_ui->pushButton_basket_8->hide();
//    m_ui->pushButton_basket_9->hide();
//    m_ui->pushButton_basket_10->hide();
//    m_ui->pushButton_basket_11->hide();
//    m_ui->pushButton_basket_12->hide();
//    m_ui->pushButton_basket_13->hide();
//    m_ui->pushButton_basket_14->hide();

//    m_ui->label_cow->hide();
//    m_ui->label_cow_2->hide();
//    m_ui->label_cow_3->hide();
//    m_ui->label_cow_4->hide();
//    m_ui->label_cow_5->hide();
//    m_ui->label_cow_6->hide();
//    m_ui->label_cow_7->hide();
//    m_ui->label_cow_8->hide();
//    m_ui->label_cow_9->hide();
//    m_ui->label_cow_10->hide();
//    m_ui->label_cow_11->hide();
//    m_ui->label_cow_12->hide();
//    m_ui->label_cow_13->hide();
//    m_ui->label_cow_14->hide();

//    m_ui->label_milk->hide();
//    m_ui->label_milk_2->hide();
//    m_ui->label_milk_3->hide();
//    m_ui->label_milk_4->hide();
//    m_ui->label_milk_5->hide();
//    m_ui->label_milk_6->hide();
//    m_ui->label_milk_7->hide();
//    m_ui->label_milk_8->hide();
//    m_ui->label_milk_9->hide();
//    m_ui->label_milk_10->hide();
//    m_ui->label_milk_11->hide();
//    m_ui->label_milk_12->hide();
//    m_ui->label_milk_13->hide();
//    m_ui->label_milk_14->hide();

//    m_ui->label_2->hide();
//    m_ui->label_3->hide();
//    m_ui->label_4->hide();
//    m_ui->label_5->hide();
//    m_ui->label_6->hide();
//    m_ui->label_7->hide();
//    m_ui->label_8->hide();
//    m_ui->label_9->hide();
//    m_ui->label_10->hide();
//    m_ui->label_11->hide();
//    m_ui->label_12->hide();
//    m_ui->label_13->hide();
//    m_ui->label_14->hide();
        QMap < int , QPushButton *> buttonmap;
        QMap < int , QLabel *> milk;
        QMap < int , QLabel *> cows;
        QMap < int , QPushButton *>  basket;
        QMap < int , QLabel *>  Worker;

        buttonmap[1]=m_ui->pushButton_7;
        buttonmap[2]=m_ui->pushButton_9;
        buttonmap[3]=m_ui->pushButton_13;
        buttonmap[4]=m_ui->pushButton_14;
        buttonmap[5]=m_ui->pushButton_15;
        buttonmap[6]=m_ui->pushButton_16;
        buttonmap[7]=m_ui->pushButton_17;
        buttonmap[8]=m_ui->pushButton_18;
        buttonmap[9]=m_ui->pushButton_19;
        buttonmap[10]=m_ui->pushButton_20;
        buttonmap[11]=m_ui->pushButton_21;
        buttonmap[12]=m_ui->pushButton_22;
        buttonmap[13]=m_ui->pushButton_23;
        buttonmap[14]=m_ui->pushButton_24;

        milk[1]=m_ui->label_milk;
        milk[2]=m_ui->label_milk_2;
        milk[3]=m_ui->label_milk_3;
        milk[4]=m_ui->label_milk_4;
        milk[5]=m_ui->label_milk_5;
        milk[6]=m_ui->label_milk_6;
        milk[7]=m_ui->label_milk_7;
        milk[8]=m_ui->label_milk_8;
        milk[9]=m_ui->label_milk_9;
        milk[10]=m_ui->label_milk_10;
        milk[11]=m_ui->label_milk_11;
        milk[12]=m_ui->label_milk_12;
        milk[13]=m_ui->label_milk_13;
        milk[14]=m_ui->label_milk_14;

        cows[1]=m_ui->label_cow;
        cows[2]=m_ui->label_cow_2;
        cows[3]=m_ui->label_cow_3;
        cows[4]=m_ui->label_cow_4;
        cows[5]=m_ui->label_cow_5;
        cows[6]=m_ui->label_cow_6;
        cows[7]=m_ui->label_cow_7;
        cows[8]=m_ui->label_cow_8;
        cows[9]=m_ui->label_cow_9;
        cows[10]=m_ui->label_cow_10;
        cows[11]=m_ui->label_cow_11;
        cows[12]=m_ui->label_cow_12;
        cows[13]=m_ui->label_cow_13;
        cows[14]=m_ui->label_cow_14;

        basket[1]=m_ui->pushButton_basket;
        basket[2]=m_ui->pushButton_basket_2;
        basket[3]=m_ui->pushButton_basket_3;
        basket[4]=m_ui->pushButton_basket_4;
        basket[5]=m_ui->pushButton_basket_5;
        basket[6]=m_ui->pushButton_basket_6;
        basket[7]=m_ui->pushButton_basket_7;
        basket[8]=m_ui->pushButton_basket_8;
        basket[9]=m_ui->pushButton_basket_9;
        basket[10]=m_ui->pushButton_basket_10;
        basket[11]=m_ui->pushButton_basket_11;
        basket[12]=m_ui->pushButton_basket_12;
        basket[13]=m_ui->pushButton_basket_13;
        basket[14]=m_ui->pushButton_basket_14;

        Worker[1]=m_ui->label_worker_1;
        Worker[2]=m_ui->label_worker_2;
        Worker[3]=m_ui->label_worker_3;
        Worker[4]=m_ui->label_worker_4;
        Worker[5]=m_ui->label_worker_5;
        Worker[6]=m_ui->label_worker_6;
        Worker[7]=m_ui->label_worker_7;
        Worker[8]=m_ui->label_worker_8;
        Worker[9]=m_ui->label_worker_9;
        Worker[10]=m_ui->label_worker_10;
        Worker[11]=m_ui->label_worker_11;
        Worker[12]=m_ui->label_worker_12;
        Worker[13]=m_ui->label_worker_13;
        Worker[14]=m_ui->label_worker_14;



        int number;
        QFile numbers("D:/faz2/faz2/fils/number.txt");
        QTextStream in1(&numbers);

        if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
            in1 >> number;
            numbers.close();
        }else{
//            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }

        basket[number]->show();


//        QString cultivations;
//        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
//        QTextStream stream2(&cultivation);
//        if(cultivation.open(QIODevice::ReadOnly | QIODevice::Text)){
//            stream2 >> cultivations;
//            cultivation.close();
//        }else{
////            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//        }



//        if (cultivations=="wheat"){
//    //        updatewheat();


//            static int seconds1 = 0;
//            seconds1++;
//            if(seconds1 == 1){
//    //            ui->pushButton_7->setEnabled(false);
//    //            ui->pushButton_7->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//                buttonmap[number]->setEnabled(false);
//                QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//                Worker[number]->setMovie(movie);
//                movie->start();
//                Worker[number]->show();
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");

//            }
//            if(seconds1 == 15){
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
//            }
//            if (seconds1 == 25 ){
//                 buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/ppcorn.png);");
//                 basket[number]->show();
//                 seconds1 = 0;
//                 cultivations = "0";
//                 if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                     stream2 << cultivations;
//                     cultivation.close();
//                 }else{
////                     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//                 }
//            }



//        }
//        else if (cultivations=="corn"){
//            static int seconds2 = 0;
//            static int secondscount = 0;
//            seconds2++ ;
//            secondscount++;

//            if(seconds2 == 1){
//                buttonmap[number]->setEnabled(false);
//                QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//                Worker[number]->setMovie(movie);
//                movie->start();
//                Worker[number]->show();
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//            }
//            if(seconds2 == 10){
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (5).png)");
//            }
//            if (seconds2 == 20 ){
//                 buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/rsi.png)");
//                 basket[number]->show();
//                 cultivations = "0";
//                 secondscount=0;
//                 seconds2 = 0;
////                 if(sw==1){
////                 cultivations = "0";
////                 secondscount=0;
////                 sw=0;
////                 }
//                 if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                     stream2 << cultivations;
//                     cultivation.close();
//                 }else{
////                     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//                 }
//            }
////                     if(secondscount==25||secondscount==30||secondscount==35){
////                        if(sw==0){
////                        ui->label->show();
////                        int coin =incoin();
////                        coin--;
////                        if(secondscount==35){
////                            secondscount=0;
////                            coin++;
////                        }
////                        outcoin(coin);
////                        }
////                    }
//        }
//        else if(cultivations=="chicken"){
//            static int seconds3 = 0;
//            seconds3++;
//            if(seconds3 == 1){
//                buttonmap[number]->setEnabled(false);
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//                cows[number]->show();
//                cows[number]->setStyleSheet("");
//                cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-rooster-icon.png)");
//                QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//                Worker[number]->setMovie(movie);
//                movie->start();
//                Worker[number]->show();
//            }
//            if (seconds3 == 20 ){
//                basket[number]->show();
//                milk[number]->show();
//                milk[number]->setStyleSheet("");
//                milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/favpng_chicken-egg-icon.png)");

//                 seconds3 = 0;
//                 cultivations = "0";
//                 if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                     stream2 << cultivations;
//                     cultivation.close();
//                 }else{
////                     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//                 }
//            }
//        }
//        else if(cultivations=="sheep"){
//            static int seconds4 = 0;
//            seconds4++;
//            int sheeplan=0;
//            int number_of_sheep=0;
//            QFile sheeplans("D:/faz2/faz2/fils/sheeplan.txt");
//            QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");

//            QTextStream stream9(&sheeplans);
//            QTextStream stream8(&sheep);

//            if(sheeplans.open(QIODevice::ReadOnly | QIODevice::Text)){
//                stream9 >> sheeplan;
//                sheeplans.close();
//            }else{
////                QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//            }
//            if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
//                stream9 >> number_of_sheep;
//                sheep.close();
//            }else{
////                QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//            }
//            if(seconds4 == 1){
//                buttonmap[number]->setEnabled(false);
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//                cows[number]->show();
//                cows[number]->setStyleSheet("");
//                cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/sheepgoat.png)");
//                QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//                Worker[number]->setMovie(movie);
//                movie->start();
//                Worker[number]->show();
//            }
//            if (seconds4 == 15 ){
//                if(sheeplan>number_of_sheep){
//                    cultivations = "0";
//                    sheeplan--;
//                }
//                 basket[number]->show();
//                 milk[number]->show();
//                 milk[number]->setStyleSheet("");
//                 milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
//                 seconds4 = 0;
//                 if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                     stream2 << cultivations;
//                     cultivation.close();
//                 }else{
////                     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//                 }
//            }
//        }
//        else if(cultivations=="cow"){
//            static int seconds5 = 0;
//            seconds5++;
//            if(seconds5 == 1){
//                buttonmap[number]->setEnabled(false);
//                buttonmap[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-450072032-Vector Icons of Land Farms (4).png)");
//                cows[number]->show();
//                cows[number]->setStyleSheet("");
//                cows[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/Lovepik_com-401736967-cow.png)");
//                QMovie *movie = new QMovie("D:/faz2/faz2/imagfil/q2");
//                Worker[number]->setMovie(movie);
//                movie->start();
//                Worker[number]->show();

//            }
//            if (seconds5 == 20 ){
//                 basket[number]->show();
//                 milk[number]->show();
//                 milk[number]->setStyleSheet("");
//                 milk[number]->setStyleSheet("border-image: url(:/new/prefix1/imagfil/milk-bucket-7808176-6347464.webp)");
//                 seconds5 = 0;
//                 cultivations = "0";
//                 if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
//                     stream2 << cultivations;
//                     cultivation.close();
//                 }else{
////                     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
//                 }
//            }
//        }




    }



