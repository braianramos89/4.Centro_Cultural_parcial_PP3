
#include "Gestion.h"
#include <iostream>

Gestion::Gestion() {

}
Gestion::~Gestion() {

}

Gestion::Gestion(string titulo, std::string autor, int codigoIdentificativo) {
    this->titulo = titulo;
    this->autor = autor;
    this->codigoIdentificativo = codigoIdentificativo;
}

void Gestion::Pedir() {

    int DD,MM;



    cout<< "Ingrese fecha dia de hoy: "<<endl;
    cin>>DD;
    cout<< "Ingrese fecha mes de actual: "<<endl;
    cin>>MM;
    if (DD < 23){
        cout<< "Se devuelve el "<< DD + 7 <<" de este mes"<<endl;
    }
    else{
        cout<< "Se devuelve el "<< (30-DD) + DD  <<" del "<< MM <<endl;
    }
    cout <<"-----------------------------------------------------"<<endl;
    cout << "Titulo: "<< this->titulo<<endl;
    cout << "Autor: " << this->autor<<endl;
    cout << "Codigo Identificativo: "<< this->codigoIdentificativo<<endl;
}