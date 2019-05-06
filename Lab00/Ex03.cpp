#include <iostream>
#include <fstream>
#include <string>


int main() {
  std::string nome;
  std::string linha;
  std::string s_numeros;
  int aux1, aux2;
  int count = 0;

  std::cin >> nome;
  std::ifstream arquivo(nome.c_str());
  if (arquivo.is_open()){

    while(arquivo >> aux2){
      count++;
    }
    int numeros[count];

    arquivo.clear();
    arquivo.seekg(0, std::ios::beg);

    for(aux1 = 0; aux1 < count; aux1++) {
      arquivo >> numeros[aux1];
    }
    for (aux1 = 0; aux1 < count; aux1++) {
      if (numeros[aux1] % 2 == 0)
        std::cout << numeros[aux1] << " ";
    }
    std::cout << std::endl; 
    for (aux1 = 0; aux1 < count; aux1++) {
      if (numeros[aux1] % 2 != 0)
        std::cout << numeros[aux1] << " ";
    }
    std::cout << std::endl;

  }else{
    std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
  }

  arquivo.close();
  return 0;
}