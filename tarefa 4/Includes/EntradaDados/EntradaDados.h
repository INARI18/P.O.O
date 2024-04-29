#include <fstream>

#include "..\Clientes\Clientes.h"
#include "..\Clientes\CadastrosClientes.h"
#include "..\Pedidos\Pedidos.h"
#include "..\Pedidos\ControlePedidos.h"

#pragma once

class EntradaDados {

public:
    static void instancia (CadastrosClientes* listaClientes, ControlePedidos* listaPedidos, string dataPath);

};