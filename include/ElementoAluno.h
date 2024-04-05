#ifndef ELEMENTOALUNO_H
#define ELEMENTOALUNO_H
#include "Aluno.h"

// Classe utilizada para representar um elemento da Classe Aluno inserido em uma lista
class ElementoAluno {
private:
    Aluno* pAluno;
    ElementoAluno* pProximoAluno;
    ElementoAluno* pAnteriorAluno;

public:
    ElementoAluno();
    ~ElementoAluno();

    void setAluno(Aluno* pAlu);
    Aluno* getAluno();

    void setProximoAluno(ElementoAluno* proxAlu);
    ElementoAluno* getProximoAluno();

    void setAnteriorAluno(ElementoAluno* anteAlu);
    ElementoAluno* getAnteriorAluno();
};

#endif