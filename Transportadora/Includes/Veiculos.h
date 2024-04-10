#ifndef VEICULOS_H
#define VEICULOS_H

#include <iostream>
#include <string>

using namespace std; // simplifica a sintaxe do código

class Veiculos {
private:
    int capacidade;
    int ano;
    string chassi;
    string modelo;
    string localizacao;
    int disponibilidade;
    int itens;

public:
    Veiculos();
    Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao); // construtor
    virtual ~Veiculos();

    int setCapacidade(int cap);
    int getCapacidade();

    int setAno(int ano);
    int getAno();

    int setChassi(string Vchassi);
    string getChassi();

    int setModelo(string modelo); 
    string getModelo();

    int setLocalizacao(string localizacao);
    string getLocalizacao();

    int setDisponibilidade();
    int getDisponibilidade();

    virtual int setItens();
    int getItens();
};

#endif


