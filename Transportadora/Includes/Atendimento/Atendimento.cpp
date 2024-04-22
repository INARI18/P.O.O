#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento() {}
Atendimento::~Atendimento(){}

/*Atendimento::Atendimento(int numero, string modelo_veiculo, string coleta, string entrega, float distancia_veiculo) {
    setNumeroPedido(numero);
    setModeloVeiculo(modelo_veiculo);
    setLocalColeta(coleta);
    setLocalEntrega(entrega);
    setDistanciaVeiculo(distancia_veiculo);
}

void Atendimento::setNumeroPedido(int numero) {
    this->numeroPedido = numero;
}
void Atendimento::setModeloVeiculo(string modelo_veiculo) {
    this->modeloVeiculo = modelo_veiculo;
}
void Atendimento::setLocalColeta(string coleta) {
    this->localColeta = coleta;
}
void Atendimento::setLocalEntrega(string entrega) {
    this->localEntrega = entrega;
}
void Atendimento::setDistanciaVeiculo(float distancia_veiculo) {
    this->distanciaVeiculo = distancia_veiculo;
}*/

float Atendimento::CalculaDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = veiculo->getLatitude() - pedido->getLatitude();
    float diferencaDLO = veiculo->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);
    return distancia; 
}

void Atendimento::MenorDistancia(Garagem *listaVeiculos, ControlePedidos *listaPedidos) {
    if (listaVeiculos->getListaVeiculos().empty() || listaPedidos->getListaPedidos().empty()) {
        cout << "Lista Vazia!" << endl;
        return;
    }

    for(Pedidos *pedido : listaPedidos->getListaPedidos()) {
        float menorDistancia = numeric_limits<float>::max(); // maior numero representável pelo tipo float
        Veiculos *veiculoMaisProximo = nullptr;

        for(Veiculos *veiculo : listaVeiculos->getListaVeiculos()) {
            if(veiculo->getDisponibilidade() == 1 && veiculo->getItens() != 0) {
                float distancia = CalculaDistancia(veiculo, pedido);
                if(distancia < menorDistancia) {
                    menorDistancia = distancia;
                    veiculoMaisProximo = veiculo;
                }
            }
        }
        cout << "\nPedido " << pedido->getNumero() << endl;
        if (veiculoMaisProximo != nullptr) {
            cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo() << endl;
            cout << "Distancia: " << menorDistancia << endl;
            veiculoMaisProximo->decrementarItens();
            cout << "Itens: " << veiculoMaisProximo->getItens();
        } 
        else cout << "Nenhum veiculo encontrado para o pedido " << pedido->getNumero() << endl;
    }
}







