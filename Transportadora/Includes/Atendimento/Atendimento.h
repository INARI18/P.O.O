#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#include <iostream>
#include <string>
#include <cmath>

#include "../Veiculos/Veiculos.h"
#include "../Veiculos/Garagem.h"
#include "../Pedidos/ControlePedidos.h"

using namespace std;

class Atendimento{
private:

public:
    Atendimento();
    ~Atendimento();

    float CalculaDistancia(Veiculos *veiculo, Pedidos *pedido);
    void MenorDistancia(Garagem *listaVeiculos, ControlePedidos *listaPedidos);
};

#endif