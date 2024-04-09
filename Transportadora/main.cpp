#include <iostream>
#include <string>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/Carro.h"
#include "Includes/Caminhonete.h"
#include "Includes/Caminhao.h"
#include "Includes/PrintaFormulario.h"
#include "Includes/EscolheVeiculo.h"

using namespace std;

int main(void) {
    string classe;
    cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
    cin >> classe;

    TipoVeiculo tipo = EscolheVeiculo(classe);
    Veiculos *V1 = NULL;

    switch (tipo) {
        case TipoVeiculo::Carro:
            V1 = new Carro(); 
            break;
        case TipoVeiculo::Caminhao:
            V1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", 
    "Garagem", 2.60, 2.44, 8.00, "Madeira");
            break;
        case TipoVeiculo::Caminhonete:
            V1 = new Caminhonete(); 
            break;
        default:
            cout << "Tipo de veiculo nao reconhecido." << endl;
            return 0;
    }

    Clientes *C1 = new Clientes("Bia", 20, "Alegrete, RS");
    Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556);

    PrintaFormulario(V1, C1, P1);

    delete V1;
    delete C1;
    delete P1;

    // reseta a string classe 
    classe.clear();
    cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
    cin >> classe;

    tipo = EscolheVeiculo(classe);

    Veiculos *V2 = NULL;

    switch (tipo) {
        case TipoVeiculo::Carro:
            V2 = new Carro(); 
            break;
        case TipoVeiculo::Caminhao:
            V2 = new Caminhao(27000, 2015, "1G1FP23E4NL100000", "Carreta", 
                "Garagem", 2.85, 2.44, 14.8, "Areia");
            break;
        case TipoVeiculo::Caminhonete:
            V2 = new Caminhonete(); 
            break;
        default:
            cout << "Tipo de veículo nao reconhecido." << endl;
            return 0; 
    }

    Clientes *C2 = new Clientes("Alguem", 99, "Nao Me Toque, RS");
    Pedidos *P2 = new Pedidos("Geladeira", "Rio de Janeiro, RJ", "Nao Me Toque, RS", 54);

    PrintaFormulario(V2, C2, P2);
    delete V2;
    delete C2;
    delete P2;
    
    return 0;
}
