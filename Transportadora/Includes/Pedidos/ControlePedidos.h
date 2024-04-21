#ifndef CONTROLE_PEDIDOS_H
#define CONTROLE_PEDIDOS_H

#include <iostream>
#include <list>
#include <string>

#include "Pedidos.h"

class ControlePedidos {
private:
    list<Pedidos*>ListaPedidos;

public:
    list<Pedidos*> getListaPedidos();
    void adicionaPedido(Pedidos *pedido);
    void removePedido(Pedidos *pedido);
    Pedidos* buscaPedido(int codigo);
    void ImprimeListaPedidos(); 
};

#endif