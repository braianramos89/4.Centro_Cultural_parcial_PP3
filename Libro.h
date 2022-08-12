#ifndef TEMPLATECPP_LIBRO_H
#define TEMPLATECPP_LIBRO_H
#include  <iostream>
#include "Gestion.h"
#include "Cliente.h"

using namespace std;

class Libro: public Gestion {
private:
    int cantidadPaginas;
    Cliente* cliente;
public:
    Libro(string,string, int ,int cantidadPaginas, Cliente*);
    ~Libro();
    void Pedir();
};





#endif //TEMPLATECPP_LIBRO_H
