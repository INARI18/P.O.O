#include <iostream>
#include <string>
#include <cmath>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento() {
}

Atendimento::~Atendimento(){}

/*list<Veiculos> Atendimento::defineVeiculo(string localizacao, Veiculos itens) {
    list<Veiculos> veiculosNaLocalizacao = GerenciaVeiculos::buscaLocalizacao(localizacao);
    for (auto& veiculo : veiculosNaLocalizacao) {
        if (veiculo.getItens() >= itens && veiculo.getDisponibilidade() == 1) {
            return veiculosNaLocalizacao;
        }
    }
    throw runtime_error("Nenhum veículo disponível atende aos requisitos");
}*/

/*void Atendimento::setDistancia(Carro *carro, Pedidos *pedido) {
    float diferencaDLA = carro->getLatitude() - pedido->getLatitude();
    float diferencaDLO = carro->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return; 
}

void Atendimento::setDistancia(Caminhonete *caminhonete, Pedidos *pedido) {
    float diferencaDLA = caminhonete->getLatitude() - pedido->getLatitude();
    float diferencaDLO = caminhonete->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return; 
}

void Atendimento::setDistancia(Caminhao *caminhao, Pedidos *pedido) {
    float diferencaDLA = caminhao->getLatitude() - pedido->getLatitude();
    float diferencaDLO = caminhao->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento);

    return; 
}

float Atendimento::getDistancia(Carro *carro) {
    return carro->getDistanciaA();
}

float Atendimento::getDistancia(Caminhonete *caminhonete) {
    return caminhonete->getDistanciaA();
}

float Atendimento::getDistancia(Caminhao *caminhao) {
    return caminhao->getDistanciaA();
}*/


Veiculos* Atendimento::MenorDistancia(GerenciaVeiculos *objeto2, Pedidos *pedido) {
    float menorD = 4400.0;
    Veiculos* veiculoMaisProximo = nullptr;

    for(auto &v : objeto2->getVeiculos()) {
        setDistancia(v, pedido); // Calcula a distância entre o veículo e pedido
        float distancia = v->getDistanciaA();
        if(distancia < menorD) {
            menorD = distancia; // Atualize a menor distância
            veiculoMaisProximo = v; // Atualize o veículo mais próximo
        }
    }

    if (veiculoMaisProximo != nullptr) { // Verifica se um veículo foi encontrado
        cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo()
        << "Distancia: " << veiculoMaisProximo->getModelo() << endl;
        return veiculoMaisProximo; // Retorna o veículo mais próximo
    } else {
        throw runtime_error("Erro! Veiculo nao encontrado!");
    }
}




