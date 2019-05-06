#include "Indice.hpp"
#include <iostream>
#include <string>
#include <map>
#include <iomanip>

int main(){
    Indice* indice = new Indice;
    indice->palavras = "";
    std::string linhas;
    
    while(getline(std::cin, linhas)){
        indice->palavras += linhas;
        indice->palavras += " ";
    }
    
    indice->separarPalavras();
    
    indice->imprimirPalavras();
    
    delete indice;
    
    return 0;
}