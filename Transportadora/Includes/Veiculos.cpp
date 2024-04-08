#include <iostream>
#include <cctype> // tolower
#include "Veiculos.h"

using namespace std; // simplifica a sintaxe do código

// Veiculos:: serve para indicar a classe a qual a funçao pertence

Veiculos::Veiculos(){
    this->tipo = "";
    this->capacidade = 0;
    this->ano = 0;
    this->chassi = "";
    this->modelo = "";
    this->localizacao = ""; 
}

Veiculos::~Veiculos(){}

int Veiculos::setTipo(string Vtipo) {
    for (auto &letra : Vtipo) { // referência e loop range-based
        letra = tolower(letra); // a referência recebe a versão minuscula e modifica o valor dentro da string
    }

    if (Vtipo != "carro" || Vtipo != "caminhonete" || Vtipo != "caminhao") {
        this->tipo = Vtipo;
        return 1;
    } 

    return 0;
}

string Veiculos::getTipo() {
    if (this->tipo.empty()) {
        return ""; 
    }     
    return tipo; 
}

int Veiculos::setCapacidade(int cap) {
    capacidade = cap;
    return 1;
}

int Veiculos::getCapacidade() {
    return capacidade;
}

int Veiculos::setAno(int ano) {
    this->ano = ano;
    return 1;
}

int Veiculos::getAno() {
    return ano;
}

int Veiculos::setChassi(string chassi) {
    this->chassi = chassi;
    return 1;
}

string Veiculos::getChassi(){
    return chassi;
}

int Veiculos::setModelo(string modelo) {
    this->modelo = modelo;
    return 1;
}

string Veiculos::getModelo() {
    return modelo;
}

int Veiculos::setLocalizacao(string localizacao) {
    this->localizacao = localizacao;
    return 1;
}

string Veiculos::getLocalizacao(){
    return localizacao;
}