#include <iostream>
#include "Caminhao.h"
#include "Veiculos.h"

using namespace std;

Caminhao::Caminhao(){
    this->altura = 0;
    this->carga = "";  
}

Caminhao::Caminhao(int cap, int ano, string chassi, string modelo, string localizacao, float c_altura, string c_carga) 
: Veiculos(cap, ano, chassi, modelo, localizacao){
    setAltura(c_altura);
    setCarga(c_carga);
}

Caminhao::~Caminhao(){}

int Caminhao::setAltura(float c_altura) {
    this->altura = c_altura;
    return 1;
}

float Caminhao::getAltura(){
    return altura;
}

int Caminhao::setCarga(string c_carga) {
    this->carga = c_carga;
    return 1;
}
string Caminhao::getCarga() {
    return carga;
}