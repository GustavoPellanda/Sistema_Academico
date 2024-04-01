#include "Aluno.h"

ElementoAluno::ElementoAluno() {
    pAluno = NULL;
    pProximoAluno = NULL;
    pAnteriorAluno = NULL;
}

ElementoAluno::~ElementoAluno() {
    
}

void ElementoAluno::setAluno(Aluno* pAlu) {
    pAluno = pAlu;
}

Aluno* ElementoAluno::getAluno() {
    return pAluno;
}

void ElementoAluno::setProximoAluno(Aluno* proxAlu) {
    pProximoAluno = proxAlu;
}

Aluno* ElementoAluno::getProximoAluno() {
    return pProximoAluno;
}

void ElementoAluno::setAnteriorAluno(Aluno* anteAlu) {
    pAnteriorAluno = anteAlu;
}

Aluno* ElementoAluno::getAnteriorAluno() {
    return pAnteriorAluno;
}
