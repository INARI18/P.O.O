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
    void setTipo(string);
    string getTipo();

    void setCapacidade(int);
    int getCapacidade();

    void setAno(int);
    int getAno();

    void setChassi(string);
    string getChassi();

    void setModelo(string);
    string getModelo();

    void setLocalizacao(string);
    string getLocalizacao();
};

#endif


