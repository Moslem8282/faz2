#ifndef TIME_LAND_H
#define TIME_LAND_H
#include <QObject>
#include "ui_page2.h"


class time_land : public QObject
{
    Q_OBJECT
public:

    void get_number(int Number){
        number=Number;
    }
    time_land(Ui::page2 *ui,QObject *parent = nullptr);
    Ui::page2* getUI() const {return m_ui;}


    time_land(){
    }
private slots:

private:
    Ui::page2 *m_ui;
    int number;
};

#endif // TIME_LAND_H
