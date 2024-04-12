#include <iostream>
#include <string>
#include "Caminhonete.h"
#include "Veiculos.h"

using namespace std;

Caminhonete::Caminhonete(){
    this->Cacamba = "";
}

Caminhonete::Caminhonete(int cap, int ano, string Vchassi, string modelo, 
string localizacao, string cacamba, float LA[3], float LO[3]) :Veiculos(cap, ano, Vchassi, modelo, localizacao, LA, LO) {
    setCacamba(cacamba);
    setItens(10);
}

Caminhonete::~Caminhonete(){};

int Caminhonete::setCacamba(string cacamba) {
    this->Cacamba = cacamba;
    return 1;
}

string Caminhonete::getCacamba() {
    return this->Cacamba;
}

