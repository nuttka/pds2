#include "Classes.hpp"

void ClasseBase::set_var_public(int x){
    this->var_public = x;
}
void ClasseBase::set_var_private(int z){
    this->var_private = z;
}
void ClasseBase::set_var_protected(int y){
    this->var_protected = y;
}
void ClasseBase::get_var_public(){
    std::cout << this->var_public << std::endl;
}
void ClasseBase::get_var_private(){
    std::cout << this->var_private << std::endl;
}
void ClasseBase::get_var_protected(){
    std::cout << this->var_protected << std::endl;
}



void ClassePublica::set_var_public(int x){
    this->var_public3 = x;
}

void ClassePublica::set_var_private(int x){
    this->var_private3 = x;
}

void ClassePublica::set_var_protected(int x){
    this->var_protected = x;
}

int ClassePublica::get_var_public(){
    return this->var_public3;
}

void ClassePublica::get_var_private(){
    std::cout << "Inacessivel." << std::endl;
}

void ClassePublica::get_var_protected(){
    std::cout << "Inacessivel." << std::endl;
}

void ClassePublica::get_var_publicHerdada(){
    std::cout << this->var_public << std::endl;
}

void ClassePublica::get_var_privateHerdada(){
    std::cout << "Inacessivel." << std::endl;
}
void ClassePublica::get_var_protectedHerdada(){
    std::cout << this->var_protected << std::endl;
}


void ClassePrivada::set_var_publicPri(int y){
    this->set_var_public(y);
}

void ClassePrivada::set_var_privatePri(int y){
    this->set_var_private(y);
}

void ClassePrivada::set_var_protectedPri(int y){
    this->set_var_protected(y);
}

void ClassePrivada::get_var_publicHerdada(){
    std::cout << this->var_public << std::endl;
}
void ClassePrivada::get_var_privateHerdada(){
    std::cout << "Inacessivel." << std::endl;
}
void ClassePrivada::get_var_protectedHerdada(){
    std::cout << this->var_protected << std::endl;
}  



void OverloadPrivada::set_var_privateOver(int x){
    this->var_private = x;
}
void OverloadPrivada::set_var_publicOver(int x){
    this->var_public = x;
}
void OverloadPrivada::set_var_protectedOver(int x){
    this->var_protected = x;
}   

void OverloadPrivada::get_var_publicHerdada(){
    std::cout << this->var_public << std::endl;
}
void OverloadPrivada::get_var_privateHerdada(){
    std::cout << this->var_private << std::endl;
}
void OverloadPrivada::get_var_protectedHerdada(){
    std::cout << this->var_protected << std::endl;
}



void A2::set_var_publicA2(int x){
    this->set_var_public(x);
}
void A2::set_var_privateA2(int x){
    this->set_var_private(x);
}
void A2::set_var_private2(int x){
    this->var_private2 = x;
}
void A2::set_var_protectedA2(int x){
    this->set_var_protected(x);
}
void A2::set_var_protected2(int x){
    this->var_protected2 = x;
}

void A2::get_var_publicA2(){
    std::cout << this->var_public << std::endl;
}
void A2::get_var_privateA2(){
    std::cout << "Inacessivel." << std::endl;
}
void A2::get_var_private2(){
    std::cout << this->var_private2 << std::endl;
}
void A2::get_var_protectedA2(){
    std::cout << this->var_protected << std::endl;
}
void A2::get_var_protected2(){
    std::cout << this->var_protected2 << std::endl;
}


void A3::set_var_public(int x){

}
void A3::set_var_private(int x){

}
void A3::set_var_protected(int x){

}

void A3::set_var_public2(int x){
    this->var_public2 = x;
}
void A3::set_var_private2(int x){

}
void A3::set_var_protected2(int x){
    this->var_protected2 = x;
}
void A3::set_var_private3(int x){
    this->var_private3 = x;
}
void A3::set_var_protected3(int x){
    this->var_protected3 = x;
}
void A3::get_var_publicA3(){
    std::cout << "Inacessivel." << std::endl;
}
void A3::get_var_privateA3(){
    std::cout << "Inacessivel." << std::endl;
}
void A3::get_var_protectedA3(){
    std::cout << "Inacessivel." << std::endl;
}
void A3::get_var_public2(){
    std::cout << this->var_public2 << std::endl;
}
void A3::get_var_private2(){
    std::cout << "Inacessivel." << std::endl;
}
void A3::get_var_protected2(){
    std::cout << this->var_protected2 << std::endl;
}
void A3::get_var_private3(){
    std::cout << this->var_private3 << std::endl;
}
void A3::get_var_protected3(){
    std::cout << this->var_protected3 << std::endl;
}