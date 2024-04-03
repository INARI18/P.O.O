#include <iostream>
#include "Clientes.h"

using namespace std; 

void Clientes::setNome(char nome_cliente) {
        this->nome = nome_cliente;
    }

char Clientes::getNome() {
    return this->nome;
}

void Clientes::setIdade(int idade_cliente) {
    this->idade = idade_cliente;
}

int Clientes::getIdade() {
    return this->idade;
}

void Clientes::setEndereco(string end) {
    this->endereco = end;
}

string Clientes::getEndereco() {
    return this->endereco;
}