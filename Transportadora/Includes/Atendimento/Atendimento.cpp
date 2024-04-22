#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento() {
}
Atendimento::~Atendimento(){}

float Atendimento::CalculaDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = veiculo->getLatitude() - pedido->getLatitude();
    float diferencaDLO = veiculo->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return distancia; 
}

/*float Atendimento::CalculaDistancia(Veiculos *veiculo, Pedidos *pedido) {
    const float pi = 3.14;
    float lat1 = pedido->getLatitude();
    float lon1 = pedido->getLongitude();
    float lat2 = veiculo->getLatitude();
    float lon2 = veiculo->getLongitude();
    float R = 6371; // Raio da Terra em km

    float dLat = (lat2 - lat1) * pi / 180.0;
    float dLon = (lon2 - lon1) * pi / 180.0;

    float a = sin(dLat / 2) * sin(dLat / 2) +
              cos(lat1 * pi / 180.0) * cos(lat2 * pi / 180.0) *
              sin(dLon / 2) * sin(dLon / 2);
    float c = 2 * atan2(sqrt(a), sqrt(1 - a));
    float distancia = R * c;

    return distancia;
}*/

void Atendimento::MenorDistancia(Garagem *gerenciadorVeiculos, ControlePedidos *gerenciadorPedidos) {
    if (gerenciadorVeiculos->getListaVeiculos().empty() || gerenciadorPedidos->getListaPedidos().empty()) {
        cout << "Lista Vazia!" << endl;
        return;
    }

    for(Pedidos *pedido : gerenciadorPedidos->getListaPedidos()) {

        float menorDistancia = numeric_limits<float>::max();
        Veiculos *veiculoMaisProximo = nullptr;

        for(Veiculos *veiculo : gerenciadorVeiculos->getListaVeiculos()) {
            float distancia = CalculaDistancia(veiculo, pedido);

            if(distancia < menorDistancia) {
                menorDistancia = distancia;
                veiculoMaisProximo = veiculo;

                if(veiculoMaisProximo != nullptr) {
                cout << "Pedido " << pedido->getNumero() << endl;
                cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo() << endl;
                cout << "Distancia: " << menorDistancia << endl;   
            } 
                else cout << "Nenhum veiculo encontrado para o pedido " << pedido->getNumero() << "!" << endl;
            }
        }
    }
}




