#include <iostream>
#include <string>
#include "Pedidos.h"

using namespace std;

int Pedidos::numeroPedido = 0; // contador

Pedidos::Pedidos() {
    this->nomePedido = "";
    this->coleta = "";
    this->entrega = "";
    this->peso = 0.0;
}

Pedidos::Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga) {
    setNumeroPedido();
    setNomePedido(produto);
    setColeta(local_coleta);
    setEntrega(local_entrega);
    setPeso(peso_carga);
}

Pedidos::~Pedidos(){}

void Pedidos::setNumeroPedido() {
    numeroPedido++;
}

int Pedidos::getNumeroPedido() {
    return numeroPedido;
}

void Pedidos::setNomePedido(string produto) {
    this->nomePedido = produto;
}

string Pedidos::getNomePedido() {
   return this->nomePedido;
}

void Pedidos::setColeta(string local_coleta) {
    this->coleta = local_coleta;
}

string Pedidos::getColeta() {
    return this->coleta;
}

void Pedidos::setEntrega(string local_entrega) {
    this->entrega = local_entrega;
}

string Pedidos::getEntrega() {
    return this->entrega;
}

void Pedidos::setPeso(float peso_carga) {
    this->peso = peso_carga;
}

float Pedidos::getPeso() {
    return this->peso;
}