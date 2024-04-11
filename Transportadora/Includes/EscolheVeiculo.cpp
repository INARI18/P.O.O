#include <iostream>
#include <string>
#include "EscolheVeiculo.h"

using namespace std;

TipoVeiculo EscolheVeiculo(const string classe) {
    if (classe == "Carro") {
        return TipoVeiculo::Carro;
    } 
    
    else if (classe == "Caminhao") {
        return TipoVeiculo::Caminhao;
    } 
    
    else if (classe == "Caminhonete") {
        return TipoVeiculo::Caminhonete;
    }

    return TipoVeiculo::Invalido;
}

