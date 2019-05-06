#include "Controle.hpp"
#include "Televisao.hpp"
#include <iostream>

Controle::Controle(Televisao *t){
    // if(tv == nullptr){
    //     throw runtime_error("Invalid pointer");
    // }
    tv = t;
};

void Controle::aumentaCanal(){
    if(tv->getCanal() == 99){
        tv->setCanal(0);
    }else{
        int aux = tv->getCanal();
        tv->setCanal(aux + 1);
    }
}

void Controle::aumentaVolume(){
    if(tv->getVolume() == 20){
        return;
    }else{
        int aux = tv->getVolume();
        tv->setVolume(aux + 1);
    }
}

void Controle::diminuiCanal(){
    if(tv->getCanal() == 0){
        tv->setCanal(99);
    }else{
        int aux = tv->getCanal();
        tv->setCanal(aux - 1);
    }
}

void Controle::diminuiVolume(){
    if(tv->getVolume() == 0){
        return;
    }else{
        int aux = tv->getVolume();
        tv->setVolume(aux - 1);
    }
}

void Controle::setCanal(int c){
    tv->setCanal(c);
}

void Controle::setVolume(int v){
    tv->setVolume(v);
}