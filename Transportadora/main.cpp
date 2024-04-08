#include <iostream>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/PrintaFormulario.h"

using namespace std;

int main() {

    Veiculos *V1 = new Veiculos("CARRO", 432, 2024, "9BD111060T5002156", "Nissan Kicks", "Garagem");
    Clientes *C1 = new Clientes("Bia", 20, "Alegrete, RS");
    Pedidos *P1 = new Pedidos();
    P1->setNumeroPedido(546);
    P1->setNomePedido("Teclado");
    P1->setColeta("Sao Paulo, SP");
    P1->setEntrega("Alegrete, RS");
    P1->setPeso(0.556);

    PrintaFormulario(V1, C1, P1);

    delete V1;
    delete C1;
    delete P1;

    return 0;
}
