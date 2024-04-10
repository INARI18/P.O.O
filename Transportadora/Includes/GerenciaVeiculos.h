#ifndef GERENCIA_VEICULOS_H
#define GERENCIA_VEICULOS_H

#include <iostream>
#include <string>
#include <list>
#include "Veiculos.h"

using namespace std;

class GerenciaVeiculos {
private:
    list<Veiculos> veiculos;

public:

    void adicionaVeiculo(const Veiculos veiculo);
    void removeVeiculo(const Veiculos veiculo);
    Veiculos buscaChassi(string chassi);
    list<Veiculos> buscaLocalizacao(string localizacao);
    list<Veiculos> veiculosDisponiveis();
};

#endif