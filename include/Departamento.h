#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H 
#include <cstring>
#include <iostream>

class Disciplina;
class Universidade;

class Departamento {
private:
    char nome[100];

    Universidade* pUniversidade;

    // Lista de disciplinas para cada departamento:
    Disciplina* pPrimeiraDisciplina;
    Disciplina* pUltimaDisciplina;

public:
    Departamento();
    ~Departamento();

    void setNome(const char* nomeDept);
    const char* getNome();

    void setUniversidade(Universidade* pUniv);
    Universidade* getUniversidade();

    void incluirDisciplina(Disciplina* pDis);
    void listaDisciplinas();
    void listaDisciplinasInvertido();
};

#endif