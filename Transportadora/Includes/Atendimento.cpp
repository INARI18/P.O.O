#include <iostream>
#include <string>
#include <cmath>
#include "Atendimento.h"

using namespace std;

list<Veiculos> Atendimento::defineVeiculo(string localizacao, Veiculos itens) {
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
}

void Atendimento::setDistancia(Veiculos *veiculo, Pedidos *pedido) {
    float diferencaDLA = (veiculo->getLatitude()) - (pedido->getLatitude());
    float diferencaDLO = (veiculo->getLongitude()) - (pedido->getLongitude());
    float comprimento;
    comprimento = (diferencaDLA*diferencaDLA) + (diferencaDLO*diferencaDLO);
    comprimento = comprimento*comprimento;
    // fazer a raiz de comprimento(pitágoras)
    // pow  
}

float Atendimento::getDistancia() {
    return this->distancia;
}



