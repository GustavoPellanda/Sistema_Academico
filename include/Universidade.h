#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"

class Universidade {
private:
    char nome[30];
    Departamento* pDepartamento;
public:
    Universidade();
    ~Universidade();

    void setNome(const char* n);
    char* getNome();
    void setDepartamento(Departamento* pDep);
    
    // void setDepartamento(Departamento* pDep, int ctdDeps);
    // void imprimeDepartamentos();
};

#endif