#include "disciplina.h"
#include <cstring>

Disciplina::Disciplina() {
    id = -1;
    nome[0] = '\0';
    areaConhecimento[0] = '\0';
    pDepartamento = NULL;
    pProximaDisciplina = NULL;
}

Disciplina::~Disciplina() {
    pDepartamento = NULL;
    pProximaDisciplina = NULL;
}

void Disciplina::setId(int idDis) {
    id = idDis;
}

int Disciplina::getId() {
    return id;
}

void Disciplina::setNome(const char* nomeDis) {
    strcpy(nome, nomeDis);
}

const char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setDepartamento(Departamento* pDep) {
    pDepartamento = pDep;
}

Departamento* Disciplina::getDepartamento() {
    return pDepartamento;
}

void Disciplina::setProximaDisciplina(Disciplina* pProxDisc) {
    pProximaDisciplina = pProxDisc;
}

Disciplina* Disciplina::getProximaDisciplina() {
    return pProximaDisciplina;
}
