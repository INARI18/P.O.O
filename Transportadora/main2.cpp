#include <iostream>
#include <iomanip>
#include <string>
#include "Includes/Veiculos.h"
#include "Includes/Clientes.h"
#include "Includes/Pedidos.h"
#include "Includes/Carro.h"
#include "Includes/Caminhonete.h"
#include "Includes/Caminhao.h"
#include "Includes/PrintaFormulario.h"
#include "Includes/EscolheVeiculo.h"
#include "Includes/GerenciaVeiculos.h"
#include "Includes/Atendimento.h"

using namespace std;

int main(void) {

    string resposta = "SIM";
    string resposta2;
    string resposta3;
    string resposta4;
    string n_chassi;
    string classe;
    //int i = 0;

    float LAp[3] = {23.0, 30.0, 29.93};
    float LOp[3] = {046.0, 37.0, 53.01};

    float LAv[3] = {23.0, 30.0, 36.50};
    float LOv[3] = {46.0, 38.0, 32.90};

    float LAv2[3] = {42.0, 40.0, 44.04};
    float LOv2[3] = {-45.0, 25.0, 50.0};

    float LAv3[3] = {22.0, 30.0, 44.04};
    float LOv3[3] = {52.0, 07.0, 30.2};

    while(resposta == "SIM") {
        cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
        cin >> classe;
        //i++;

        TipoVeiculo tipo = EscolheVeiculo(classe);
        Veiculos *V1 = nullptr;
        GerenciaVeiculos *gerenciador = new GerenciaVeiculos;
        Pedidos *P1 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556, LAp, LOp);
        
        switch (tipo) {
            case TipoVeiculo::Carro:
                V1 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico", LAv, LOv); 
                gerenciador->adicionaVeiculo(V1);
                break;
            case TipoVeiculo::Caminhao:
                V1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", "Garagem", 2.60, 2.44, 8.00, LAv2, LOv2); 
                gerenciador->adicionaVeiculo(V1);
                break;
            case TipoVeiculo::Caminhonete:
                V1 = new Caminhonete(1350, 2018, "4BCJK26K67E881953", "AlgumTipo", "Garagem", "Fechada", LAv3, LOv3); 
                gerenciador->adicionaVeiculo(V1);
                break;
            default:
                cout << "Tipo de veiculo nao reconhecido." << endl;
                delete V1;
                return 0;
        }

        Atendimento *novo = new Atendimento(V1, P1);
        
        cout << "Deseja Imprimir a lista de veiculos? (Digite SIM ou NAO): ";
        cin >> resposta2;

        if(resposta2 == "SIM") {
            gerenciador->imprimeListaVeiculos();
        }
        
        cout << "Deseja remover algum Veiculo? (Digite SIM ou NAO): ";
        cin >> resposta3; 

        if(resposta3 == "SIM") {
            cout << "Digite o CHASSI do veiculo a ser removido: ";
            cin >> n_chassi; 
            gerenciador->removeVeiculo(gerenciador->buscaChassi(n_chassi));
        }

        cout << "Deseja adicionar mais um Veiculo? (Digite SIM ou NAO) ";
        cin >> resposta;

        if(resposta == "NAO") {
            delete V1;
            delete gerenciador;
        }

        classe.clear();

        cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
        cin >> classe;

        tipo = EscolheVeiculo(classe);
        Veiculos *V2 = nullptr;

        switch (tipo) {
            case TipoVeiculo::Carro:
                V2 = new Carro(432, 2024, "JN1ABCDEFGH123456", "Nissan Kicks", "Garagem", 4, "automatico", LAv3, LOv3);
                gerenciador->adicionaVeiculo(V2); 
                break;
            case TipoVeiculo::Caminhao:
                V2 = new Caminhao(27000, 2015, "ZG1LM23N4OP105780", "Carreta", "Garagem", 2.85, 2.44, 14.8, LAv, LOv); //tirar carga do caminhao
                gerenciador->adicionaVeiculo(V2); 
                break;
            case TipoVeiculo::Caminhonete:
                V2 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta", LAv2, LOv2); 
                gerenciador->adicionaVeiculo(V2); 
                break;
            default:
                cout << "\nTipo de veiculo nao reconhecido." << endl;
                return 0;
        }

        cout << "\nDeseja Imprimir a lista de veiculos? (Digite SIM ou NAO): ";
        cin >> resposta2;

        if(resposta2 == "SIM") {
            gerenciador->imprimeListaVeiculos();
        }
        
        cout << "Deseja remover algum Veiculo? (Digite SIM ou NAO): ";
        cin >> resposta3; 

        if(resposta3 == "SIM") {
            cout << "\nDigite o CHASSI do veiculo a ser removido: ";
            cin >> n_chassi; 
            gerenciador->removeVeiculo(gerenciador->buscaChassi(n_chassi));
        }

        cout << "\nDeseja Imprimir a lista de veiculos? (Digite SIM ou NAO): ";
        cin >> resposta2;

        if(resposta2 == "SIM") {
            gerenciador->imprimeListaVeiculos();
        }

        cout << "\nDeseja imprimir o veiculo mais proximo? (Digite SIM ou NAO): ";
        cin >> resposta4;

        if(resposta4 == "SIM") {
            cout << "\nLatitude V1: " << fixed << setprecision(2) << V1->getLatitude() 
            << "\nLongitude V1: " << fixed << setprecision(2) << V1->getLongitude()

            << "\n\nLatitude V2: " << fixed << setprecision(2) << V2->getLatitude() 
            << "\nLongitude V2: " << fixed << setprecision(2) << V2->getLongitude()

            << "\n\nLatitudeP: " << fixed << setprecision(2) << P1->getLatitude()
            << "\nLongitudeP: " << fixed << setprecision(2) << P1->getLongitude() << endl;

            novo->MenorDistancia(gerenciador, P1);
            cout << "\nDistancia V1: " << fixed << setprecision(2) << novo->getDistancia(V1) << "km" 
            << "\nDistancia V2: " << fixed << setprecision(2) << novo->getDistancia(V2) << "km" << endl;
        }

        delete V1;
        delete V2;
        delete P1;
        delete novo;
        delete gerenciador;
    }

    return 0;
}

