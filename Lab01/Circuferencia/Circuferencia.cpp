#include "Circunferencia.hpp"
#include <cmath>

Circunferencia::Circunferencia(double xc, double yc, double raio){
  this->xc = xc;
  this->yc = yc;
  this->raio = raio;
}

double Circunferencia::calcularArea(){
  return PI * pow(raio,2);
}

bool Circunferencia::possuiIntersecao(Circunferencia* c){
  double somaRaios = c->raio + raio;
  double parteCalc1 = pow((xc - c->xc), 2);
  double parteCalc2 = pow((yc - c->yc), 2);
  double resultado = sqrt(parteCalc1 + parteCalc2);
  if (somaRaios >= resultado){
      return true;
  }
  return false;
}