#ifndef GERENCIA_VEICULOS_H
#define GERENCIA_VEICULOS_H

#include <iostream>
#include <string>
#include <list>
#include "Veiculos.h"
#include "Carro/Carro.h"
#include "Caminhonete/Caminhonete.h"
#include "Caminhao/Caminhao.h"

using namespace std;

class GerenciaVeiculos {
private:
    // armazena ponteiros
    list<Veiculos*> veiculos;

public:
    GerenciaVeiculos();
    ~GerenciaVeiculos();

    list<Veiculos*> getVeiculos(); // retorna a lista de veiculos
    void adicionaVeiculo(Veiculos *veiculo);
    void removeVeiculo(Veiculos *veiculo);
    Veiculos *buscaChassi(string chassi);
    list<Veiculos*> buscaLocalizacao(string localizacao);
    //list<Veiculos*> veiculosDisponiveis();
    void imprimeListaVeiculos();
};

#endif