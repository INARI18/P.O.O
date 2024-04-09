#ifndef CAMINHONETE_H
#define CAMINHONETE_H

#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Caminhonete : public Veiculos {
private:
    string Cacamba; //caçamba
public:
    Caminhonete();
    Caminhonete(int cap, int ano, string Vchassi, string modelo, string localizacao, string cacamba);
    ~Caminhonete();

    int setCacamba(string cacamba);
    string getCacamba();
};

#endif