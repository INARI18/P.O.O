#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include "Includes/Veiculos/Veiculos.h"
#include "Includes/Clientes/Clientes.h"
#include "Includes/Pedidos/Pedidos.h"
#include "Includes/Carro/Carro.h"
#include "Includes/Caminhonete/Caminhonete.h"
#include "Includes/Caminhao/Caminhao.h"
#include "Includes/Veiculos/EscolheVeiculo.h"
#include "Includes/Veiculos/Garagem.h"
#include "Includes/Atendimento/Atendimento.h"

using namespace std;

int main(void) {
    float LAp[3] = {-28.2633, -52.8706, 0.556};
    float LOp[3] = {-52.8614, -53.6794, 37.01};
    float LAp2[3] = {-23.5505, -46.6333, 0.790}; 
    float LOp2[3] = {-46.6333, -23.5505, 53.01};

    float LAv[3] = {23.0, 30.0, 36.50};
    float LOv[3] = {46.0, 38.0, 32.90};
    float LAv5[3] = {-29.7753, -57.0884, 20.60};
    float LOv5[3] = {-57.0884, -29.7753, 40.10};
    float LAv6[3] = {22.0, 30.0, 44.04};
    float LOv6[3] = {-50.0, -50.0, 30.2};

    Garagem *gerenciadorVeiculos = new Garagem;
    ControlePedidos *gerenciadorPedidos = new ControlePedidos;
    Atendimento *novo = new Atendimento;

    Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556, LAp, LOp);
    Pedidos *P2 = new Pedidos("Mouse", "Rio de Janeiro, RJ", "Uruguaiana, RS", 0.790, LAp2, LOp2);

    Veiculos *V1;
    Veiculos *V2;
    Veiculos *V3;

    V3 = new Caminhao(27000, 2015, "ZG1LM23N4OP105780", "Carreta", "Garagem", 2.85, 2.44, 14.8, LAv, LOv);
    V2 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico", LAv5, LOv5);
    V1 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta", LAv6, LOv6);

    gerenciadorVeiculos->adicionaVeiculo(V1);
    gerenciadorVeiculos->adicionaVeiculo(V2);
    gerenciadorVeiculos->adicionaVeiculo(V3);

    gerenciadorPedidos->adicionaPedido(P1);
    gerenciadorPedidos->adicionaPedido(P2);

    //novo->CalculaDistancia(V1, P1);
    //novo->CalculaDistancia(V2, P1);
    //novo->CalculaDistancia(V3, P1);
    novo->MenorDistancia(gerenciadorVeiculos, gerenciadorPedidos);

    delete V1;
    delete V2;
    delete V3;
    delete P1;
    delete P2;
    delete novo;
    delete gerenciadorVeiculos;
    delete gerenciadorPedidos;
    return 0;
}

