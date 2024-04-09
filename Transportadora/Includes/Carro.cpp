#include <iostream>
#include <string>

#include "Carro.h"

using namespace std;

Carro::Carro() {
    this->portas = 0;
    this->Cambio = "";
}

Carro::Carro(string Vtipo, int cap, int ano, string Vchassi, string modelo, string localizacao, 
int n_portas, string cambio) :Veiculos (cap, ano, Vchassi, modelo, localizacao){
    setPortas(n_portas);
}

Carro::~Carro(){};

int Carro::setPortas(int n_portas){
    this->portas = n_portas;
    return 1;
}

int Carro::getPortas() {
    return this->portas;
}

int Carro::setCambio(string cambio) {
    this->Cambio = cambio;
}

string Carro::getCambio(){
    return this->Cambio;
}