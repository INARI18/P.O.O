#ifndef CAMINHONETE_H
#define CAMINHONETE_H

#include <iostream>
#include <string>
#include "../Veiculos/Veiculos.h"

using namespace std;

class Caminhonete : public Veiculos {
private:
    string Cacamba; //caçamba
public:
    Caminhonete();
    Caminhonete(int cap, int ano, string Vchassi, string modelo, string localizacao, string cacamba, float LA[3], float LO[3]);
    ~Caminhonete();

    int setCacamba(string cacamba);
    string getCacamba();

    friend ostream& operator<<(ostream& out, Caminhonete *caminhonete);
};

#endif