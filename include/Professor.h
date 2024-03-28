#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Pessoa.h"
#include "Universidade.h"

class Professor : public Pessoa {
private:
    Universidade* pUniversidade;
    Departamento* pDepartamento;
    
public:
    Professor(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa);
    Professor();
    ~Professor();
    
    void setUniversidade(Universidade* pUniv);
    const char* getUniversidade();
    void imprimeUniversidade();

    void setDepartamento(Departamento* pDepto);
    const char* getDepartamento();
    void imprimeDepartamento();
};

#endif