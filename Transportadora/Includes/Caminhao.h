#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Caminhao : public Veiculos {
private: 
    float altura;
    float largura;
    float comprimento;
    float m3;
    string carga;
public:
    Caminhao();
    Caminhao(int cap, int ano, string Vchassi, string modelo, string localizacao, 
    float altura, float largura, float c_comprimento, string carga);
    ~Caminhao();

    int setAltura(float c_altura);
    float getAltura();

    int setLargura(float c_largura);
    float getLargura(); 

    int setComprimento(float c_comprimento);
    float getComprimento(); 

    int setM3();
    float getM3();  

    int setCarga(string c_carga);
    string getCarga(); 
};

#endif