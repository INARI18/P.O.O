#ifndef CLIENTES_H
#define CLIENTES_H

#include <iostream>
#include <string>

using namespace std;

class Clientes {
private:
    string nome;
    string cpf;
    string endereco;
    string telefone;
    string email;
    int idade;

public:
    Clientes();
    Clientes(string nome_cliente, int idade_cliente, string end);
    ~Clientes();
    
    int setNome(string nome_cliente);
    void setCPF(string cpf);
    void setEndereco(string end);
    void setTelefone(string teledone);
    void setEmail(string email);
    void setIdade(int idade);

    string getNome();
    string getCPF();
    string getEndereco();
    string getTelefone();
    string getEmail();
    int getIdade();

    friend ostream& operator<<(ostream& out, Clientes* cliente);
};

#endif