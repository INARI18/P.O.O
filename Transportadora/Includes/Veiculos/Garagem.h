#ifndef GARAGEM_H
#define GARAGEM_H

#include <iostream>
#include <string>
#include <list>
#include "Veiculos.h"
#include "../Carro/Carro.h"
#include "../Caminhonete/Caminhonete.h"
#include "../Caminhao/Caminhao.h"

using namespace std;

class Garagem {
private:
    list<Veiculos*> ListaVeiculos;

public:
    Garagem();
    ~Garagem();

    list<Veiculos*> getListaVeiculos();
    void adicionaVeiculo(Veiculos *veiculo);
    void removeVeiculo(Veiculos *veiculo);
    Veiculos *buscaChassi(string chassi);
    list<Veiculos*> buscaLocalizacao(string localizacao);
    //list<Veiculos*> veiculosDisponiveis();
    void imprimeListaVeiculos();
};

#endif