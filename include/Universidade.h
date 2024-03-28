#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H
#include <vector>
#include "Departamento.h"

using namespace std;

class Universidade {
private:
    char nome[30];
    vector <Departamento*> pListaDepartamentos;
public:
    Universidade();
    ~Universidade();

    void setNome(const char* n);
    char* getNome();
    
    void setDepartamento(Departamento* pDep);
    void imprimeDepartamentos();
};

#endif