#include <iostream>
#include <iomanip>
#include <string>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/Carro.h"
#include "Includes/Caminhonete.h"
#include "Includes/Caminhao.h"
#include "Includes/EscolheVeiculo.h"
#include "Includes/GerenciaVeiculos.h"
#include "Includes/Atendimento.h"

using namespace std;

int main(void) {
    string resposta = "SIM";
    string resposta2;
    string resposta3;
    string classe;
    string n_chassi;

    float LAp[3] = {23.0, 30.0, 29.93};
    float LOp[3] = {046.0, 37.0, 53.01};

    float LAv[3] = {23.0, 30.0, 36.50};
    float LOv[3] = {46.0, 38.0, 32.90};

    float LAv2[3] = {42.0, 40.0, 44.04};
    float LOv2[3] = {-45.0, 25.0, 50.0};

    float LAv3[3] = {22.0, 30.0, 44.04};
    float LOv3[3] = {52.0, 07.0, 30.2};

    Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556, LAp, LOp);

    while (resposta == "SIM") {
        cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
        cin >> classe;

        TipoVeiculo tipo = EscolheVeiculo(classe);
        GerenciaVeiculos *gerenciador = new GerenciaVeiculos;
        Carro *carro1 = nullptr;
        Caminhao *caminhao1 = nullptr;
        Caminhonete *caminhonete1 = nullptr;

        switch (tipo) {
            case TipoVeiculo::Carro: {
                carro1 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico", LAv, LOv);
                gerenciador->adicionaVeiculo(carro1);
                cout << "" << carro1 << endl; 
                break;
            }
            case TipoVeiculo::Caminhao: {
                caminhao1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", "Garagem", 2.60, 2.44, 8.00, LAv2, LOv2);
                gerenciador->adicionaVeiculo(caminhao1);
                cout << "" << caminhao1 << endl; 
                break;
            }
            case TipoVeiculo::Caminhonete: {
                caminhonete1 = new Caminhonete(1350, 2018, "4BCJK26K67E881953", "AlgumTipo", "Garagem", "Fechada", LAv3, LOv3);
                gerenciador->adicionaVeiculo(caminhonete1);
                cout << "" << caminhonete1 << endl; 
                break;
            }
            default:
                cout << "Tipo de veiculo nao reconhecido." << endl;
                break;
        }

        cout << "Deseja remover algum um Veiculo? (Digite SIM ou NAO): ";
        cin >> resposta2;

        if(resposta2 == "SIM") {
            cout << "\nDigite o CHASSI do veiculo a ser removido: ";
            cin >> n_chassi; 
            gerenciador->removeVeiculo(gerenciador->buscaChassi(n_chassi));
        }

        cout << "Deseja imprimir a lista de Veiculos? (Digite SIM ou NAO): ";
        cin >> resposta3;

        if(resposta3 == "SIM") {
            gerenciador->imprimeListaVeiculos();
        }
        

        delete gerenciador;
        if(carro1 != nullptr) {
            delete carro1;
        }

        if(caminhonete1 != nullptr) {
            delete caminhonete1;
        }

        if(caminhao1 != nullptr) {
            delete caminhao1;
        }
    }

    return 0;
}
