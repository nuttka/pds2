#include <iostream>
#include <string>

#include "Televisao.hpp"
#include "Controle.hpp"

void lerComandos(std::string aux, Televisao *tv, Controle *controle){
    char parametro[2];
    
    if(aux.size()>2){
         if(aux[1] == 'C'){
            parametro[0] = aux[3];
            parametro[1] = aux[4];
            int converter = std::atoi(parametro);
            
            controle->setCanal(converter);
        }else if(aux[1] == 'V'){
            parametro[0] = aux[3];
            parametro[1] = aux[4];
            int converter = std::atoi(parametro);
            
            controle->setVolume(converter);
        }
    }else if(aux == "MC"){
        std::cout << tv->getCanal() << "\n";
    }else if(aux == "MV"){
        std::cout << tv->getVolume() << "\n";
    }else if(aux == "AC"){
        controle->aumentaCanal();
    }else if(aux == "AV"){
        controle->aumentaVolume();
    }else if(aux == "DC"){
        controle->diminuiCanal();
    }else if(aux == "DV"){
        controle->diminuiVolume();
    }
    
}

int main(){
    
    Televisao* tv = new Televisao();
    Controle* controle = new Controle(tv);
    std::string aux;
    
    while(getline(std::cin, aux)){
        lerComandos(aux, tv, controle);
    }
    
    delete tv;
    delete controle;
    
    return 0;
}