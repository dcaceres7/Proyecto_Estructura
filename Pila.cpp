#include "Pila.h"

Pila::Pila()
{
    size=0;
}


int Pila::getTope(){
return tope->valor;
}

bool Pila::sacar(){
    if(tope){
        Nodo *t=tope;
        tope=tope->anterior;
        delete t;
        size--;
        return true;
    }
    return false;
}

void Pila::anular(){
    while(sacar());
}

void Pila::meter(int valor){
    obj=new Nodo(valor);
    if(tope)
      obj->anterior=tope;
    tope=obj;
    size++;
}

bool Pila::vacia(){
    if(tope)
        return false;
    return true;
}

Nodo* Pila::getNodo(){
   // for(int i=0;i<size;i++){
   //    cout<<obj->valor<<endl;
   //    obj=obj->anterior;
   // }
    return obj;
}
