#include <iostream>
#include <iomanip>
#include <string>
#include "Garagem.h"

using namespace std;

Garagem::Garagem() : ListaVeiculos() {}
Garagem::~Garagem() {
    for (auto veiculo : ListaVeiculos) {
        delete veiculo; 
    }
    ListaVeiculos.clear();
}

list<Veiculos*> Garagem::getListaVeiculos()  {
    return ListaVeiculos; 
}

void Garagem::adicionaVeiculo(Veiculos* veiculo) {
    ListaVeiculos.push_back(veiculo); 
    cout << "Veiculo adicionado com sucesso!" << endl;
}

void Garagem::removeVeiculo(Veiculos *veiculo){
    ListaVeiculos.remove(veiculo); 
    delete veiculo;
    cout << "Veiculo removido com sucesso!"<< endl;
}

Veiculos* Garagem::buscaChassi(string chassi) {
    if (chassi.size() != 17) {
        throw runtime_error("Chassi invalido");
    }

    for (auto veiculo : ListaVeiculos) {
        if (veiculo->getChassi() == chassi) {
            return veiculo;
        }
    }
    throw runtime_error("Veiculo nao encontrado");
}

list<Veiculos*> Garagem::buscaLocalizacao(string localizacao) {
    list<Veiculos*> veiculosNaLocalizacao; // cria nova lista 
    for (auto veiculo : ListaVeiculos) {
        if (veiculo->getLocalizacao() == localizacao) {
            veiculosNaLocalizacao.push_back(veiculo);
        }
    }
    return veiculosNaLocalizacao;
}

/*list<Veiculos*> Garagem::veiculosDisponiveis() {
    list<Veiculos*> veiculosDisponiveis; // cria nova lista
    for (auto v : veiculos) {
        if (v->getDisponibilidade() == 1) {
            veiculosDisponiveis.push_back(v);
        }
    }
    return veiculosDisponiveis; // retorna nova lista
}*/

void Garagem::imprimeListaVeiculos() {
    if (!ListaVeiculos.empty()) { 
        cout << "Lista de Veiculos Completa:" << endl;
        for (auto& veiculo : ListaVeiculos) {
            cout << "- Modelo: " << veiculo->getModelo() << endl
            << "- Chassi: " << veiculo->getChassi() << endl;
        }

    } else cout << "Lista de Veiculos Vazia!" << endl;
}