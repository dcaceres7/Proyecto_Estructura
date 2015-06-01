#ifndef MYTIMER_H
#define MYTIMER_H
#include <QTimer>
#include "Tamagotchi.h"

class MyTimer: public QObject
{
    Q_OBJECT
public:
    MyTimer();
    Tamagotchi *tm;
    QTimer *timer;
public slots:
    void mySlot();
};

#endif // MYTIMER_H
