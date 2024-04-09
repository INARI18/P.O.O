#include <iostream>
#include <iomanip> // setprecision 
#include "PrintaFormulario.h"
#include "Veiculos.h"
#include "Clientes.h"
#include "Pedidos.h"
#include "Carro.h"
#include "Caminhonete.h"
#include "Caminhao.h"

using namespace std;

void PrintaFormulario(Veiculos *objeto, Clientes* pCliente, Pedidos* pPedido) {
    cout << "\t\t|PEDIDO #" << pPedido->getNumeroPedido() << "|"

    << "\n - Modelo: " << objeto->getModelo()
    << "\n - Capacidade de carga: " << objeto->getCapacidade() << "Kg"
    << "\n - Ano: " << objeto->getAno()
    << "\n - Chassi: " << objeto->getChassi()
    << "\n - Localizacao: " << objeto->getLocalizacao();

    // Downcast carro
    /*Carro *carro = dynamic_cast<Carro*>(objeto);
    if (carro) {
        a;
    }
    
    // Downcast caminhonete
    Caminhonete *caminhonete = dynamic_cast<Caminhonete*>(objeto);
    if (caminhonete) {
        a;
    }*/
    
    // Downcast caminhao
    Caminhao *caminhao = dynamic_cast<Caminhao*>(objeto);
    if (caminhao) {
        cout << "\n - Altura: " << fixed << setprecision(2) << caminhao->getAltura() << "m"
        << "\n - Largura: " << fixed << setprecision(2) << caminhao->getLargura() << "m"
        << "\n - Comprimento: " << fixed << setprecision(2) << caminhao->getComprimento() << "m"
        << "\n - Metros Cubicos: " << fixed << setprecision(2) << caminhao->getM3() << "m3"
        << "\n - Carga: " << caminhao->getCarga();
    }

    cout << "\n\n - Nome: " << pCliente->getNome()
    << "\n - Idade: " << pCliente->getIdade()
    << "\n - Endereco: " << pCliente->getEndereco()
        
    << "\n\n - Local de Coleta: " << pPedido->getColeta()
    << "\n - Local de Entrega: " << pPedido->getEntrega()
    << "\n - Peso: " << pPedido->getPeso() << "kg\n" << endl;
}
