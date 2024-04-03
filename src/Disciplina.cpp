#include "Disciplina.h"
#include <iostream>
#include <cstring>

using namespace std;

Disciplina::Disciplina() {
    id = -1;
    nome[0] = '\0';
    areaConhecimento[0] = '\0';
    numeroAlunos = 0; // Quantidade default de alunos por matéria
    countAlunos = 0;
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
    pDep->incluirDisciplina(this);
} // Utiliza o método da Classe Departamento para incluir a disciplina no departamento automaticamente

Departamento* Disciplina::getDepartamento() {
    return pDepartamento;
}

void Disciplina::setProximaDisciplina(Disciplina* pProxDisc) {
    pProximaDisciplina = pProxDisc;
}

Disciplina* Disciplina::getProximaDisciplina() {
    return pProximaDisciplina;
}

void Disciplina::setAnteriorDisciplina(Disciplina* pAnteDisc) {
    pAnteriorDisciplina = pAnteDisc;
}

Disciplina* Disciplina::getAnteriorDisciplina() {
    return pAnteriorDisciplina;
}

void Disciplina::incluirAluno(Aluno* pAlu) {
    if(pAlu == NULL) return;
    if(countAlunos > numeroAlunos){
        cout << "Limite de alunos na turma já atingido!" << endl;
        return;
    }

    ElementoAluno* pAluAux = NULL;
    pAluAux = new ElementoAluno();
    pAluAux->setAluno(pAlu); // Cópia do aluno a ser uncluído para um ponteiro auxiliar

    if(pPrimeiroAluno == NULL){ // Lista vazia
        pPrimeiroAluno = pAluAux;
        pUltimoAluno= pAluAux;
    }
    else{
        pUltimoAluno->setProximoAluno(pAluAux);
        pAluAux->setAnteriorAluno(pUltimoAluno);
        pUltimoAluno = pAluAux;
    }

    countAlunos++;
}

void Disciplina::listaAlunos() {
    // Fazer
}

void Disciplina::listaAlunosInvertido() {
    // Fazer
}