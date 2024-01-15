#ifndef PAGE2_H
#define PAGE2_H
#include <QTime>
#include <QTimer>
#include <QMainWindow>
#include <QElapsedTimer>
#include "QMap"
#include "QPushButton"
#include "QLabel"
namespace Ui {
class page2;
}

class page2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page2(QWidget *parent = nullptr);

    ~page2();

private slots:
    void updateTime();

//    void lands(int number , QString cultivations);

//    void updatewheat();

//    void updatecorn();

//    void updatecow();

//    void updatesheep();

//    void updatechicken();

    void refresh();

    void outcoin(int coin);

    int incoin();

    int incoin(QString fils);

    void outfil(QString fils , int coin);

    void basketss(int pric);

    void on_pushButton_3_clicked();

    void on_pushButton__clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_basket_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Butcher_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_look_2_clicked();

    void on_pushButton_look_3_clicked();

    void on_pushButton_look_4_clicked();

    void on_pushButton_look_5_clicked();

    void on_pushButton_look_6_clicked();

    void on_pushButton_look_7_clicked();

    void on_pushButton_look_8_clicked();

    void on_pushButton_look_9_clicked();

    void on_pushButton_look_10_clicked();

    void on_pushButton_look_11_clicked();

    void on_pushButton_look_12_clicked();

    void on_pushButton_look_13_clicked();

    void on_pushButton_look_14_clicked();

private:
    Ui::page2 *ui;
    QTimer *timer;
    QElapsedTimer elapsedTimer;
    QElapsedTimer elapsedwheat;
    int sw = 0;
    int play = 1;
    int pos=0;
    int number[7][2];


};

#endif // PAGE2_H
