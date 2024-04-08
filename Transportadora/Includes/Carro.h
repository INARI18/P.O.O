#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include "Veiculos.h"

using namespace std;

class Carro : public Veiculos {
private:
    int n_portas;
    string cambio;
public:
    Carro();
    Carro(string Vtipo, int cap, int ano, string chassi, string modelo, string localizacao);
    ~Carro();
};

#endif