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
    this->disponibilidade = 1;
    this->itens = 0;
}

Veiculos::Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao){
    setCapacidade(cap);
    setAno(ano);
    setChassi(Vchassi);
    setModelo(modelo);
    setLocalizacao(localizacao); 
    setDisponibilidade();
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

string Veiculos::getChassi() {
    return this->chassi;
}

int Veiculos::setModelo(string modelo) {
    this->modelo = modelo;
    return 1;
}

string Veiculos::getModelo(){
    return this->modelo;
}

int Veiculos::setLocalizacao(string localizacao) {
    this->localizacao = localizacao;
    return 1;
}

string Veiculos::getLocalizacao(){
    return this->localizacao;
}

int Veiculos::setDisponibilidade() {
    if(rand){
        this->disponibilidade = 1;
        return 1;
    }

    this->disponibilidade = 0;
    return 0;
}

int Veiculos::getDisponibilidade(){
    return this->disponibilidade;
}

void Veiculos::setItens(int value) {
    itens = value;
}

int Veiculos::getItens(){
    return itens;
}
    
void Veiculos::decrementarItens() {
    itens--;
}

bool Veiculos::operator==(const Veiculos& outro){
    // Verificar se todos os atributos são iguais
    return capacidade == outro.capacidade &&
           ano == outro.ano &&
           chassi == outro.chassi &&
           modelo == outro.modelo &&
           localizacao == outro.localizacao &&
           disponibilidade == outro.disponibilidade &&
           itens == outro.itens;
}