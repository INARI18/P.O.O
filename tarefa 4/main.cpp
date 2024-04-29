#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <time.h>

#include "Includes/Veiculos/Veiculos.h"
#include "Includes/Veiculos/EscolheVeiculo.h"
#include "Includes/Veiculos/Garagem.h"

#include "Includes/Clientes/Clientes.h"
#include "Includes/Clientes/CadastrosClientes.h"

#include "Includes/Pedidos/Pedidos.h"
#include "Includes/Pedidos/ControlePedidos.h"

#include "Includes/Carro/Carro.h"
#include "Includes/Caminhonete/Caminhonete.h"
#include "Includes/Caminhao/Caminhao.h"

#include "Includes/Atendimento/Atendimento.h"

#include "Includes/EntradaDados/EntradaDados.h"

using namespace std;

int main(void) {

//  Garagem *listaVeiculos = new Garagem;
    ControlePedidos *listaPedidos = new ControlePedidos;
    CadastrosClientes *listaClientes = new CadastrosClientes;
//  Atendimento *novo = new Atendimento;

    EntradaDados::instancia (listaClientes, listaPedidos, "data/dados_entregas.csv");

    listaClientes->ImprimeListaClientes();

/*
    float LAp[3] = {-28, 15, 48};
    float LOp[3] = {-52, 52, 22};
    float LAp2[3] = {-23, 33, 1}; 
    float LOp2[3] = {-46, -37, -59};

    float LAv[3] = {23.0, 30.0, 36.50};
    float LOv[3] = {46.0, 38.0, 32.90};
    float LAv5[3] = {-29.7753, -57.0884, 20};
    float LOv5[3] = {-57.0884, -29.7753, 40};
    float LAv6[3] = {22.0, 30.0, 44.04};
    float LOv6[3] = {-50.0, -50.0, 30.2};


    Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556, LAp, LOp);
    Pedidos *P2 = new Pedidos("Mouse", "Rio de Janeiro, RJ", "Uruguaiana, RS", 0.790, LAp2, LOp2);

    listaPedidos->adicionaPedido(P1);
    listaPedidos->adicionaPedido(P2);
    listaPedidos->ImprimeListaPedidos();

    cout << "" << endl;

    Clientes *C1 = new Clientes("Batman", 78, "Gotham");
    Clientes *C2 = new Clientes("Robin", 15, "Gotham");

    listaClientes->adicionaCliente(C1);
    listaClientes->adicionaCliente(C2);
    listaClientes->ImprimeListaClientes();

    cout << "" << endl;

    Veiculos *V1;
    Veiculos *V2;
    Veiculos *V3;

    V1 = new Caminhao(27000, 2015, "ZG1LM23N4OP105780", "Carreta", "Garagem", 2.85, 2.44, 14.8, LAv5, LOv5);
    V2 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico", LAv, LOv);
    V3 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta", LAv6, LOv6);

    listaVeiculos->adicionaVeiculo(V1);
    listaVeiculos->adicionaVeiculo(V2);
    listaVeiculos->adicionaVeiculo(V3);

    novo->MenorDistancia(listaVeiculos, listaPedidos);

    delete V1;
    delete V2;
    delete V3;

    delete P1;
    delete P2;

    delete C1;
    delete C2;

    delete novo;
    delete listaVeiculos;
    delete listaPedidos;
    delete listaClientes;

*/
    return 0;
}

