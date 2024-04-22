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
    this->numero = 0;
}

Pedidos::Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga, float LA[3], float LO[3]) {
    setNomePedido(produto);
    setColeta(local_coleta);
    setEntrega(local_entrega);
    setPeso(peso_carga);
    setLatitude(LA);
    setLongitude(LO);
    numero = ++numeroPedido;
}

Pedidos::~Pedidos(){}

int Pedidos::getNumero() {
    return this->numero;
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

void Pedidos::setLatitude(float LA[3]) {
    float total = LA[0] + LA[1]/60 + LA[2]/3600;
    this->latitude = total * 111.32;
}

float Pedidos::getLatitude() {
    return this->latitude;
}

void Pedidos::setLongitude(float LO[3]) {
    float total = LO[0] + LO[1]/60 + LO[2]/3600;
    this->longitude = total * 111.32;
}

float Pedidos::getLongitude() {
    return this->longitude;
}

ostream& operator<<(ostream& out, Pedidos* pedido) {
    out << "Nome Pedido: " << pedido->getNomePedido() << 
    "\nLocal de Coleta: " << pedido->getColeta() << 
    "\nLocal de Entrega: " << pedido->getEntrega() << 
    "\nPeso: " << pedido->getPeso() << 
    "\nLatitude: " << pedido->getLatitude() <<
    "\nLongitude: " << pedido->getLongitude(); 
    return out;
}
