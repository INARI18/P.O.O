#ifndef ESCOLHE_VEICULO_H
#define ESCOLHE_VEICULO_H

#include <iostream>
#include <string>

using namespace std;

enum class TipoVeiculo { 
    Carro,
    Caminhao,
    Caminhonete,
    Invalido
};

TipoVeiculo EscolheVeiculo(const string classe);

#endif