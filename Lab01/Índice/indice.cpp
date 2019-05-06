#include "Indice.hpp"
#include <iostream>
#include <string>
#include <map>
#include <iomanip>

void Indice::separarPalavras(){
    std::map <std::string, int>::iterator it;
    std::string aux = "";
    int i, cont = 0, check = 0;
    int tamanho = this->palavras.size();
    
    for(i=0; i<tamanho; i++){
        if(this->palavras[i] != 32){     //32 é o espaço 
            aux += this->palavras[i];
            cont += 1;
        }else{
            if(cont > 2){       //3 ou mais caracteres
                check = contPalavras.count(aux);        //checando numero de vezes que essa palavra aparece
                if(check == 0){     //se nunca apareceu, inserimos a key
                    this->contPalavras.insert(std::pair <std::string, int> (aux, 1));
                }
                if(check > 0){      //se existe, adicionamos 1 na quantidade de vezes que aparece
                    it = this->contPalavras.find(aux);
                    it->second += 1;
                }
            }
            cont = 0;
            aux = "";
        }
    }
}

int Indice::contarPalavras(){
    int i, numPalavras = 0;
    int tamanho = this->palavras.size();
    
    if(this->palavras[0] == 32){        //alguns textos começam com espaço
        numPalavras = -1;
    }
    
    for(i=0; i<tamanho; i++){
        if(this->palavras[i] != 32){     //32 é o espaço 
            continue;
        }else{
            numPalavras += 1;
        }
    }
    return numPalavras;
}

void Indice::imprimirPalavras(){
    double porcentagem;
    
    for(auto it = this->contPalavras.cbegin(); it != this->contPalavras.cend(); ++it){        //percorrendo o map
        porcentagem = double(it->second)/double(this->contarPalavras());
        
        std::cout << std::fixed << std::setprecision(2);
        std::cout << it->first << " " << it->second << " " << porcentagem << std::endl;
    }
}