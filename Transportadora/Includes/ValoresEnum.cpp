#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "ValoresEnum.h"
#include "Clientes.h"
#include "Pedidos.h"
#include "Carro.h"
#include "Caminhao.h"
#include "Caminhonete.h"

using namespace std; 

Clientes *CriaCliente(Nome nome_cliente) {
    srand(time(nullptr));
    int idade = rand() % 84 + 16; // dade aleatória entre 16 e 99
    string endereco = "Algum Lugar";
    Nome nomeAleatorio = SortearNome(); // Sorteia um nome aleatório
    return new Clientes(nomeAleatorio, idade, endereco);
}

Nome SortearNome() {
    srand(time(nullptr)); 
    int num = rand() % 10;
    return static_cast<Nome>(num); // converte o número em um valor do enum Nome
}

Pedidos *CriaPedido() {
    
}

Carro *CriaCarro(CargaCarro capacidade, Ano ano, Chassi chassi, ModeloCarro modelo, NumeroPortas n_portas, Cambio cambio) {
    
}

Caminhao *CriaCaminhao(CargaCaminhao capacidade, Ano ano, Chassi chassi, ModeloCaminhao modelo, Altura altura, Largura largura, Comprimento comprimento) {
    
}

Caminhonete *CriaCaminhonete(CargaCaminhonete capacidade, Ano ano, Chassi chassi, ModeloCaminhonete, Cacamba cacamba) {
    
}