#include <iostream>

using namespace std; // simplifica a sintaxe do código

class Veiculos {
private:
    string tipo;
    int capacidade;
    int ano;
    string chassi;
    string modelo;
    string localizacao;

public:
    void setTipo(string tipoV) {
        for (auto &letras : tipoV) { // referência e loop range-based
            letras = tolower(letras); // a referência letras recebe a versão minuscula (tolower) e modifica o valor dentro de tipo
        }

        if (tipoV == "carro" || tipoV == "caminhonete" || tipoV == "caminhao") {
            this->tipo = tipoV;
        }

        else
            this->tipo = "Erro!";
    }

    string getTipo() {
        return this->tipo;
    }

    void setCapacidade(int cap) {
        this->capacidade = cap;
    }

    int getCapacidade() {
        return this->capacidade;
    }

    void setAno(int data) {
        this->ano = data;
    }

    int getAno() {
        return this->ano;
    }

    void setChassi(string chassi) {
        this->chassi = chassi;
    }

    string getChassi() {
        return this->chassi;
    }

    void setModelo(string modelo_Veiculo) {
        this->modelo = modelo_Veiculo;
    }

    string getModelo() {
        return this->modelo;
    }

    void setLocalizacao(string localizacao) {
        this->localizacao = localizacao;
    }

    string getLocalizacao() {
        return this->localizacao;
    }
};

class Clientes {
private:
    string nome;
    int idade;
    string endereco;

public:
    void setNome(string nome_cliente) {
        this->nome = nome_cliente;
    }

    string getNome() {
        return this->nome;
    }

    void setIdade(int idade_cliente) {
        this->idade = idade_cliente;
    }

    int getIdade() {
        return this->idade;
    }

    void setEndereco(string end) {
        this->endereco = end;
    }

    string getEndereco() {
        return this->endereco;
    }
};

class Pedidos {
private:
    string numeroPedido;
    string nomePedido;
    string coleta;
    string entrega;
    float peso;

public:
    void setNumeroPedido(string numero) {
        this->numeroPedido = numero;
    }

    string getNumeroPedido() {
        return this->numeroPedido;
    }

    void setNomePedido(string produto) {
        this->nomePedido = produto;
    }

    string getNomePedido() {
        return this->nomePedido;
    }

    void setColeta(string local_coleta) {
        this->coleta = local_coleta;
    }

    string getColeta() {
        return this->coleta;
    }

    void setEntrega(string local_entrega) {
        this->entrega = local_entrega;
    }

    string getEntrega() {
        return this->entrega;
    }

    void setPeso(float peso_carga) {
        this->peso = peso_carga;
    }

    float getPeso() {
        return this->peso;
    }
};

void PrintaFormulario(Veiculos x, Clientes y, Pedidos z) {
    if (x.getTipo() != "Erro!") { 

        // printa as informações completas caso tenha inserido uma palavra valida
        cout << "\t\t|PEDIDO " << z.getNumeroPedido() << "|"

             << "\n - Veiculo: " << x.getTipo()
             << "\n - Modelo: " << x.getModelo()
             << "\n - Capacidade: " << x.getCapacidade() << "L"
             << "\n - Ano: " << x.getAno()
             << "\n - Chassi: " << x.getChassi()
             << "\n - Localizacao: " << x.getLocalizacao()

             << "\n\n - Nome: " << y.getNome()
             << "\n - Idade: " << y.getIdade()
             << "\n - Endereco: " << y.getEndereco()

             << "\n\n - Local de Coleta: " << z.getColeta()
             << "\n - Local de Entrega: " << z.getEntrega()
             << "\n - Peso: " << z.getPeso() << "kg" << endl;
    }

    else
        cout << "Nao foi possivel concluir o pedido." << endl;
}

int main(void) {
    Veiculos V1;
    V1.setTipo("CARRO");
    V1.setCapacidade(432);
    V1.setAno(2024);
    V1.setChassi("9BD111060T5002156");
    V1.setModelo("Nissan Kicks");
    V1.setLocalizacao("Alegrete");

    Clientes C1;
    C1.setNome("Bia");
    C1.setIdade(20);
    C1.setEndereco("Alegrete");

    Pedidos P1;
    P1.setNumeroPedido("#546");
    P1.setNomePedido("Teclado");
    P1.setColeta("Alegrete");
    P1.setEntrega("Alegrete");
    P1.setPeso(0.556);

    PrintaFormulario(V1, C1, P1);

    return 0;
}
