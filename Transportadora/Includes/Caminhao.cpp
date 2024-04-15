#include <iostream>
#include <string>
#include "Caminhao.h"
#include "Veiculos.h"

using namespace std;

Caminhao::Caminhao(){
    this->altura = 0.0;
    this->largura = 0.0;
    this->comprimento = 0.0;
    this->m3 = 0.0;
}

Caminhao::Caminhao(int cap, int ano, string Vchassi, string modelo, string localizacao, 
float c_altura, float c_largura, float c_comprimento, float LA[3], float LO[3]) :Veiculos(cap, ano, Vchassi, modelo, localizacao, LA, LO){
    setAltura(c_altura);
    setLargura(c_largura);
    setComprimento(c_comprimento);
    setM3();
    setItens(20);
}

Caminhao::~Caminhao(){}

int Caminhao::setAltura(float c_altura) {
    this->altura = c_altura;
    return 1;
}

float Caminhao::getAltura() {
    return this->altura;
}

int Caminhao::setLargura(float c_largura){
    this->largura = c_largura;
    return 1;
}

float Caminhao::getLargura() {
    return this->largura;
} 

int Caminhao::setComprimento(float c_comprimento){
    this->comprimento = c_comprimento;
}

float Caminhao::getComprimento() {
    return this->comprimento;
}  

int Caminhao::setM3(){
    float metros = this->altura*this->largura*this->comprimento;
    this->m3 = metros;
    return 1;
}

float Caminhao::getM3() {
    return this->m3;
}

ostream& operator<<(ostream& out, Caminhao *caminhao) {
    out << "Capacidade: " << caminhao->getCapacidade() << 
    "\nModelo: " << caminhao->getModelo() << 
    "\nAno: " << caminhao->getAno() << 
    "\nChassi: " << caminhao->getChassi() << 
    "\nLocalizacao: " << caminhao->getLocalizacao() <<
    "\nAltura: " << caminhao->getAltura() <<
    "\nLargura: " << caminhao->getLargura() <<
    "\nComprimento: " << caminhao->getComprimento() <<
    "\nMetros Cubicos: " << caminhao->getM3(); 
    return out;
}
