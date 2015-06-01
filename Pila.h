#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Pila
{
public:
    int size;
    Nodo *tope;
    Nodo *obj;
    int getTope();
    bool sacar();
    void anular();
    void meter(int valor);
    bool vacia();
    Nodo* getNodo();
    Pila();
};

#endif // PILA_H
