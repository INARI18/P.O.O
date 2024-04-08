#include <iostream>
#include "PrintaFormulario.h"
#include "Veiculos.h"
#include "Clientes.h"
#include "Pedidos.h"

using namespace std;

void PrintaFormulario(Veiculos *pVeiculo, Clientes *pCliente, Pedidos *pPedido) {
    //if(!(pVeiculo->getTipo().empty())) { 

        // printa as informações completas caso tipo não esteja vapPedidoio
        cout << "\t\t|PEDIDO #" << pPedido->getNumeroPedido() << "|"

        << "\n - Veiculo: " << pVeiculo->getTipo()
        << "\n - Modelo: " << pVeiculo->getModelo()
        << "\n - Capacidade: " << pVeiculo->getCapacidade() << "L"
        << "\n - Ano: " << pVeiculo->getAno()
        << "\n - Chassi: " << pVeiculo->getChassi()
        << "\n - LocalipPedidoacao: " << pVeiculo->getLocalizacao()

        << "\n\n - Nome: " << pCliente->getNome()
        << "\n - Idade: " << pCliente->getIdade()
        << "\n - Endereco: " << pCliente->getEndereco()

        << "\n\n - Local de Coleta: " << pPedido->getColeta()
        << "\n - Local de Entrega: " << pPedido->getEntrega()
        << "\n - Peso: " << pPedido->getPeso() << "kg" << endl;
    //}
}