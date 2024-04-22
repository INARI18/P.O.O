#include <iostream>
#include <iomanip>
#include <string>
#include "Veiculos.h"

using namespace std;

Veiculos::Veiculos() {
    this->capacidade = 0.0;
    this->ano = 0;
    this->chassi = "";
    this->modelo = "";
    this->localizacao = "";
    this->itens = 0;
    this->latitude = 0.0;
    this->longitude = 0.0;
    this->disponibilidade = 1;
}

Veiculos::Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao, float LA[3], float LO[3]){
    setCapacidade(cap);
    setAno(ano);
    setChassi(Vchassi);
    setModelo(modelo);
    setDisponibilidade();
    setLocalizacao(localizacao); 
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

void Veiculos::setItens(int value) {
    itens = value;
}

int Veiculos::getItens(){
    return itens;
}

void Veiculos::setDisponibilidade() {
    if(itens == 0) {
        this->disponibilidade = 0;
    }

    else this->disponibilidade = 1;
}

int Veiculos::getDisponibilidade(){
    return disponibilidade;
}
    
void Veiculos::decrementarItens() {
    itens--;
    setDisponibilidade();
}

void Veiculos::setLatitude(float LA[3]) {
    // converte graus, minutos e segundos para graus decimais
    float total = LA[0] + LA[1]/60 + LA[2]/3600;
    //graus decimais para km
    this->latitude = total * 111.32;
}

float Veiculos::getLatitude() {
    return this->latitude;
}

void Veiculos::setLongitude(float LO[3]) {
    float total = LO[0] + LO[1]/60 + LO[2]/3600;
    this->longitude = total * 111.32;
}

float Veiculos::getLongitude() {
    return this->longitude;
}

ostream& operator<<(ostream& out, Veiculos* veiculo) {
    out << "Capacidade: " << veiculo->getCapacidade() << 
    "\nModelo: " << veiculo->getModelo() << 
    "\nAno: " << veiculo->getAno() << 
    "\nChassi: " << veiculo->getChassi() << 
    "\nLocalizacao: " << veiculo->getLocalizacao() <<
    "\nLatitude: " << veiculo->getLatitude() <<
    "\nLongitude: " << veiculo->getLongitude(); 
    return out;
}

