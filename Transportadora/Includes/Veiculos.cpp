#include <iostream>
#include<iomanip>
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
    this->latitude = 0.0;
    this->longitude = 0.0;
}

Veiculos::Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao, float LA[3], float LO[3]){
    setCapacidade(cap);
    setAno(ano);
    setChassi(Vchassi);
    setModelo(modelo);
    setLocalizacao(localizacao); 
    //setDisponibilidade();
    setLatitude(LA);
    setLongitude(LO);
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

/*int Veiculos::setDisponibilidade() {
    if(rand){
        this->disponibilidade = 1;
        return 1;
    }

    this->disponibilidade = 0;
    return 0;
}

int Veiculos::getDisponibilidade(){
    return this->disponibilidade;
}*/

void Veiculos::setItens(int value) {
    itens = value;
}

int Veiculos::getItens(){
    return itens;
}
    
void Veiculos::decrementarItens() {
    itens--;
}

void Veiculos::setLatitude(float LA[3]) {
    float x, y, z, total1;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            x = LA[i]*60;
        }

        if(i == 1) {
            y = LA[i]; // * 1
        }

        if(i == 2) {
            z = LA[i]/60;
        }

        total1 = (x + y + z)*111.32;
    }

    this->latitude = total1;
}

float Veiculos::getLatitude() {
    return this->latitude;
}

void Veiculos::setLongitude(float LO[3]) {
    float x, y, z, total2;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            x = LO[i]*60;
        }

        if(i == 1) {
            y = LO[i]; // * 1
        }

        if(i == 2) {
            z = LO[i]/60;
        }

        total2 = (x + y + z)*111.32; //  convertendo nm para km
    }

    this->longitude = total2;
}

float Veiculos::getLongitude() {
    return this->longitude;
}

void Veiculos::setDistanciaA(float d) {
    this->distanciaA = d;
}

float Veiculos::getDistanciaA() {
    return this->distanciaA;
}


/*bool Veiculos::operator==(const Veiculos& outro){
    // Verificar se todos os atributos são iguais
    return capacidade == outro.capacidade &&
           ano == outro.ano &&
           chassi == outro.chassi &&
           modelo == outro.modelo &&
           localizacao == outro.localizacao &&
           disponibilidade == outro.disponibilidade &&
           itens == outro.itens;
}*/