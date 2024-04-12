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

void Atendimento::setDistancia() {
    float diferencaDLA = &(Veiculos veiculo.setLatitude()) - &(Pedidos pedido.setLatitudeP());
    float diferencaDLO = &(Veiculos veiculo.setLongitude()) - &(Pedidos pedido.setLongitudeP());
    float comprimento;
    (comprimento*comprimento) = (diferencaDLA*diferencaDLA) + (diferencaDLO*diferencaDLO);
    // fazer a raiz de tudo (pitágoras)

}
float Atendimento::getDistancia() {
    return this->distanciaDLA;
}



