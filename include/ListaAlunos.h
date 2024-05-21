#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

#include "ElementoDeUmaLista.h"
#include "Aluno.h"

class ListaAlunos{
private:
    int numeroAlunos;
    int countAlunos;

    ElementoLista<Aluno>* pPrimeiroAluno;
    ElementoLista<Aluno>* pUltimoAluno;

public:
    ListaAlunos(int numAlu);
    ~ListaAlunos();

    ElementoLista<Aluno>* getPrimeiroAluno();

    void incluirAluno(Aluno* pAlu);
    void listarAlunos();
};

#endif