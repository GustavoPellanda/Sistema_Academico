#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"
#include "Universidade.h"

class Principal {
private:
    Pessoa Newton;
    Pessoa Einstein;

    Universidade Cambridge;
    Universidade Princeton;
public:
    Principal();
    void Executar();
};

#endif