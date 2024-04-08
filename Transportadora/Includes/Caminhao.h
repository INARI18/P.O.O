#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "Veiculos.h"

using namespace std;

class Caminhao : public Veiculos {
private: 
    float altura;
    string carga;
public:
    Caminhao();
    Caminhao(int cap, int ano, string chassi, string modelo, string localizacao, float altura, string carga);
    ~Caminhao();

    int setAltura(float c_altura);
    float getAltura();

    int setCarga(string c_carga);
    string getCarga();
};

#endif