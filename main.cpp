#include "Inicio.h"
#include <QApplication>
#include "Tamagotchi.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inicio w;
    w.show();
    //Tamagotchi tm;
    return a.exec();
}
