#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#include "ElementoAluno.h"
#include "Aluno.h"

class ListaAlunos{
private:
    int numeroAlunos;
    int countAlunos;
    const char nome[150];

    Aluno* pPrimeiroAluno;
    Aluno* pUltimoAluno;

public:
    ListaAlunos(int numAlu, const char* nomeAlu);
    ~ListaAlunos();

    void incluirAluno(Aluno* pAlu);
    void listarAlunos();
    void listarAlunosInvertido();
};

#endif