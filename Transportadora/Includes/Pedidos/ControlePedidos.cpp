#include <iostream>
#include <string>
#include <list>
#include <cctype>

#include "ControlePedidos.h"

list<Pedidos*> ControlePedidos::getListaPedidos() {
    return ListaPedidos;
}

void ControlePedidos::adicionaPedido(Pedidos *pedido) {
    ListaPedidos.push_back(pedido);
}

void ControlePedidos::removePedido(Pedidos *pedido) {
    ListaPedidos.remove(pedido);
}

Pedidos *ControlePedidos::buscaPedido(int codigo) {
    for(auto &pedido : ListaPedidos) {
        if(pedido->getNumero() == codigo) {
            return pedido;
        }
    }
    cout << "Pedido nao encontrado" << endl;
}

void ControlePedidos::ImprimeListaPedidos(){
    if (ListaPedidos.empty()) {
        cout << "Lista de Pedidos Vazia!" << endl;
    } 
    
    else {
        for(auto &pedido : ListaPedidos) {
            cout << "" << pedido << endl;
        }
    }
}