#ifndef VEICULOS_H
#define VEICULOS_H

#include <iostream>
#include <string>

using namespace std; // simplifica a sintaxe do código

class Veiculos {
protected:
    int capacidade;
    int ano;
    string chassi;
    string modelo;
    string localizacao;
    int disponibilidade;
    int itens;
    float latitude;
    float longitude;

public:
    Veiculos();
    Veiculos(int cap, int ano, string Vchassi, string modelo, string localizacao, float LA[3], float LO[3]); // construtor
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

    void setDisponibilidade();
    int getDisponibilidade();

    void setItens(int value);
    int getItens();
    void decrementarItens();

    void setLatitude(float LA[3]);
    float getLatitude();

    void setLongitude(float LO[3]);
    float getLongitude();
    
    friend ostream& operator<<(ostream& out, Veiculos* veiculo);
    //bool operator==(const Veiculos& outro);
};

#endif


