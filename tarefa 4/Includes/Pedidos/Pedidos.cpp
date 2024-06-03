#include "Pedidos.h"

using namespace std;

int Pedidos::numeroPedido = 0; // contador

Pedidos::Pedidos() {
    this->nomePedido = "";
    this->coleta = "";
    this->entrega = "";
    this->peso = 0.0;
    this->numero = 0;
    this->cliente = nullptr;
}

Pedidos::Pedidos(string produto, string local_coleta, string local_entrega, float peso_carga, float latitude, float longitude) {
    setNomePedido(produto);
    setColeta(local_coleta);
    setEntrega(local_entrega);
    setPeso(peso_carga);
    setLatitude(latitude);
    setLongitude(longitude);
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

void Pedidos::setVolume(float volume) {
    this->volume = volume;
}

float Pedidos::getVolume() {
    return this->volume;
}

void Pedidos::setLatitude(float latitude) {
    this->latitude = latitude;
}

float Pedidos::getLatitude() {
    return this->latitude;
}

void Pedidos::setLongitude(float longitude) {
    this->longitude = longitude;
}

float Pedidos::getLongitude() {
    return this->longitude;
}

void Pedidos::setPrioridade(string prioridade){
    if (prioridade == "sim" || prioridade == "Sim")
        this->prioridade = true;
    
    else
        this->prioridade = false;
}

bool Pedidos::getPrioridade() {
    return this->prioridade;
}

void Pedidos::setCliente(Clientes* cliente){
    this->cliente = cliente;
}

Clientes* Pedidos::getCliente (){
    return cliente;
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
