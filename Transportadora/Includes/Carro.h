#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Carro : public Veiculos {
private:
    int portas;
    string Cambio;
public:
    Carro();
    Carro(int cap, int ano, string Vchassi, string modelo, string localizacao, int n_portas, string cambio);
    ~Carro();

    int setPortas(int n_portas);
    int getPortas();

    int setCambio(string cambio);
    string getCambio();
};

#endif