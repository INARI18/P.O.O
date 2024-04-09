#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Carro : public Veiculos {
private:
    int n_portas;
    string Cambio;
public:
    Carro();
    Carro(string Vtipo, int cap, int ano, string chassi, string modelo, string localizacao, int portas, string cambio);
    ~Carro();
};

#endif