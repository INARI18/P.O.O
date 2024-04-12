#include <iostream>
#include <string>
#include <cmath>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento(Veiculos *veiculo, Pedidos *pedido) {
  setDistancia(veiculo, pedido);
}

Atendimento::~Atendimento(){}

/*list<Veiculos> Atendimento::defineVeiculo(string localizacao, Veiculos itens) {
    // Chama o método buscaLocalizacao da classe GerenciaVeiculos para obter a lista de veículos na localização especificada
    list<Veiculos> veiculosNaLocalizacao = GerenciaVeiculos::buscaLocalizacao(localizacao);

    // Percorre a lista de veículos na localização
    for (auto& veiculo : veiculosNaLocalizacao) {
        // Verifica se o veículo atende aos requisitos de itens e disponibilidade
        if (veiculo.getItens() >= itens && veiculo.getDisponibilidade() == 1) {
            // Retorna o veículo que atende aos requisitos
            return veiculosNaLocalizacao;
        }
    }

    // Se nenhum veículo atender aos requisitos, lança uma exceção
    throw runtime_error("Nenhum veículo disponível atende aos requisitos");
}*/

void Atendimento::setDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = veiculo->getLatitude() - pedido->getLatitude();
    float diferencaDLO = veiculo->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2);
    float distancia = sqrt(comprimento); // Calcula a distância entre o veículo e o pedido

    veiculo->setDistanciaA(distancia); // Define a distância no veículo
    pedido->setDistanciaP(distancia); 
}

float Atendimento::getDistancia(Veiculos *veiculo) {
    return veiculo->getDistanciaA();
}

/*Veiculos* Atendimento::MenorDistancia(Atendimento *objeto, GerenciaVeiculos *objeto2) {
    float menorD = 4400.0;
    Veiculos* veiculoMaisProximo = nullptr;

    for(auto &v : objeto2->getVeiculos()) {
        v->setDistanciaA(getDistancia());
        float distancia = objeto->getDistancia(); // Obtém a distância atual
        if(distancia < menorD) { // Se a distância for menor do que a menor distância encontrada até agora
            menorD = distancia; // Atualize a menor distância
            veiculoMaisProximo = v; // Atualize o veículo mais próximo
        }
    }

    if (veiculoMaisProximo != nullptr) { // Verifica se um veículo foi encontrado
        cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo() << endl;
        return veiculoMaisProximo; // Retorna o veículo mais próximo
    } else {
        throw runtime_error("Erro! Veiculo nao encontrado!");
    }
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
        cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo() << endl;
        return veiculoMaisProximo; // Retorna o veículo mais próximo
    } else {
        throw runtime_error("Erro! Veiculo nao encontrado!");
    }
}




