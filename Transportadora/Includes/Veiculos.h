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
    void setTipo(string tipo);
    string getTipo();

    void setCapacidade(int cap);
    int getCapacidade();

    void setAno(int ano);
    int getAno();

    void setChassi(string chassi);
    string getChassi();

    void setModelo(string modelo);
    string getModelo();

    void setLocalizacao(string localizacao);
    string getLocalizacao();
};

#endif


