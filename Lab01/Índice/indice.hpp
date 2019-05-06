#ifndef INDICE_H
#define INDICE_H

#include <iostream>
#include <string>
#include <map>
#include <iomanip>

struct Indice {
    std::string palavras;
    std::map <std::string, int> contPalavras;
    
    void separarPalavras();
    int contarPalavras();
    void imprimirPalavras();
};

#endif