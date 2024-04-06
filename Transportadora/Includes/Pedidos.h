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
    void setNumeroPedido(int numero);

    int getNumeroPedido();

    void setNomePedido(string produto);

    string getNomePedido();

    void setColeta(string local_coleta);

    string getColeta(); 

    void setEntrega(string local_coleta);

    string getEntrega();

    void setPeso(float local_coleta);

    float getPeso();
};

#endif