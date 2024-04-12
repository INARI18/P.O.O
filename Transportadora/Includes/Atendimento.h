#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#include <iostream>
#include <string>
#include <cmath>
#include "Veiculos.h"
#include "GerenciaVeiculos.h"
#include "Pedidos.h"

using namespace std;

class Atendimento{
private:
    /*GerenciaVeiculos localizacao;
    Veiculos itens;
    Veiculos disponibilidade;
    Pedidos coleta;
    Pedidos entrega;
    Pedidos peso;
    Pedidos itens;*/

public:
    Atendimento(Veiculos *veiculo, Pedidos *pedido);
    ~Atendimento();

    //static list<Veiculos> defineVeiculo(string localizacao, Veiculos itens);

    void setDistancia(Veiculos *veiculo, Pedidos *pedido);
    float getDistancia(Veiculos *veiculo);

    Veiculos* MenorDistancia(GerenciaVeiculos *objeto2, Pedidos *pedido);
};

#endif