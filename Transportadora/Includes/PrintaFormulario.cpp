#include <iostream>
#include <iomanip> //setprecision 
#include <string>
#include "PrintaFormulario.h"
#include "Veiculos.h"
#include "Clientes.h"
#include "Pedidos.h"
#include "Caminhao.h"

using namespace std;

void PrintaFormulario(Caminhao *pCam1, Clientes *pCliente, Pedidos *pPedido) {
    //if(!(pCam1->getTipo().empty())) { 
        cout << "\t\t|PEDIDO #" << pPedido->getNumeroPedido() << "|"

        << "\n - Modelo: " << pCam1->getModelo()
        << "\n - Capacidade de carga: " << pCam1->getCapacidade() << "Kg"
        << "\n - Ano: " << pCam1->getAno()
        << "\n - Chassi: " << pCam1->getChassi()
        << "\n - Localizacao: " << pCam1->getLocalizacao()
        << "\n - Altura: " << fixed << setprecision(2) << pCam1->getAltura() << "m"
        << "\n - Largura: " << fixed << setprecision(2) << pCam1->getLargura() << "m"
        << "\n - Comprimento: " << fixed << setprecision(2) << pCam1->getComprimento() << "m"
        << "\n - Metros Cubicos: " << fixed << setprecision(2) << pCam1->getM3() << "m3"
        << "\n - Carga: " << pCam1->getCarga()

        << "\n\n - Nome: " << pCliente->getNome()
        << "\n - Idade: " << pCliente->getIdade()
        << "\n - Endereco: " << pCliente->getEndereco()

        << "\n\n - Local de Coleta: " << pPedido->getColeta()
        << "\n - Local de Entrega: " << pPedido->getEntrega()
        << "\n - Peso: " << pPedido->getPeso() << "kg\n" << endl;
    //}
}