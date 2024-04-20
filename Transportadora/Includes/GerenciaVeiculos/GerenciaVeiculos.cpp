#include <iostream>
#include <iomanip>
#include <string>
#include "GerenciaVeiculos.h"

using namespace std;

GerenciaVeiculos::GerenciaVeiculos() : veiculos() {}
GerenciaVeiculos::~GerenciaVeiculos() {
    // percorre a lista e libera memoria
    for (auto v : veiculos) {
        delete v; 
    }
}

list<Veiculos*> GerenciaVeiculos::getVeiculos()  {
    return veiculos; 
}

void GerenciaVeiculos::adicionaVeiculo(Veiculos* veiculo) {
    veiculos.push_back(veiculo); 
    cout << "Veiculo adicionado: \n" << veiculo->getModelo() << endl;
}

void GerenciaVeiculos::removeVeiculo(Veiculos *veiculo){
    veiculos.remove(veiculo); 
    delete veiculo;
    cout << "Veiculo removido: " << veiculo->getModelo() << endl;
}

Veiculos* GerenciaVeiculos::buscaChassi(string chassi) {
    if (chassi.size() != 17) {
        throw runtime_error("Chassi invalido");
    }

    for (auto v : veiculos) {
        if (v->getChassi() == chassi) {
            return v;
        }
    }
    throw runtime_error("chassi nao encontrado");
}

list<Veiculos*> GerenciaVeiculos::buscaLocalizacao(string localizacao) {
    list<Veiculos*> veiculosNaLocalizacao; // cria nova lista 
    for (auto v : veiculos) {
        if (v->getLocalizacao() == localizacao) {
            veiculosNaLocalizacao.push_back(v);
        }
    }
    return veiculosNaLocalizacao; // retorna nova lista
}

/*list<Veiculos*> GerenciaVeiculos::veiculosDisponiveis() {
    list<Veiculos*> veiculosDisponiveis; // cria nova lista
    for (auto v : veiculos) {
        if (v->getDisponibilidade() == 1) {
            veiculosDisponiveis.push_back(v);
        }
    }
    return veiculosDisponiveis; // retorna nova lista
}*/

void GerenciaVeiculos::imprimeListaVeiculos() {
    if (!veiculos.empty()) { // verifica se a lista está vazia 
        cout << "Lista de Veiculos Completa:" << endl;
        for (auto& veiculo : veiculos) {
    cout << "- Modelo: " << veiculo->getModelo() << endl
         << "- Chassi: " << veiculo->getChassi() << endl;
    cout << endl;
}

    } else {
        cout << "Lista Vazia!" << endl;
    }
}