#include <iostream>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/PrintaFormulario.h"

using namespace std;

int main(void) {

    Veiculos V1;
    V1.setTipo("CARRO");
    V1.setCapacidade(432);
    V1.setAno(2024);
    V1.setChassi("9BD111060T5002156");
    V1.setModelo("Nissan Kicks");
    V1.setLocalizacao("Garagem");

    Clientes C1;
    C1.setNome("Bia");
    C1.setIdade(20);
    C1.setEndereco("Alegrete, RS");

    Pedidos P1;
    P1.setNumeroPedido(546);
    P1.setNomePedido("Teclado");
    P1.setColeta("Sao Paulo, SP");
    P1.setEntrega("Alegrete, RS");
    P1.setPeso(0.556);

    PrintaFormulario(V1, C1, P1);

    return 0;
}