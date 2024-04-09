#include <iostream>
#include <string>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/PrintaFormulario.h"
#include "Includes/Caminhao.h"

using namespace std;

int main(void) {
    
    Caminhao *Cam1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", 
    "Garagem", 2.60, 2.44, 8.00, "Madeira");
    
    Clientes *C1 = new Clientes("Bia", 20, "Alegrete, RS");
    Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556);
    
    PrintaFormulario(Cam1, C1, P1);

    delete Cam1;
    delete C1;
    delete P1;

    Caminhao *Cam2 = new Caminhao(27000, 2015, "1G1FP23E4NL100000", "Carreta", 
    "Garagem", 2.85, 2.44, 14.8, "Areia");
    
    Clientes *C2 = new Clientes("Alguem", 99, "Nao Me Toque, RS");
    Pedidos *P2 = new Pedidos("Geladeira", "Rio de Janeiro, RJ", "Nao Me Toque, RS", 54);

    PrintaFormulario(Cam2, C2, P2);

    delete Cam2;
    delete C2;
    delete P2;

    return 0;
}
