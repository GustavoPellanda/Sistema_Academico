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
    
    void setUniversidadeFiliada(Universidade* pUniv);
    char* getUniversidadeFiliada();
    void printUniversidadeFiliada();

    void setDepartamentoFiliado(Departamento* pDepto);
    char* getDepartamentoFiliado();
    void printDepartamentoFiliado();
};

#endif