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
    Pedidos();
    ~Pedidos();
    
    void setNumeroPedido(int numero);
    int getNumeroPedido();

    void setNomePedido(string produto);
    string getNomePedido();

    void setColeta(string local_coleta);
    string getColeta(); 

    void setEntrega(string local_entrega);
    string getEntrega();

    void setPeso(float peso_carga);
    float getPeso();
};

#endif