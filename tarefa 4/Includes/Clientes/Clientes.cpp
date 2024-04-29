#include <iostream>
#include <string>
#include <ctype.h>
#include "Clientes.h"

using namespace std; 

Clientes::Clientes(){
    this->nome = "";
    this->cpf = "";
    this->endereco = "";
    this->telefone = "";
    this->email = "";
    this->idade = 0;
}

Clientes::Clientes(string nome_cliente, int idade_cliente, string end){
    setNome(nome_cliente);
    this->cpf = "";
    setEndereco(end);
    this->telefone = "";
    this->email = "";
    setIdade(idade_cliente);
}

Clientes::~Clientes(){}


int Clientes::setNome(string nome_cliente) {
/*    for(char aux : nome_cliente) {
            // verifica se o valor de aux é uma letra
            if (!(isalpha(aux))) {  
                return 0;
            }
        }   */
    this->nome = nome_cliente;
    return 1;
}

void Clientes::setCPF(string cpf){
    this->cpf = cpf;
}

void Clientes::setEndereco(string end) {
    this->endereco = end;
}

void Clientes::setTelefone(string telefone) {
    this->telefone = telefone;
}

void Clientes::setEmail (string email){
    this->email = email;
}

void Clientes::setIdade(int idade) {
    this->idade = idade;
}


string Clientes::getNome() {
    if(this->nome.empty()) {
        return "";
    }
    return this->nome; 
}

int Clientes::getIdade() {
    if(this->idade > 0) {
        return this->idade;
    }
   return 0;
}

string Clientes::getEndereco() {
    return this->endereco;
}

ostream& operator<<(ostream& out, Clientes* cliente) {
    out << "\nNome: " << cliente->getNome() << 
    "\nEndereco: " << cliente->getEndereco() << 
    "\nIdade: " << cliente->getIdade(); 
    return out;
}