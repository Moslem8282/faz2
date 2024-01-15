#include "mland.h"
#include "ui_mland.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "time_land.h"
mland::mland(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mland)
{
    ui->setupUi(this);
    player->setMedia(QUrl::fromLocalFile("D:/faz2/faz2/musicfil/lansvoic.mp3"));
    player->setVolume(100);
    player->play();
    int number_of_land;
    QFile land("D:/faz2/faz2/fils/number_of_land.txt");
    QTextStream in(&land);
    if(land.open(QIODevice::ReadOnly | QIODevice::Text)){
        in >> number_of_land;
        land.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->lineEdit_land->setText(QString::number(number_of_land));
    int number_of_wheat = 0;
    QFile wheat("D:/faz2/faz2/fils/number_of_wheat.txt");
    QTextStream stream(&wheat);
    if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream >> number_of_wheat;
        wheat.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->label_wheat->setText(QString::number(number_of_wheat));

    int number_of_cron = 0;
    QFile cron("D:/faz2/faz2/fils/number_of_cron.txt");
    QTextStream stream1(&cron);
    if(cron.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> number_of_cron;
        cron.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->label_corn->setText(QString::number(number_of_cron));
    int number_of_cow = 0;
    QFile cow("D:/faz2/faz2/fils/number_of_cow.txt");
    QTextStream stream2(&cow);
    if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_cow;
        cow.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->label_cow->setText(QString::number(number_of_cow));
    int number_of_sheep = 0;
    QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");
    QTextStream stream3(&sheep);
    if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream3 >> number_of_sheep;
        sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->label_sheep->setText(QString::number(number_of_sheep));
    int number_of_chicken = 0;
    QFile chicken("D:/faz2/faz2/fils/number_of_chicken.txt");
    QTextStream stream4(&chicken);
    if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream4 >> number_of_chicken;
        chicken.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    ui->label_chicken->setText(QString::number(number_of_chicken));
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

    QFile wheat("D:/faz2/faz2/fils/number_of_wheat.txt");
    QTextStream stream7(&wheat);
    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QTextStream stream2(&worker);
    int number_of_worker=0;
    int workerlans=0;
    int number_of_wheat = 0;
    if(wheat.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream7 >> number_of_wheat;
        wheat.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(number_of_wheat>0 && number_of_worker > workerlans){
        QString cultivations="wheat";
        number_of_wheat--;
        workerlans++;
        ui->label_corn->setText(QString::number(number_of_wheat));
        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << workerlans;
            workerlan.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        QString baskets="wheat";
         QFile basket("D:/faz2/faz2/fils/basket.txt");
         QTextStream stream1(&basket);
         if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
               stream1 << baskets;
               basket.close();
         }else{
             QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
         }



         QFile numbers("D:/faz2/faz2/fils/number.txt");
         QTextStream stream6(&numbers);
         if(numbers.open(QIODevice::ReadOnly | QIODevice::Text)){
               stream6 >> number;
               numbers.close();
         }else{
             QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
         }
             time_land* f[14];
             for(int i=0; i<14 ; i++){
                 f[i]=new time_land;
             }
//         f[0]->getUI()->pushButton_12->setEnabled(false);

    }
    else{
        QMessageBox::warning(this,"EROR","You don't have enough wheat or worker");                        // Declaring an error in terms of the number of wheat
    }
            if(wheat.open(QIODevice::WriteOnly | QIODevice::Text)){
                  stream7 << number_of_wheat;
                  wheat.close();
            }else{
                QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
            }
}


void mland::on_pushButton_clicked()
{
    QFile corn("D:/faz2/faz2/fils/number_of_cron.txt");
    QTextStream stream8(&corn);
    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QTextStream stream2(&worker);

    int number_of_worker=0;
    int workerlans=0;
    int number_of_corn = 0;
    if(corn.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_corn;
        corn.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(number_of_corn>0 && number_of_worker > workerlans){
        number_of_corn--;
        ui->label_corn->setText(QString::number(number_of_corn));
        workerlans++;
        QString cultivations="corn";
        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << workerlans;
            workerlan.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        QString baskets="corn";
        QFile basket("D:/faz2/faz2/fils/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough corn or worker");                   // Declaring an error in terms of the number of corn
     }
     if(corn.open(QIODevice::WriteOnly | QIODevice::Text)){
     stream8 << number_of_corn;
     corn.close();
     }else{
     QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
     }
}


void mland::on_pushButton_6_clicked()
{
    QFile cow("D:/faz2/faz2/fils/number_of_cow.txt");
    QTextStream stream8(&cow);
    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QTextStream stream2(&worker);

    int number_of_worker=0;
    int workerlans=0;
    int number_of_cow = 0;
    if(cow.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_cow;
        cow.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(number_of_cow>0 && number_of_worker > workerlans){
        ui->label_cow->setText(QString::number(number_of_cow));
        workerlans++;
        QString cultivations="cow";
        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << workerlans;
            workerlan.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        QString baskets="cow";
        QFile basket("D:/faz2/faz2/fils/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough cow or worker");                  // Declaring an error in terms of the number of cow
     }
    if(cow.open(QIODevice::WriteOnly | QIODevice::Text)){
          stream8 << number_of_cow;
          cow.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
}


void mland::on_pushButton_7_clicked()
{
    QFile chicken("D:/faz2/faz2/fils/number_of_chicken.txt");
    QTextStream stream8(&chicken);
    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QTextStream stream2(&worker);

    int number_of_worker=0;
    int workerlans=0;
    int number_of_chicken= 0;
    if(chicken.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_chicken;
        chicken.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(number_of_chicken>0 && number_of_worker > workerlans){
        ui->label_chicken->setText(QString::number(number_of_chicken));
        workerlans++;
        QString cultivations="chicken";
        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << workerlans;
            workerlan.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        QString baskets="chicken";
        QFile basket("D:/faz2/faz2/fils/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough chicken or worker");                  // Declaring an error in terms of the number of chicken
     }
    if(chicken.open(QIODevice::WriteOnly | QIODevice::Text)){
          stream8 << number_of_chicken;
          chicken.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
}


void mland::on_pushButton_10_clicked()
{
    QFile sheep("D:/faz2/faz2/fils/number_of_sheep.txt");
    QTextStream stream8(&sheep);
    QFile workerlan("D:/faz2/faz2/fils/workerlan.txt");
    QTextStream stream1(&workerlan);
    QFile worker("D:/faz2/faz2/fils/number_of_worker.txt");
    QTextStream stream2(&worker);

    int number_of_worker=0;
    int workerlans=0;
    int sheeplan=0;
    QFile sheeplans("D:/faz2/faz2/fils/sheeplan.txt");
    QTextStream stream9(&sheeplans);
    if(sheeplans.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream9 >> sheeplan;
        sheeplans.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    int number_of_sheep= 0;
    if(sheep.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream8 >> number_of_sheep;
        sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(workerlan.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream1 >> workerlans;
        workerlan.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(worker.open(QIODevice::ReadOnly | QIODevice::Text)){
        stream2 >> number_of_worker;
        worker.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
    if(number_of_sheep>0 && number_of_worker > workerlans){
        sheeplan++;
        ui->label_sheep->setText(QString::number(number_of_sheep));
        workerlans++;
        QString cultivations="sheep";
        QFile cultivation("D:/faz2/faz2/fils/cultivation.txt");
        QTextStream stream2(&cultivation);
        if(cultivation.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream2 << cultivations;
            cultivation.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(workerlan.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << workerlans;
            workerlan.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        QString baskets="sheep";
        QFile basket("D:/faz2/faz2/fils/basket.txt");
        QTextStream stream1(&basket);
        if(basket.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream1 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
        if(sheeplans.open(QIODevice::WriteOnly | QIODevice::Text)){
            stream9 << baskets;
            basket.close();
        }else{
            QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
        }
    }else{
        QMessageBox::warning(this,"EROR","You don't have enough sheep or worker");                   // Declaring an error in terms of the number of sheep
     }
    if(sheep.open(QIODevice::WriteOnly | QIODevice::Text)){
          stream8 << number_of_sheep;
          sheep.close();
    }else{
        QMessageBox::warning(this,"EROR","The file could not be opened");                   // If the file is not opened, it will give an error
    }
}


