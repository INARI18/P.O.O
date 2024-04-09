#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include <string>

using namespace std;

class Pedidos {
private:
    static int numeroPedido; // membro estático
    string nomePedido;
    string coleta;
    string entrega;
    float peso;

public:
    Pedidos();
    Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga);
    ~Pedidos();
    
    static void setNumeroPedido();
    static int getNumeroPedido();

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