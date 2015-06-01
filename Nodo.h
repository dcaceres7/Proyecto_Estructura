#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
public:
    int valor;
    Nodo *anterior;
    Nodo(int valor);
    Nodo();
};

#endif // NODO_H
