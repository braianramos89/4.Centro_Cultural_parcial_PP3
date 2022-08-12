//
// Created by braian on 12/08/2022.
//

#include "Disco.h"


Disco::~Disco() {}

Disco::Disco(string titulo, string autor, int codigoIdentificativo, string discografica,Cliente* cliente) : Gestion(titulo, autor, codigoIdentificativo) {
    this->discografica = discografica;
    this->cliente = cliente;
}

void Disco::Pedir() {
    Gestion::Pedir();
    cout << "Discografica: " << this->discografica << endl;
}



