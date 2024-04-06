#include <iostream>
#include "PrintaFormulario.h"
#include "Veiculos.h"
#include "Clientes.h"
#include "Pedidos.h"

using namespace std;

void PrintaFormulario(Veiculos x, Clientes y, Pedidos z) {
    if (x.getTipo() != "0") { 

        // printa as informações completas caso tenha inserido uma palavra valida
        cout << "\t\t|PEDIDO #" << z.getNumeroPedido() << "|"

        << "\n - Veiculo: " << x.getTipo()
        << "\n - Modelo: " << x.getModelo()
        << "\n - Capacidade: " << x.getCapacidade() << "L"
        << "\n - Ano: " << x.getAno()
        << "\n - Chassi: " << x.getChassi()
        << "\n - Localizacao: " << x.getLocalizacao()

        << "\n\n - Nome: " << y.getNome()
        << "\n - Idade: " << y.getIdade()
        << "\n - Endereco: " << y.getEndereco()

        << "\n\n - Local de Coleta: " << z.getColeta()
        << "\n - Local de Entrega: " << z.getEntrega()
        << "\n - Peso: " << z.getPeso() << "kg" << endl;
    }
}