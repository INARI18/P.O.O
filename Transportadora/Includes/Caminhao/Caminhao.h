#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include <string>
#include "../Veiculos/Veiculos.h"

using namespace std;

class Caminhao : public Veiculos {
private: 
    float altura;
    float largura;
    float comprimento;
    float m3;
public:
    Caminhao();
    Caminhao(int cap, int ano, string Vchassi, string modelo, string localizacao, 
    float altura, float largura, float c_comprimento, float LA[3], float LO[3]);
    ~Caminhao();

    int setAltura(float c_altura);
    float getAltura();

    int setLargura(float c_largura);
    float getLargura(); 

    int setComprimento(float c_comprimento);
    float getComprimento(); 

    int setM3();
    float getM3();  

    friend ostream& operator<<(ostream& out, Caminhao *caminhao);
};

#endif