#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>
#include "../Veiculos/Veiculos.h"

using namespace std;

class Carro : public Veiculos {
private:
    int portas;
    string Cambio;
public:
    Carro();
    Carro(int cap, int ano, string Vchassi, string modelo, string localizacao, int n_portas, string cambio, float LA[3], float LO[3]);
    ~Carro();

    int setPortas(int n_portas);
    int getPortas ();

    int setCambio(string cambio);
    string getCambio ();

    friend ostream& operator<<(ostream& out, Carro* carro);
};

#endif