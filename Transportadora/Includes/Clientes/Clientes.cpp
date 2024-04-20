#include <iostream>
#include <string>
#include <ctype.h>
#include "Clientes.h"

using namespace std; 

Clientes::Clientes(){
    this->nome = "";
    this->idade = 0;
    this->endereco = "";
}

Clientes::Clientes(string nome_cliente, int idade_cliente, string end){
    setNome(nome_cliente);
    setIdade(idade_cliente);
    setEndereco(end);
}

Clientes::~Clientes(){}

int Clientes::setNome(string nome_cliente) {
    for(char aux : nome_cliente) {
            // verifica se o valor de aux é uma letra
            if (!(isalpha(aux))) {  
                return 0;
            }
        }
    this->nome = nome_cliente;
    return 1;
}

string Clientes::getNome() {
    if(this->nome.empty()) { // verifica se a string está vazia
        return "";
    }
    return this->nome; 
}

void Clientes::setIdade(int idade_cliente) {
    this->idade = idade_cliente;
}

int Clientes::getIdade() {
    if(this->idade > 0) {
        return this->idade;
    }
   return 0;
}

void Clientes::setEndereco(string end) {
    this->endereco = end;
}

string Clientes::getEndereco() {
    return this->endereco;
}