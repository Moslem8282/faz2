#ifndef MLAND_H
#define MLAND_H

#include <QMainWindow>
#include <QMediaPlayer>
//#include <QTime>
//#include <QTimer>
//#include <QElapsedTimer>

namespace Ui {
class mland;
}

class mland : public QMainWindow
{
    Q_OBJECT

public:
    explicit mland(QWidget *parent = nullptr);
    ~mland();

private slots:
    void on_toolButton_clicked();

//    void on_pushButton_5_clicked();

//    void updateTime();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::mland *ui;
    QMediaPlayer *player = new
    QMediaPlayer;
    int number=0;
//    QTimer *timer;
//    QElapsedTimer elapsedTimer;
};

#endif // MLAND_H
