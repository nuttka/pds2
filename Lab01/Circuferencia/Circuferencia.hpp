#ifndef PI
#define PI 3.14
#endif

#include <cmath>
#include <iostream>

struct Circunferencia {
  double xc;
  double yc;
  double raio;
  
  Circunferencia(double xc, double yc, double raio);
  double calcularArea();
  bool possuiIntersecao(Circunferencia* circ1);
};