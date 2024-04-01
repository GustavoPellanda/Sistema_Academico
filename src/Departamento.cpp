#include "Departamento.h"
#include <cstring>
#include <iostream>

using namespace std;

Departamento::Departamento() {
    pPrimeiraDisciplina = NULL;
    pUltimaDisciplina = NULL;
}

Departamento::~Departamento() {
    pPrimeiraDisciplina = NULL;
    pUltimaDisciplina = NULL;
}

void Departamento::setNome(const char* nomeDept) {
    strcpy(nome, nomeDept);
}

const char* Departamento::getNome() {
    return nome;
}

void Departamento::setUniversidade(Universidade* pUniv) {
    pUniversidade = pUniv;
}

Universidade* Departamento::getUniversidade() {
    return pUniversidade;
}

void Departamento::incluirDisciplina(Disciplina* pDis) {
    if(pPrimeiraDisciplina == NULL) { // Lista vazia
        pPrimeiraDisciplina = pDis;
        pUltimaDisciplina = pDis;
    }
    else {
        pUltimaDisciplina->setProximaDisciplina(pDis); // Disciplina a ser adcionada se torna a próxima disciplina da última disciplina da lista
        pDis->setAnteriorDisciplina(pUltimaDisciplina); // Última disciplina da lista é colocada como anterior a disciplina a ser adcionada
        pUltimaDisciplina = pDis; // Disciplina a ser adcionada é colocada como última da lista
    }
}

void Departamento::listaDisciplinas()  {
    cout << "Disciplinas do departamento " << nome << ":\n";
    Disciplina* pAtual = pPrimeiraDisciplina;
    while (pAtual != NULL) {
        cout << " - " << pAtual->getNome() << "\n";
        pAtual = pAtual->getProximaDisciplina();
    }
}

void Departamento::listaDisciplinasInvertido() {
    cout << "Disciplinas do departamento " << nome << " em ordem invertida:\n";
    Disciplina* pAtual = pUltimaDisciplina; // Começa a partir da última disciplina
    while (pAtual != NULL) {
        cout << " - " << pAtual->getNome() << "\n";
        pAtual = pAtual->getAnteriorDisciplina(); // Move para a disciplina anterior na lista
    }
}
/* Está imprimindo espaços vazios depois da lista. Eu não sei por quê kkkkk */