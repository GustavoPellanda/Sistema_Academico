#include "Disciplina.h"
#include <iostream>
#include <cstring>

using namespace std;

Disciplina::Disciplina() {
    id = -1;
    nome[0] = '\0';
    areaConhecimento[0] = '\0';
    pDepartamento = NULL;
    pProximaDisciplina = NULL;
    pAnteriorDisciplina = NULL;
    pListaAlunos = NULL;
}

Disciplina::~Disciplina()
{
    delete pListaAlunos;
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

void Disciplina::incluirAluno(Aluno* pAlu){
    pListaAlunos->incluirAluno(pAlu);
}

void Disciplina::listarAlunos(){
    pListaAlunos->listarAlunos();
}

// void Disciplina::listarAlunosInvertido(){
//     pListaAlunos->listarAlunosInvertido();
// }