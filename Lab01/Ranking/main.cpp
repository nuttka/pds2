#include "Estudante.hpp"
#include <iostream>
#include <iomanip>

#define size 10

int main(){
    Estudante alunos[size];
    int i, j;
    Estudante melhoresAlunos[3];
    
    // Recebendo os dados dos 10 alunos;
    for(i=0; i<size; i++){
        std::cin >> alunos[i].matricula;
        std::cin >> alunos[i].nome;
        for (j=0; j<5; j++){
            std::cin >> alunos[i].notas[j];
        }
    }
    
    // Alocando o melhor aluno
    for (i=0; i<size; i++){
        if (alunos[i].calcularRSG() > melhoresAlunos[0].calcularRSG()){
            melhoresAlunos[2] = melhoresAlunos[1];
            melhoresAlunos[1] = melhoresAlunos[0];
            melhoresAlunos[0] = alunos[i];
        } else if (alunos[i].calcularRSG() == melhoresAlunos[0].calcularRSG()){
            if (alunos[i].matricula < melhoresAlunos[0].matricula){
                melhoresAlunos[2] = melhoresAlunos[1];
                melhoresAlunos[1] = melhoresAlunos[0];
                melhoresAlunos[0] = alunos[i];
            } else {
                melhoresAlunos[2] = melhoresAlunos[1];
                melhoresAlunos[1] = alunos[i];
            }
        } else {
            continue;
        }
    }
    
    // Alocando o segundo melhor aluno
    for (i=0; i<size; i++){
        if (alunos[i].calcularRSG() > melhoresAlunos[1].calcularRSG()){
            if (alunos[i].nome != melhoresAlunos[0].nome){
                melhoresAlunos[2] = melhoresAlunos[2];
                melhoresAlunos[1] = alunos[i];
            }
        } else if (alunos[i].calcularRSG() == melhoresAlunos[2].calcularRSG()){
            if(alunos[i].nome != melhoresAlunos[0].nome){
                if (alunos[i].matricula < melhoresAlunos[2].matricula){
                    melhoresAlunos[2] = melhoresAlunos[2];
                    melhoresAlunos[1] = alunos[i];
                } else {
                    melhoresAlunos[2] = alunos[i];
                }
            }
        } else {
            continue;
        }
    }
    
    // Alocando o terceiro melhor aluno
    for (i=0; i<size; i++){
        if (alunos[i].calcularRSG() > melhoresAlunos[2].calcularRSG()){
            if ((alunos[i].nome != melhoresAlunos[0].nome) && (alunos[i].nome != melhoresAlunos[1].nome)){
                melhoresAlunos[2] = alunos[i];
            }
        } else if (alunos[i].calcularRSG() == melhoresAlunos[2].calcularRSG()){
            if((alunos[i].nome != melhoresAlunos[0].nome) && (alunos[i].nome != melhoresAlunos[1].nome)){
                if (alunos[i].matricula < melhoresAlunos[2].matricula){
                    melhoresAlunos[2] = alunos[i];
                } else {
                    continue;
                }
            }
        } else {
            continue;
        }
    }
    
    // Expondo os melhores
    for(i=0; i<3; i++){
        std::cout << melhoresAlunos[i].matricula << " ";
        std::cout << melhoresAlunos[i].nome << " ";
        std::cout << std::fixed;
        std::cout << std::setprecision(2) << melhoresAlunos[i].calcularRSG();
        std::cout << std::endl;
    }
    
    return 0;
}