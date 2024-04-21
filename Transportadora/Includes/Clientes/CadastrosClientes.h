#ifndef CADASTROS_CLIENTES_H
#define CADASTROS_CLIENTES_H

#include <iostream>
#include <string>
#include <list>

#include "Clientes.h"

using namespace std;

class CadastrosClientes {
private:
    list<Clientes*> ListaClientes;

public:
    CadastrosClientes();
    ~CadastrosClientes();

    list<Clientes*> getListaClientes();
    void adicionaCliente(Clientes *cliente);
    void removeCliente(Clientes *cliente);
    Clientes *buscaNomeCliente(string nome_cliente);
    void ImprimeListaClientes();
};

#endif