#ifndef TEMPLATECPP_GESTION_H
#define TEMPLATECPP_GESTION_H
#include <iostream>

using namespace std;


class Gestion {

private:

    string titulo;
    string autor;
    int codigoIdentificativo;

    public:

    Gestion(string titulo, string autor, int codigoIdentificativo);
    ~Gestion();
    Gestion();
    virtual void Pedir();
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setCodigoIdentificativo(int codigoIdentificativo);
    string getTitulo();
    string getAutor();
    int getCodigoIdentificativo();


};

inline void Gestion::setTitulo(string titulo) {

this->titulo = titulo;

}
inline void Gestion::setAutor(string autor) {
    this->autor = autor;
}
inline void Gestion::setCodigoIdentificativo(int codigoIdentificativo) {
    this->codigoIdentificativo = codigoIdentificativo;
}

inline string Gestion::getTitulo() {
    return this->titulo;
}
inline string Gestion::getAutor() {
    return this->autor;
}

inline int Gestion::getCodigoIdentificativo() {
    return this->codigoIdentificativo;
}

#endif //TEMPLATECPP_GESTION_H
