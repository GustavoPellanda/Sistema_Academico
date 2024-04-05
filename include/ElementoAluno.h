#ifndef ELEMENTOALUNO_H
#define ELEMENTOALUNO_H
#include "Aluno.h"

// Classe utilizada para representar um elemento da Classe Aluno inserido em uma lista
class ElementoAluno {
private:
    Aluno* pAluno;
    Aluno* pProximoAluno;
    Aluno* pAnteriorAluno;

public:
    ElementoAluno();
    ~ElementoAluno();

    void setProximoAluno(Aluno* proxAlu);
    Aluno* getProximoAluno();

    void setAnteriorAluno(Aluno* anteAlu);
    Aluno* getAnteriorAluno();
};

#endif