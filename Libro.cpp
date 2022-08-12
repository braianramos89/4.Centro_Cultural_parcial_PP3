//
// Created by braian on 12/08/2022.
//

#include "Libro.h"

Libro::Libro(string titulo, string autor, int codigoIdentificativo, int cantidadPaginas,Cliente* cliente ) : Gestion(titulo, autor, codigoIdentificativo) {
    this->cantidadPaginas = cantidadPaginas;
    this->cliente = cliente;

}

Libro::~Libro() {}

void Libro::Pedir() {
    Gestion::Pedir();
    cout << "Cantidad de paginas: " << this->cantidadPaginas << endl;
}