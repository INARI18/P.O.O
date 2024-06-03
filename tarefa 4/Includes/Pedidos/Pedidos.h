#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>

#include "..\Clientes\Clientes.h"

using namespace std;

class Pedidos {
private:
    static int numeroPedido;
    int numero;
    string nomePedido;
    string coleta;
    string entrega;
    float peso;
    float volume;
    float latitude;
    float longitude;
    bool prioridade;
    Clientes* cliente;

public:
    Pedidos();
    Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga, float latitude, float longitude);
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

    void setVolume(float volume);
    float getVolume();

    void setLatitude(float latitude);
    float getLatitude();

    void setLongitude(float longitude);
    float getLongitude();

    void setPrioridade(string prioridade);
    bool getPrioridade();

    void setCliente (Clientes* cliente);
    Clientes* getCliente ();

    friend ostream& operator<<(ostream& out, Pedidos* pedido);
};

#endif