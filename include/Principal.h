#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"
#include "Universidade.h"

class Principal {
private:
    Pessoa Newton, Einstein;
    Universidade Cambridge, Princeton;
    Departamento Fisica, Matematica;
    
public:
    Principal();
    void Executar();
};

#endif