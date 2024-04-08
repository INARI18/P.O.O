#ifndef VEICULOS_H
#define VEICULOS_H

#include <iostream>

using namespace std; // simplifica a sintaxe do código

class Veiculos {
private:
    string tipo;
    int capacidade;
    int ano;
    string chassi;
    string modelo;
    string localizacao;

public:
    Veiculos();
    Veiculos(string Vtipo, int cap, int ano, string chassi, string modelo, string localizacao); // construtor
    ~Veiculos();

    int setTipo(string tipo);
    string getTipo();

    int setCapacidade(int cap);
    int getCapacidade();

    int setAno(int ano);
    int getAno();

    int setChassi(string chassi);
    string getChassi();

    int setModelo(string modelo); 
    string getModelo();

    int setLocalizacao(string localizacao);
    string getLocalizacao();
};

#endif


