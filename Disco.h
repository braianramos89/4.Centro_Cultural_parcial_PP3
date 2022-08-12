
#ifndef TEMPLATECPP_DISCO_H
#define TEMPLATECPP_DISCO_H
#include <iostream>
#include "Gestion.h"
#include "Cliente.h"


using namespace std;
class Disco : public Gestion {

private:

    string discografica;
    Cliente* cliente;

public:

    Disco(string, string, int , string, Cliente*);
    ~Disco();
    void Pedir();

};






#endif //TEMPLATECPP_DISCO_H
