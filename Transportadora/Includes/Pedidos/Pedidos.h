#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include <string>

using namespace std;

class Pedidos {
private:
    static int numeroPedido;
    int numero;
    string nomePedido;
    string coleta;
    string entrega;
    float peso;
    float latitude;
    float longitude;

public:
    Pedidos();
    Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga, float LA[3], float LO[3]);
    ~Pedidos();
    
    int getNumero();

    void setNomePedido(string produto);
    string getNomePedido();

    void setColeta(string local_coleta);
    string getColeta(); 

    void setEntrega(string local_entrega);
    string getEntrega();

    void setPeso(float peso_carga);
    float getPeso();

    void setLatitude(float LA[3]);
    float getLatitude();

    void setLongitude(float LO[3]);
    float getLongitude();

    friend ostream& operator<<(ostream& out, Pedidos* pedido);
};

#endif