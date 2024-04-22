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
    if(isdigit(codigo)) {
        for(auto &pedido : ListaPedidos) {
            if(pedido->getNumeroPedido() == codigo) {
                return pedido;
            }
            throw runtime_error("Pedido nao encontrado");
        }
    }
    throw runtime_error("Codigo de Pedido invalido");
}

void ControlePedidos::ImprimeListaPedidos(){
    for(auto &pedido : ListaPedidos) {
        cout << "" << pedido << endl;
    }
}