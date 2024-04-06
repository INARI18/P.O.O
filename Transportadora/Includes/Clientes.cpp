#include <iostream>
#include <ctype.h>
#include "Clientes.h"

using namespace std; 

int Clientes::setNome(string nome_cliente) {
    for(char aux : nome_cliente) {
            // verifica se o valor de aux é uma letra
            if (!(isalpha(aux))) {  
                return 0;
            }
        }
    this->nome = nome_cliente;
}

string Clientes::getNome() {
    if(this->nome.empty()) { // verifica se a string está vazia
        return "";
    }
    return this->nome; 
}

int Clientes::setIdade(int idade_cliente) {
    if(idade > 0) {
    this->idade = idade_cliente;
    }

    else {
        return 0;
    }
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