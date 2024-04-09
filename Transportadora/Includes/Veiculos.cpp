#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std; // simplifica a sintaxe do código

// Veiculos:: serve para indicar a classe a qual a funçao pertence
Veiculos::Veiculos() {
    this->capacidade = 0.0;
    this->ano = 0;
    this->chassi = "";
    this->modelo = "";
    this->localizacao = "";
}
Veiculos::Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao){
    setCapacidade(cap);
    setAno(ano);
    setChassi(Vchassi);
    setModelo(modelo);
    setLocalizacao(localizacao); 
}

Veiculos::~Veiculos(){}

int Veiculos::setCapacidade(int cap) {
    this->capacidade = cap;
    return 1;
}

int Veiculos::getCapacidade() {
    return this->capacidade;
}

int Veiculos::setAno(int ano) {
    this->ano = ano;
    return 1;
}

int Veiculos::getAno() {
    return this->ano;
}

int Veiculos::setChassi(string Vchassi) {
    if (Vchassi.size() == 17){
        this->chassi = Vchassi;
        return 1;
    }
    return 0;
}

string Veiculos::getChassi(){
    return this->chassi;
}

int Veiculos::setModelo(string modelo) {
    this->modelo = modelo;
    return 1;
}

string Veiculos::getModelo() {
    return this->modelo;
}

int Veiculos::setLocalizacao(string localizacao) {
    this->localizacao = localizacao;
    return 1;
}

string Veiculos::getLocalizacao(){
    return this->localizacao;
}