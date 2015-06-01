#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H
#include <ctime>
#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include <stdlib.h>
#include <QTimer>
using namespace std;

class Tamagotchi
{
public:
        //QTimer *timer;
        int contador;
        int vidas,comida,sueno,desechos,medicina;
        Pila *PilaComida,*PilaSueno,*PilaDesechos,*PilaMedicina;
        Cola *ColaCoinGanada,*ColaCoinRecibida;
        //void aumentarDano(int resistencia);
        void quitarHambre();
        void quitarSueno();
        void quitarDesechos();
        void quitarEnfermedad();
        void ganarCoin();
        Nodo *getNodoHambre();
        Nodo *getNodoSueno();
        Nodo *getNodoDesechos();
        Nodo *getNodoEnfermedad();
        int regalarCoin();
        int getcoinRecibida();
        void setCoinRecibida(int coin);
        Tamagotchi();
        void aumentarDano(int resistencia);
};

#endif // TAMAGOTCHI_H
