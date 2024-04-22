#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#include <iostream>
#include <string>
#include <cmath>
#include "Veiculos/Veiculos.h"
#include "Veiculos/Garagem.h"
#include "Pedidos/Pedidos.h"

using namespace std;

class Atendimento{
private:

public:
    Atendimento();
    ~Atendimento();

    /*float CalculaDistancia(Carro *carro, Pedidos *pedido);
    float CalculaDistancia(Caminhao *caminhao, Pedidos *pedido);
    float CalculaDistancia(Caminhonete *caminhonete, Pedidos *pedido);*/
    float CalculaDistancia(Veiculos *veiculo, Pedidos *pedido);
    Veiculos *MenorDistancia(Garagem *gerenciador, Pedidos *pedido);
};

#endif