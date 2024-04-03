#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>

using namespace std;

class Pedidos {
private:
    int numeroPedido;
    string nomePedido;
    string coleta;
    string entrega;
    float peso;

public:
    void setNumeroPedido(int);

    int getNumeroPedido();

    void setNomePedido(string);

    string getNomePedido();

    void setColeta(string);

    string getColeta(); 

    void setEntrega(string);

    string getEntrega();

    void setPeso(float);

    float getPeso();
};

#endif