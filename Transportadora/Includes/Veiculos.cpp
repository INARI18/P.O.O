#include "Veiculos.h"
#include <iostream>
#include <cctype> // tolower

using namespace std; // simplifica a sintaxe do código

// Veiculos:: serve para indicar a classe a qual a funçao pertence

int Veiculos::setTipo(string tipo) {
    for (auto &letra : tipo) { // referência e loop range-based
        letra = tolower(letra); // a referência recebe a versão minuscula e modifica o valor dentro da string
    }

    if (tipo == "carro" || tipo == "caminhonete" || tipo == "caminhao") {
        this->tipo = tipo;
        return 1;
    } 

    return 0;
}

string Veiculos::getTipo() {
    if (setTipo(tipo)) {
        return tipo; 
    }     
    
    return "0"; 
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