#include "Solid.hpp"

Solid::Solid(double raio, double altura, double larguraBase, std::string tipoSolido){
    this->raio = raio;
    this->altura = altura;
    this->larguraBase = larguraBase;
    this->tipoSolido = tipoSolido;
}
std::string Solid::getType(){
    return this->tipoSolido;
}
double Solid::getVolume(){
    return 0;
}
double Solid::getArea(){
    return 0;
}

Cylinder::Cylinder(double raio, double altura, double larguraBase, std::string tipoSolido) : Solid::Solid(raio, altura, larguraBase, tipoSolido){
    this->raio = raio;
    this->altura = altura;
    this->larguraBase = larguraBase;
    this->tipoSolido = tipoSolido;
}

std::string Cylinder::getType(){
    return this->tipoSolido;
}
double Cylinder::getVolume(){
    return this->pi*this->raio*this->raio*this->altura;
}
double Cylinder::getArea(){
    return 2*(this->pi*this->raio*this->raio)+(this->pi*2.0*this->raio*this->altura);
}

Sphere::Sphere(double raio, double altura, double larguraBase, std::string tipoSolido) : Solid::Solid(raio, altura, larguraBase, tipoSolido){
    this->raio = raio;
    this->altura = altura;
    this->larguraBase = larguraBase;
    this->tipoSolido = tipoSolido;
}
std::string Sphere::getType(){
    return this->tipoSolido;
}
double Sphere::getVolume(){
    return (this->pi*4.0*this->raio*this->raio*this->raio)/3.0;
}
double Sphere::getArea(){
    return 4*this->pi*this->raio*this->raio;
}

Cube::Cube(double raio, double altura, double larguraBase, std::string tipoSolido) : Solid::Solid(raio, altura, larguraBase, tipoSolido){
    this->raio = raio;
    this->altura = altura;
    this->larguraBase = larguraBase;
    this->tipoSolido = tipoSolido;
}
std::string Cube::getType(){
    return this->tipoSolido;
}
double Cube::getVolume(){
    return this->larguraBase*this->larguraBase*this->larguraBase;
}
double Cube::getArea(){
    return 6*this->larguraBase*this->larguraBase;
}