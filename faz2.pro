QT       += core gui sql
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    butcher.cpp \
    chicken.cpp \
    cow.cpp \
    finish.cpp \
    hous.cpp \
    land.cpp \
    main.cpp \
    mland.cpp \
    page1.cpp \
    page2.cpp \
    sheep.cpp \
    shop.cpp \
    time_land.cpp \
    worker.cpp

HEADERS += \
    butcher.h \
    chicken.h \
    cow.h \
    finish.h \
    hous.h \
    land.h \
    mland.h \
    page1.h \
    page2.h \
    sheep.h \
    shop.h \
    time_land.h \
    worker.h

FORMS += \
    butcher.ui \
    chicken.ui \
    cow.ui \
    finish.ui \
    hous.ui \
    land.ui \
    mland.ui \
    page1.ui \
    page2.ui \
    sheep.ui \
    shop.ui \
    worker.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    finishpag.qrc \
    gif.qrc \
    hous.qrc \
    imags.qrc \
    look.qrc \
    strrt.qrc
