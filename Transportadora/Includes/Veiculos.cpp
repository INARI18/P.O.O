#include "Veiculos.h"
#include <iostream>
#include <cctype> // tolower

using namespace std; // simplifica a sintaxe do código

// Veiculos:: serve para indicar a classe a qual a funçao pertence

void Veiculos::setTipo(string tipo) {
    for (auto &letra : tipo) { // referência e loop range-based
        letra = tolower(letra); // a referência recebe a versão minuscula e modifica o valor dentro da string
    }

    if (tipo == "carro" || tipo == "caminhonete" || tipo == "caminhao") {
        this->tipo = tipo;
    } else {
        this->tipo = "Erro!";
    }
}

string Veiculos::getTipo() {
    return tipo;
}

void Veiculos::setCapacidade(int cap) {
    capacidade = cap;
}

int Veiculos::getCapacidade() {
    return capacidade;
}

void Veiculos::setAno(int ano) {
    this->ano = ano;
}

int Veiculos::getAno() {
    return ano;
}

void Veiculos::setChassi(string chassi) {
    this->chassi = chassi;
}

string Veiculos::getChassi(){
    return chassi;
}

void Veiculos::setModelo(string modelo) {
    this->modelo = modelo;
}

string Veiculos::getModelo() {
    return modelo;
}

void Veiculos::setLocalizacao(string localizacao) {
    this->localizacao = localizacao;
}

string Veiculos::getLocalizacao(){
    return localizacao;
}
