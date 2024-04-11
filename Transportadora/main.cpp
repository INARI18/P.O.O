#include <iostream>
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

using namespace std;

int main(void) {

    string resposta = "SIM";
    string resposta2;
    string resposta3;
    string n_chassi;
    string classe;
    //int i = 0;

    while(resposta == "SIM") {
        cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
        cin >> classe;
        //i++;

        TipoVeiculo tipo = EscolheVeiculo(classe);
        Veiculos *V1 = NULL;
        GerenciaVeiculos *gerenciador = new GerenciaVeiculos;
        
        switch (tipo) {
            case TipoVeiculo::Carro:
                V1 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico"); 
                gerenciador->adicionaVeiculo(V1);
                break;
            case TipoVeiculo::Caminhao:
                V1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", "Garagem", 2.60, 2.44, 8.00); //tirar carga do caminhao
                gerenciador->adicionaVeiculo(V1);
                break;
            case TipoVeiculo::Caminhonete:
                V1 = new Caminhonete(1350, 2018, "4BCJK26K67E881953", "AlgumTipo", "Garagem", "Fechada"); 
                gerenciador->adicionaVeiculo(V1);
                break;
            default:
                cout << "Tipo de veiculo nao reconhecido." << endl;
                delete V1;
                return 0;
        }
        
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
        Veiculos *V2 = NULL;

        switch (tipo) {
            case TipoVeiculo::Carro:
                V2 = new Carro(432, 2024, "JN1ABCDEFGH123456", "Nissan Kicks", "Garagem", 4, "automatico");
                gerenciador->adicionaVeiculo(V2); 
                break;
            case TipoVeiculo::Caminhao:
                V2 = new Caminhao(27000, 2015, "ZG1LM23N4OP105780", "Carreta", "Garagem", 2.85, 2.44, 14.8); //tirar carga do caminhao
                gerenciador->adicionaVeiculo(V2); 
                break;
            case TipoVeiculo::Caminhonete:
                V2 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta"); 
                gerenciador->adicionaVeiculo(V2); 
                break;
            default:
                cout << "Tipo de veiculo nao reconhecido." << endl;
                return 0;
        }

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

        cout << "Deseja Imprimir a lista de veiculos? (Digite SIM ou NAO): ";
        cin >> resposta2;

        delete V2;
        delete gerenciador;
    }

    /*TipoVeiculo tipo = EscolheVeiculo(classe);
    Veiculos *V1 = NULL;
    GerenciaVeiculos *gerenciador = new GerenciaVeiculos;

    switch (tipo) {
        case TipoVeiculo::Carro:
            V1 = new Carro(380, 2023, "1G1FP23E4NL100000", "Volkswagen Golf", "Garagem", 4, "Automatico"); 
            gerenciador->adicionaVeiculo(V1);
            break;
        case TipoVeiculo::Caminhao:
            V1 = new Caminhao(16000, 2022, "9BD111060T5002156", "Bitruck", "Garagem", 2.60, 2.44, 8.00); //tirar carga do caminhao
            gerenciador->adicionaVeiculo(V1);
            break;
        case TipoVeiculo::Caminhonete:
            V1 = new Caminhonete(1350, 2018, "4BCJK26K67E881953", "AlgumTipo", "Garagem", "Fechada"); 
            gerenciador->adicionaVeiculo(V1);
            break;
        default:
            cout << "Tipo de veiculo nao reconhecido." << endl;
            delete V1;
            return 0;
    }

    Clientes *C1 = new Clientes("Alguem", 99, "Nao Me Toque, RS");
    Pedidos *P1 = new Pedidos("Geladeira", "Rio de Janeiro, RJ", "Nao Me Toque, RS", 54);

   
    PrintaFormulario(V1, C1, P1);

    classe.clear();
    cout << "Digite o tipo de veiculo (Carro, Caminhao, Caminhonete): ";
    cin >> classe;

    tipo = EscolheVeiculo(classe);
    Veiculos *V2 = NULL;

    switch (tipo) {
        case TipoVeiculo::Carro:
            V2 = new Carro(432, 2024, "JN1ABCDEFGH123456", "Nissan Kicks", "Garagem", 4, "automatico");
            gerenciador->adicionaVeiculo(V2); 
            break;
        case TipoVeiculo::Caminhao:
            V2 = new Caminhao(27000, 2015, "1G1FP23E4NL100000", "Carreta", "Garagem", 2.85, 2.44, 14.8); //tirar carga do caminhao
            gerenciador->adicionaVeiculo(V2); 
            break;
        case TipoVeiculo::Caminhonete:
            V2 = new Caminhonete(1200, 2004, "1GCHK24U64E121748", "Ford F-150", "Garagem", "Aberta"); 
            gerenciador->adicionaVeiculo(V2); 
            break;
        default:
            cout << "Tipo de veiculo nao reconhecido." << endl;
            return 0;
    }

    Clientes *C2 = new Clientes("Bia", 20, "Alegrete, RS");
    Pedidos *P2 = new Pedidos("Teclado", "Sao Paulo, SP", "Alegrete, RS", 0.556);

    PrintaFormulario(V2, C2, P2);

    gerenciador->imprimeListaVeiculos();
    gerenciador->removeVeiculo(V1);
    gerenciador->removeVeiculo(V2);
    gerenciador->imprimeListaVeiculos();*/

    /*delete V2;
    delete C2;
    delete P2;*/

    
    return 0;
}

