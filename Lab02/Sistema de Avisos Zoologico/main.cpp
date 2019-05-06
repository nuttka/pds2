#include "Animal.hpp"
#include <iostream>
#include <map>
#include <string>

int main(){
    std::map <std::string, Animal*> animais;
    std::map <std::string, Animal*>::iterator it;
    char leComandos;
    int semana, peso;
    std::string nome;
    
    while(std::cin >> leComandos){
        if(leComandos == 'S'){
            for (it = animais.begin(); it != animais.end(); it++) {
                int tempoPesagem = it->second->getTempoPesagem(semana);
                
                if(tempoPesagem > 1){
                    std::cout << "Semana " << semana << ": Aviso! Animal " << it->second->getNome() << " nao foi pesado por " << tempoPesagem << " semanas." << std::endl;
                }
            }
            std::cin >> semana;
        }else if(leComandos == 'P'){
            std::cin >> nome >> peso;

            if(animais.count(nome) == 0){
                Animal *animal = new Animal;
                animal->setNome(nome);
                animal->setPeso(peso, semana);
                animais.insert(std::pair <std::string, Animal*> (nome, animal));
            }
            for (it = animais.begin(); it != animais.end(); it++) {
                if(it->first == nome){
                     double altPeso = (double)peso/(double)it->second->getPeso();
                    
                    if(altPeso <= 0.9){
                        std::cout << "Semana " << semana << ": Aviso! Animal " << nome << " perdeu 10% ou mais de seu peso." << std::endl;
                    }
                    it->second->setPeso(peso, semana);
                }
            }
        }
    }
    
    for (it = animais.begin(); it != animais.end(); it++) {
        int tempoPesagem = it->second->getTempoPesagem(semana);
        if(tempoPesagem > 1){
            std::cout << "Semana " << semana << ": Aviso! Animal " << it->second->getNome() << " nao foi pesado por " << tempoPesagem << " semanas." << std::endl;
        }
    }
    for (it = animais.begin(); it != animais.end(); it++){
        delete it->second;
    }
    return 0;
}