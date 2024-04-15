#include <iostream>
#include <string>
#include <cmath>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento() {
}

Atendimento::~Atendimento(){}

float Atendimento::CalculaDistancia(Carro *carro, Pedidos *pedido) {
    float diferencaDLA = carro->getLatitude() - pedido->getLatitude();
    float diferencaDLO = carro->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return distancia; 
}

float Atendimento::CalculaDistancia(Caminhao *caminhao, Pedidos *pedido) {
    float diferencaDLA = caminhao->getLatitude() - pedido->getLatitude();
    float diferencaDLO = caminhao->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return distancia; 
}

float Atendimento::CalculaDistancia(Caminhonete *caminhonete, Pedidos *pedido) {
    float diferencaDLA = caminhonete->getLatitude() - pedido->getLatitude();
    float diferencaDLO = caminhonete->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return distancia; 
}

float Atendimento::CalculaDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = veiculo->getLatitude() - pedido->getLatitude();
    float diferencaDLO = veiculo->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return distancia; 
}


Veiculos* Atendimento::MenorDistancia(GerenciaVeiculos *objeto2, Pedidos *pedido) {
    float menorD = 4400.0;
    Veiculos* veiculoMaisProximo = nullptr;

    for(auto &v : objeto2->getVeiculos()) { 
        float distancia = CalculaDistancia(v, pedido);
        if(distancia < menorD) {
            menorD = distancia;
            veiculoMaisProximo = v; 
        }
    }

    if (veiculoMaisProximo != nullptr) { // Verifica se um veículo foi encontrado
        cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo()
        << "\nDistancia: " << CalculaDistancia(veiculoMaisProximo, pedido) << endl;
        return veiculoMaisProximo;
    } else {
        throw runtime_error("Erro! Veiculo nao encontrado!");
    }
}




