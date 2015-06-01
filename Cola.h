#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

class Cola
{
public:
    Nodo *frente,*ultimo;
    void ponerCola(int valor);
    int quitarCola();
    void anular();
    Nodo *getFrente();
    bool vacia();
    Cola();
};

#endif // COLA_H
