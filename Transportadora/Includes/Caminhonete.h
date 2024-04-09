#ifndef CAMINHONETE_H
#define CAMINHONETE_H

#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Caminhonete : public Veiculos {
private:
    string cacamba;
public:
    Caminhonete();
    Caminhonete(string Vtipo, int cap, int ano, string chassi, string modelo, string localizacao);
    ~Caminhonete();
};

#endif