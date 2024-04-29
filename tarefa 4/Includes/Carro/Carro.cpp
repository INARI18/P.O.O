#include <iostream>
#include <string>
#include "Carro.h"

using namespace std;

Carro::Carro() {
    this->portas = 0;
    this->Cambio = "";
}

Carro::Carro(int cap, int ano, string Vchassi, string modelo, string localizacao, 
int n_portas, string cambio, float LA[3], float LO[3]) :Veiculos (cap, ano, Vchassi, modelo, localizacao, LA, LO){
    setPortas(n_portas);
    setCambio(cambio);
    setItens(5);
}

Carro::~Carro(){};

int Carro::setPortas(int n_portas){
    this->portas = n_portas;
    return 1;
}

int Carro::getPortas() {
    return this->portas;
}

int Carro::setCambio (string cambio) {
    this->Cambio = cambio;
    return 1;
}

string Carro::getCambio() {
    return this->Cambio;
}

ostream& operator<<(ostream& out, Carro* carro) {
    out << "Capacidade: " << carro->getCapacidade() << 
    "\nModelo: " << carro->getModelo() << 
    "\nAno: " << carro->getAno() << 
    "\nChassi: " << carro->getChassi() << 
    "\nLocalizacao: " << carro->getLocalizacao() <<
    "\nNumero de Portas: " << carro->getPortas() <<
    "\nCambio: " << carro->getCambio(); 
    return out;
}