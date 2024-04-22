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
    /*int numeroPedido;
    string modeloVeiculo;
    string localColeta;
    string localEntrega;
    float distanciaVeiculo;*/
public:
    Atendimento();
    //Atendimento(int numero, string modelo_veiculo, string coleta, string entrega, float distancia_veiculo);
    ~Atendimento();

    /*void setNumeroPedido(int numero);
    void setModeloVeiculo(string modelo_veiculo);
    void setLocalColeta(string coleta);
    void setLocalEntrega(string entrega);
    void setDistanciaVeiculo(float distancia_veiculo);*/

    float CalculaDistancia(Veiculos *veiculo, Pedidos *pedido);
    void MenorDistancia(Garagem *listaVeiculos, ControlePedidos *listaPedidos);
};

#endif