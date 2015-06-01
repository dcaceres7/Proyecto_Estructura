#include "mytimer.h"

MyTimer::MyTimer()
{
    tm=new Tamagotchi();
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(mySlot()));
    timer->start(2000);
}

void MyTimer::mySlot(){
    tm->aumentarDano(1);
}
