#include <iostream>
#include <iomanip>
#include <string>

#include "Includes/Veiculos/Veiculos.h"
#include "Includes/Clientes/Clientes.h"
#include "Includes/Pedidos/Pedidos.h"
#include "Includes/Carro/Carro.h"
#include "Includes/Caminhonete/Caminhonete.h"
#include "Includes/Caminhao/Caminhao.h"
#include "Includes/Veiculos/EscolheVeiculo.h"
#include "Includes/Veiculos/Garagem.h"
#include "Includes/Atendimento/Atendimento.h"

using namespace std;

int main(void) {
    string resposta = "SIM";
    string resposta2;
    string resposta3;
    string resposta4;
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

    while (resposta == "SIM") {

        cout << "Digite o tipo de veiculo que deseja adicionar (Carro, Caminhao, Caminhonete): ";
        cin >> classe;
        
        TipoVeiculo tipo = EscolheVeiculo(classe);
        Garagem *gerenciador = new Garagem;
        Veiculos *V1 = new Veiculos;
        Atendimento *novoAtendimento = new Atendimento;
        Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556, LAp, LOp);

        switch (tipo) {
            case TipoVeiculo::Carro: {
                V1 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico", LAv, LOv);
                gerenciador->adicionaVeiculo(V1);
                cout << "" << V1 << endl; 
                break;
            }
            case TipoVeiculo::Caminhao: {
                V1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", "Garagem", 2.60, 2.44, 8.00, LAv2, LOv2);
                gerenciador->adicionaVeiculo(V1);
                cout << "" << V1 << endl; 
                break;
            }
            case TipoVeiculo::Caminhonete: {
                V1 = new Caminhonete(1350, 2018, "4BCJK26K67E881953", "AlgumTipo", "Garagem", "Fechada", LAv3, LOv3);
                gerenciador->adicionaVeiculo(V1);
                cout << "" << V1 << endl; 
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

        cout << "Deseja adicionar mais um Veiculo? (Digite SIM ou NAO): ";
        cin >> resposta3;

        if(resposta3 == "SIM") {
            classe.clear();

            cout << "Digite o tipo de veiculo que deseja adicionar (Carro, Caminhao, Caminhonete): ";
            cin >> classe;

            tipo = EscolheVeiculo(classe);
            Veiculos *V2 = new Veiculos;

            switch (tipo) {
                case TipoVeiculo::Carro: {
                    V2 = new Carro(432, 2024, "JN1ABCDEFGH123456", "Nissan Kicks", "Garagem", 4, "automatico", LAv3, LOv3);
                    gerenciador->adicionaVeiculo(V2);
                    cout << "" << V2 << endl; 
                    break;
                }
                case TipoVeiculo::Caminhao: {
                    V2 = new Caminhao(27000, 2015, "ZG1LM23N4OP105780", "Carreta", "Garagem", 2.85, 2.44, 14.8, LAv, LOv);
                    gerenciador->adicionaVeiculo(V2);
                    cout << "" << V2 << endl; 
                    break;
                }
                case TipoVeiculo::Caminhonete: {
                    V2 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta", LAv2, LOv2);
                    gerenciador->adicionaVeiculo(V2);
                    cout << "" << V2 << endl; 
                    break;
                }
                default:
                    cout << "Tipo de veiculo nao reconhecido." << endl;
                    break;
            }
        }

        cout << "Deseja imprimir a lista de Veiculos? (Digite SIM ou NAO): ";
        cin >> resposta4;

        if(resposta4 == "SIM") {
            gerenciador->imprimeListaVeiculos();
        }
        
        novoAtendimento->MenorDistancia(gerenciador, P1);

        delete gerenciador;
        delete P1;
        delete V1;
    }

    return 0;
}
