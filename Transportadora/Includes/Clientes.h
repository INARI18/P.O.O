#ifndef CLIENTES_H
#define CLIENTES_H

#include <iostream>

using namespace std;

class Clientes {
private:
    string nome;
    int idade;
    string endereco;

public:
    Clientes();
    ~Clientes();
    
    int setNome(string nome_cliente);
    string getNome();

    void setIdade(int idade_cliente);
    int getIdade();

    void setEndereco(string end);
    string getEndereco();
};

#endif