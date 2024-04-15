#ifndef GERENCIA_VEICULOS_H
#define GERENCIA_VEICULOS_H

#include <iostream>
#include <string>
#include <list>
#include "Veiculos.h"
#include "Carro.h"
#include "Caminhonete.h"
#include "Caminhao.h"

using namespace std;

class GerenciaVeiculos {
private:
    // armazena ponteiros
    list<Veiculos*> veiculos;

public:
    GerenciaVeiculos();
    ~GerenciaVeiculos();

    list<Veiculos*> getVeiculos(); // retorna a lista de veiculos

    void adicionaVeiculo(Carro *carro);
    void adicionaVeiculo(Caminhonete *caminhonete);
    void adicionaVeiculo(Caminhao *caminhao);
    
    void removeVeiculo(Veiculos *veiculo);
    
    Veiculos *buscaChassi(string chassi);
    list<Veiculos*> buscaLocalizacao(string localizacao);
    
    //list<Veiculos*> veiculosDisponiveis();
    void imprimeListaVeiculos();
};

#endif