#include <iostream>
#include <ctype.h>
#include "Clientes.h"

using namespace std; 

int Clientes::setNome(string nome_cliente) {
        for(char aux : nome_cliente) {
            // funçao que verifica se o valor de aux é uma letra
            if (!(isalpha(aux))) {  
                cout << "Erro! Por favor, digite um nome valido." << endl;
                return 0;
                break;
            }
        }
        this->nome = nome_cliente;
        return 1;
    }

string Clientes::getNome() {
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