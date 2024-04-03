#ifndef CLIENTES_H
#define CLIENTES_H

#include <iostream>

using namespace std;

class Clientes {
private:
    char nome;
    int idade;
    string endereco;

public:
    void setNome(char);
    char getNome();

    void setIdade(int);
    int getIdade();

    void setEndereco(string);
    string getEndereco();
};

#endif