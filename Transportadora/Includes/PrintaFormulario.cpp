#include <iostream>
#include "PrintaFormulario.h"
#include "Veiculos.h"
#include "Clientes.h"
#include "Pedidos.h"
#include "Caminhao.h"

using namespace std;

void PrintaFormulario(Veiculos *pCam1, Clientes *pCliente, Pedidos *pPedido) {
    //if(!(pCam1->getTipo().empty())) { 

        // printa as informações completas caso tipo não esteja vapPedidoio
        cout << "\t\t|PEDIDO #" << pPedido->getNumeroPedido() << "|"

        << "\n - Modelo: " << pCam1->getModelo()
        << "\n - Capacidade: " << pCam1->getCapacidade() << "L"
        << "\n - Ano: " << pCam1->getAno()
        << "\n - Chassi: " << pCam1->getChassi()
        << "\n - LocalipPedidoacao: " << pCam1->getLocalizacao()

        << "\n\n - Nome: " << pCliente->getNome()
        << "\n - Idade: " << pCliente->getIdade()
        << "\n - Endereco: " << pCliente->getEndereco()

        << "\n\n - Local de Coleta: " << pPedido->getColeta()
        << "\n - Local de Entrega: " << pPedido->getEntrega()
        << "\n - Peso: " << pPedido->getPeso() << "kg" << endl;
    //}
}