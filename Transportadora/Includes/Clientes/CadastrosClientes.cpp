#include<iostream>
#include<string>
#include<list>

#include "CadastrosClientes.h"

CadastrosClientes::CadastrosClientes() : ListaClientes() {}

CadastrosClientes::~CadastrosClientes() {
    for (auto cliente : ListaClientes) {
        delete cliente; 
    }
}

list<Clientes*>CadastrosClientes::getListaClientes() {
    return ListaClientes;
}

void CadastrosClientes::adicionaCliente(Clientes *cliente) {        
    ListaClientes.push_back(cliente);
    cout << "Cliente adicionado com sucesso!" << endl;
}

void CadastrosClientes::removeCliente(Clientes *cliente) {
    ListaClientes.remove(cliente);
    delete cliente;
    cout << "Cliente removido com sucesso!" << endl;
}

Clientes *CadastrosClientes::buscaNomeCliente(string nome_cliente) {
    for (auto &cliente : ListaClientes) {
        if (cliente->getNome() == nome_cliente) {
            return cliente;
        }
    }
    throw runtime_error("Cliente nao encontrado");
}

void CadastrosClientes::ImprimeListaClientes() {
    if(!ListaClientes.empty()) {
        for(auto cliente : ListaClientes) {
            cout << "" << cliente << endl;
        }
    } else cout << "Lista de Clientes Vazia!" << endl;
}

