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
    this->carga = "";  
}

Caminhao::Caminhao(int cap, int ano, string Vchassi, string modelo, string localizacao, 
float c_altura, float c_largura, float c_comprimento, string c_carga) :Veiculos(cap, ano, Vchassi, modelo, localizacao){
    setAltura(c_altura);
    setLargura(c_largura);
    setComprimento(c_comprimento);
    setM3();
    setCarga(c_carga);
}

Caminhao::~Caminhao(){}

int Caminhao::setAltura(float c_altura) {
    this->altura = c_altura;
    return 1;
}

float Caminhao::getAltura(){
    return this->altura;
}

int Caminhao::setLargura(float c_largura){
    this->largura = c_largura;
    return 1;
}

float Caminhao::getLargura(){
    return this->largura;
} 

int Caminhao::setComprimento(float c_comprimento){
    this->comprimento = c_comprimento;
}

float Caminhao::getComprimento(){
    return this->comprimento;
}  

int Caminhao::setM3(){
    float metros = this->altura*this->largura*this->comprimento;
    this->m3 = metros;
    return 1;
}

float Caminhao::getM3(){
    return this->m3;
}

int Caminhao::setCarga(string c_carga) {
    this->carga = c_carga;
    return 1;
}
string Caminhao::getCarga() {
    return this->carga;
}