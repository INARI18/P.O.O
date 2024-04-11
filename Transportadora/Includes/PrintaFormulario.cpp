#include <iostream>
#include <iomanip> // setprecision 
#include "PrintaFormulario.h" 

using namespace std;

void PrintaFormulario(Veiculos *pVeiculo, Clientes *pCliente, Pedidos *pPedido) {
    cout << "\t\t|PEDIDO #" << pPedido->getNumeroPedido() << "|"

    << "\n - Modelo: " << pVeiculo->getModelo()
    << "\n - Capacidade de carga: " << pVeiculo->getCapacidade() << "Kg"
    << "\n - Ano: " << pVeiculo->getAno()
    << "\n - Chassi: " << pVeiculo->getChassi()
    << "\n - Localizacao: " << pVeiculo->getLocalizacao()
    << "\n - Capacidade Itens: " << pVeiculo->getItens();
    

    // Downcast carro
    Carro *carro = dynamic_cast<Carro*>(pVeiculo);
    if (carro) {
        cout << "\n - Numero de Portas: " << carro->getPortas()
        << "\n - Cambio: " << carro->getCambio();
    }
    
    // Downcast caminhonete
    Caminhonete *caminhonete = dynamic_cast<Caminhonete*>(pVeiculo);
    if (caminhonete) {
        cout << "\n - Tipo de Cacamba: " << caminhonete->getCacamba();
    }
    
    // Downcast caminhao
    Caminhao *caminhao = dynamic_cast<Caminhao*>(pVeiculo);
    if (caminhao) {
        cout << "\n - Altura: " << fixed << setprecision(2) << caminhao->getAltura() << "m"
        << "\n - Largura: " << fixed << setprecision(2) << caminhao->getLargura() << "m"
        << "\n - Comprimento: " << fixed << setprecision(2) << caminhao->getComprimento() << "m"
        << "\n - Metros Cubicos: " << fixed << setprecision(2) << caminhao->getM3() << "m3";
    }

    cout << "\n\n - Nome: " << pCliente->getNome()
    << "\n - Idade: " << pCliente->getIdade()
    << "\n - Endereco: " << pCliente->getEndereco()
        
    << "\n\n - Local de Coleta: " << pPedido->getColeta()
    << "\n - Local de Entrega: " << pPedido->getEntrega()
    << "\n - Peso: " << pPedido->getPeso() << "kg\n" << endl;
}
