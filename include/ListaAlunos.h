#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#include "ElementoAluno.h"
#include "Aluno.h"

class ListaAlunos{
private:
    int numeroAlunos;
    int countAlunos;

    ElementoAluno* pPrimeiroAluno;
    ElementoAluno* pUltimoAluno;

public:
    ListaAlunos(int numAlu);
    ~ListaAlunos();

    ElementoAluno* getPrimeiroAluno();

    void incluirAluno(Aluno* pAlu);
    void listarAlunos();
    void listarAlunosInvertido();
};

#endif