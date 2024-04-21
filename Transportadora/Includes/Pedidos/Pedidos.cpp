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

Pedidos::Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga, float LA[3], float LO[3]) {
    setNumeroPedido();
    setNomePedido(produto);
    setColeta(local_coleta);
    setEntrega(local_entrega);
    setPeso(peso_carga);
    setLatitude(LA);
    setLongitude(LO);
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

void Pedidos::setLatitude(float LA[3]) {
    float x, y, z, total1;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            x = LA[i]*60;
        }

        if(i == 1) {
            y = LA[i]; // * 1
        }

        if(i == 2) {
            z = LA[i]/60;
        }

        total1 = (x + y + z)*111.32;
    }

    this->latitude = total1;
}

float Pedidos::getLatitude() {
    return this->latitude;
}

void Pedidos::setLongitude(float LO[3]) {
    float x, y, z, total2;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            x = LO[i]*60;
        }

        if(i == 1) {
            y = LO[i]; // * 1
        }

        if(i == 2) {
            z = LO[i]/60;
        }

        total2 = (x + y + z)*111.32;
    }

    this->longitude = total2;
}

float Pedidos::getLongitude() {
    return this->longitude;
}

ostream& operator<<(ostream& out, Pedidos* pedido) {
    out << "Capacidade: " << pedido->getNomePedido() << 
    "\nModelo: " << pedido->getColeta() << 
    "\nAno: " << pedido->getEntrega() << 
    "\nChassi: " << pedido->getPeso() << 
    "\nLocalizacao: " << pedido->getLatitude() <<
    "\nLatitude: " << pedido->getLongitude(); 
    return out;
}
