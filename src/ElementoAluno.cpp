#include "ElementoAluno.h"

ElementoAluno::ElementoAluno() {
    pAluno = NULL;
    pProximoAluno = NULL;
    pAnteriorAluno = NULL;
}

ElementoAluno::~ElementoAluno() {
    pProximoAluno = NULL;
    pAnteriorAluno = NULL;
}

void ElementoAluno::setAluno(Aluno* pAlu){
    pAluno = pAlu;
}

ElementoAluno::getAluno(){
    return pAluno;
}

void ElementoAluno::setProximoAluno(ElementoAluno* proxAlu) {
    pProximoAluno = proxAlu;
}

ElementoAluno* ElementoAluno::getProximoAluno() {
    return pProximoAluno;
}

void ElementoAluno::setAnteriorAluno(ElementoAluno* anteAlu) {
    pAnteriorAluno = anteAlu;
}

ElementoAluno* ElementoAluno::getAnteriorAluno() {
    return pAnteriorAluno;
}
