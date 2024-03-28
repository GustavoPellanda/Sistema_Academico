#include "Departamento.h"
#include <cstring>
#include <iostream>

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
    if (pPrimeiraDisciplina == NULL) { // Lista vazia
        pPrimeiraDisciplina = pDis;
        pUltimaDisciplina = pDis;
        return;
    }

    pUltimaDisciplina->setProximaDisciplina(pDis); // Método da classe disciplina
    pUltimaDisciplina = pDis;
}


void Departamento::listaDisciplinas()  {
    std::cout << "Disciplinas do departamento " << nome << ":\n";
    Disciplina* pAtual = pPrimeiraDisciplina;
    while (pAtual) {
        std::cout << " - " << pAtual->getNome() << "\n";
        pAtual = pAtual->getProximaDisciplina();
    }
}