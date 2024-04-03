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
    void setNome(string);
    string getNome();

    void setIdade(int);
    int getIdade();

    void setEndereco(string);
    string getEndereco();
};

#endif