#include <iostream>
#include <string>
#include "Veiculos.h"
#include "GerenciaVeiculos.h"
#include "Pedidos.h"
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

/*Essa função defineVeiculo está tentando selecionar um veículo disponível que atenda aos 
requisitos de itens para uma determinada localização.
Vamos entender passo a passo o que essa função está fazendo:
Ela recebe dois parâmetros: localizacao, que é a localização desejada para encontrar 
veículos, e itens, que representa os itens necessários para o atendimento.
Ela chama o método buscaLocalizacao da classe GerenciaVeiculos para obter uma lista 
de veículos na localização especificada.
Em seguida, percorre a lista de veículos na localização.
Para cada veículo na lista, verifica se ele atende aos requisitos de itens e disponibilidade. Para isso, compara o número de itens que o veículo pode carregar (veiculo.getItens()) com o número de itens necessários (itens) e também verifica se o veículo está disponível (veiculo.getDisponibilidade() == 1).
Se encontrar um veículo que atenda aos requisitos, retorna essa lista de veículos.
Se nenhum veículo atender aos requisitos, lança uma exceção indicando que nenhum 
veículo disponível atende aos requisitos.
Em resumo, essa função busca na lista de veículos disponíveis na localização especificada 
aquele que pode atender aos requisitos de itens e disponibilidade. Se encontrar, 
retorna esse veículo; caso contrário, lança uma exceção.*/