#include "Tamagotchi.h"

Tamagotchi::Tamagotchi(){
    contador=0;
    vidas=100;
    comida=0;
    sueno=0;
    desechos=0;
    medicina=0;
    PilaComida=new Pila();
    PilaSueno=new Pila();
    PilaDesechos=new Pila();
    PilaMedicina=new Pila();
}



void Tamagotchi::aumentarDano(int resistencia){
    cout<<"entro AumentarDano "<<endl;
    bool continuar=true;
    do{
    srand(time(0));
    int dano=1+(rand()%4);
    switch(dano){
        case 1:
            if(comida<=4){
                comida+=1;
                cout<<"Comida: "<<comida<<endl;
                //cout<<"COMIDA:      "<<PilaComida->getTope()<<endl;
                PilaComida->meter(comida);
                continuar=false;
            }
            if(resistencia==0)
                vidas-=2;
            else
                vidas-=5;
            break;
        case 2:
            if(sueno<=4){
                sueno+=1;
                cout<<"Sueno: "<<sueno<<endl;
                PilaSueno->meter(sueno);
                continuar=false;
            }
            if(resistencia==1)
                vidas-=2;
            else
                vidas-=5;
            break;
        case 3:
            if(desechos<=4){
                desechos+=1;
                cout<<"Desechos: "<<desechos<<endl;
                PilaDesechos->meter(desechos);
                continuar=false;
            }
            if(resistencia==2)
                vidas-=2;
            else
                vidas-=5;
            break;
        case 4:
            if(medicina<=4){
                medicina+=1;
                cout<<"Medicina: "<<medicina<<endl;
                PilaMedicina->meter(medicina);
                continuar=false;
            }
            if(resistencia==3)
                vidas-=2;
            else
                vidas-=5;
            break;

    }
    if(comida==5&&sueno==5&&desechos==5&&medicina==5){
        vidas=0;
        continuar=false;
    }

    /*contador++;
    if(contador==15&&comida<5&&sueno<5&&desechos<5&&medicina<5)
        ganarCoin();*/
    }while(continuar);
}

Nodo* Tamagotchi::getNodoHambre(){
return PilaComida->getNodo();
}


Nodo* Tamagotchi::getNodoSueno(){
return PilaSueno->getNodo();
}

Nodo* Tamagotchi::getNodoDesechos(){
return PilaDesechos->getNodo();
}

Nodo* Tamagotchi::getNodoEnfermedad(){
return PilaMedicina->getNodo();
}

void Tamagotchi::quitarHambre(){
    if(PilaComida!=NULL){
        PilaComida->sacar();
        if(comida>0)
            comida--;
    }
}

void Tamagotchi::quitarSueno(){
    if(PilaSueno!=NULL){
        PilaSueno->sacar();
        if(sueno>0)
            sueno--;
    }
}

void Tamagotchi::quitarDesechos(){
    if(PilaDesechos!=NULL){
        PilaDesechos->sacar();
        if(desechos>0)
            desechos--;
    }
}

void Tamagotchi::quitarEnfermedad(){
    if(PilaMedicina!=NULL){
        PilaMedicina->sacar();
        if(medicina>0)
            medicina--;
    }
}

void Tamagotchi::ganarCoin(){
    int coin=1+(rand()%4);
    cout<<"Coin ganada: "<<coin<<endl;
    ColaCoinGanada->ponerCola(coin);
}

int Tamagotchi::regalarCoin(){
    if(ColaCoinGanada!=NULL){
        int coin=ColaCoinGanada->quitarCola();
        return coin;
    }
    return -1;
}

void Tamagotchi::setCoinRecibida(int coin){
    ColaCoinRecibida->ponerCola(coin);
}

int Tamagotchi::getcoinRecibida(){
    if(ColaCoinRecibida!=NULL){
        int coin=ColaCoinRecibida->quitarCola();
        return coin;
    }
    return -1;
}

