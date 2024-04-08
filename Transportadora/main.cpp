#include <iostream>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/PrintaFormulario.h"
#include "Includes/Caminhao.h"

using namespace std;

int main() {
    
    Caminhao *Cam1 = new Caminhao(432, 2024, "9BD111060T5002156", "Nissan Kicks", "Garagem", 22.5, "cimento");
    //Veiculos *V1 = new Veiculos(432, 2024, "9BD111060T5002156", "Nissan Kicks", "Garagem");
    Clientes *C1 = new Clientes("Bia", 20, "Alegrete, RS");
    Pedidos *P1 = new Pedidos(546, "Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556);
    
    PrintaFormulario(Cam1, C1, P1);

    delete Cam1;
    delete C1;
    delete P1;

    return 0;
}
