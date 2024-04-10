#include <iostream>
#include <string>
#include "GerenciaVeiculos.h"

// LISTA

using namespace std;

void GerenciaVeiculos::adicionaVeiculo(const Veiculos v) {
    veiculos.push_back(v); // adiciona no final da lista
}

void GerenciaVeiculos::removeVeiculo(const Veiculos v) {
    veiculos.remove(v); // remove da lista
}

Veiculos GerenciaVeiculos::buscaChassi(string chassi) {
    if (chassi.size() != 17) {
        throw runtime_error("Chassi invalido");
    }

    for (auto v : veiculos) {
        if (v.getChassi() == chassi) {
            return v;
        }
    }
    throw runtime_error("chassi nao encontrado");
}

list<Veiculos> GerenciaVeiculos::buscaLocalizacao(string localizacao) {
    list<Veiculos> veiculosNaLocalizacao; // cria nova lista 
    for (auto v : veiculos) {
        if (v.getLocalizacao() == localizacao) {
            veiculosNaLocalizacao.push_back(v);
        }
    }
    return veiculosNaLocalizacao; // retorna nova lista
}

list<Veiculos> GerenciaVeiculos::veiculosDisponiveis() {
    list<Veiculos> veiculosDisponiveis; // cria nova lista
    for (auto v : veiculos) {
        if (v.getDisponibilidade() == 1) {
            veiculosDisponiveis.push_back(v);
        }
    }
    return veiculosDisponiveis; // retorna nova lista
}