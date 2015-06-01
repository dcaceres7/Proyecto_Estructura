#include "Cola.h"

Cola::Cola()
{

}

void Cola::ponerCola(int valor){
    Nodo *n=new Nodo();
    n->valor=valor;
    if(frente==NULL){
        frente=n;
        ultimo=n;
        return;
    }
    ultimo->anterior=n;
    ultimo=n;
}

 int Cola::quitarCola(){
     if(frente){
         Nodo *temp=frente;
         int valor=temp->valor;
         frente=frente->anterior;
         delete temp;
         return valor;
     }
     return -1;
 }

void Cola::anular(){
    int quitarc;
    do{
        quitarc=quitarCola();
    }while(quitarc!=-1);
}

Nodo* Cola::getFrente(){
    return frente;
}

bool Cola::vacia(){
    if(frente)
       return false;
    return true;
}

