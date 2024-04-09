#include <iostream>
#include <string>
#include "Caminhonete.h"
#include "Veiculos.h"

using namespace std;

Caminhonete::Caminhonete(){
    this->Cacamba = "";
}

Caminhonete::Caminhonete(int cap, int ano, string Vchassi, string modelo, 
string localizacao, string cacamba) :Veiculos(cap, ano, Vchassi, modelo, localizacao) {
    setCacamba(cacamba);
}

Caminhonete::~Caminhonete(){};

int Caminhonete::setCacamba(string cacamba) {
    this->Cacamba = cacamba;
    return 1;
}

string Caminhonete::getCacamba() {
    return this->Cacamba;
}

