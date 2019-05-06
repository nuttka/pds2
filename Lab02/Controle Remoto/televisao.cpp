#include "Televisao.hpp"
#include <iostream>

Televisao::Televisao(){}

void Televisao::setCanal(int channel){
    if(channel > 99){
        while(channel > 99){
            channel -= 99;
        }
        this->canal = channel - 1;
    }else if(channel < 0){
        while(channel < 0){
            channel += 99;
        }
        this->canal = channel + 1;
    }else{
        this->canal = channel;
    }
}

void Televisao::setVolume(int sound){
    if(sound > 20){
        this->volume = 20;
    }else if(sound < 0){
        this->volume = 0;
    }else{
        this->volume = sound;
    }
}

int Televisao::getCanal(){
    return this->canal;
}

int Televisao::getVolume(){
    return this->volume;
}