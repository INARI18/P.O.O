#include <iostream>
#include <string>
#include <cmath>
#include "Atendimento.h"

using namespace std;

Atendimento::Atendimento() {}

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

float Atendimento::CalculaDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = veiculo->getLatitude() - pedido->getLatitude();
    float diferencaDLO = veiculo->getLongitude() - pedido->getLongitude();
    
    float comprimento = pow(diferencaDLA, 2) + pow(diferencaDLO, 2); // potencia 
    float distancia = sqrt(comprimento); // raiz
   
    return distancia;
}

Veiculos *Atendimento::CalculaMenorDistancia(GerenciaVeiculos *objeto2, Pedidos *pedido) {
    float menor = 4400.0;
    Veiculos *veiculoMaisProximo = nullptr;

    for(auto &v : objeto2->getVeiculos()) { // acessa a lista de veiculos
        float distancia = CalculaDistancia(v, pedido);
        if(distancia < menor) {
            menor = distancia; // atualiza a menor distância
            veiculoMaisProximo = v; // atualiza o veículo mais próximo
        }
    }

    if (veiculoMaisProximo != nullptr) { // verifica se um veículo foi encontrado
        cout << "Veiculo mais proximo: " << veiculoMaisProximo->getModelo()
        << "\nDistancia: " << CalculaDistancia(veiculoMaisProximo, pedido) << "km" << endl;
        return veiculoMaisProximo; // retorna o veículo mais próximo
    } else {
        throw runtime_error("Erro! Veiculo nao encontrado!");
    }
}




