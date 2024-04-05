#include "ListaAlunos.h"
#include <cstring>
#include <iostream>

ListaAlunos::ListaAlunos(int numAlu, const char* nomeAlu){
    countAlunos = 0;
    numeroAlunos = numAlu;
    strcpy(nome, nomeAlu);
    pPrimeiroAluno = NULL;
    pUltimoAluno = NULL;
}
    
ListaAlunos::~ListaAlunos(){
    ElementoAluno* pAux1 = pPrimeiroAluno, *pAux2;
    pAux2 = pAux1;

    // Deleta um elemento aluno e segue para o próximo da lista:
    while(pAux1 != NULL){
        pAux2 = pAux1->getProximoAluno();
        delete(pAux1);
        pAux1 = pAux2;
    }

    pPrimeiroAluno = NULL;
    pUltimoAluno = NULL;
}

void ListaAlunos::incluirAluno(Aluno* pAlu) {
    if(pAlu == NULL) return;
    if(countAlunos >= numeroAlunos){
        cout << "Limite de alunos na turma já atingido!" << endl;
        return;
    }

    // Cria o objeto para o novo aluno:
    ElementoAluno* pAux = new ElementoAluno();
    pAux->setAluno(pAlu);

    if(pPrimeiroAluno == NULL){ // Lista vazia
        pPrimeiroAluno = pAux;
        pUltimoAluno= pAux;
    }
    else{ // Insere o novo objeto na lista:
        pUltimoAluno->setProximoAluno(pAux);
        pAux->setAnteriorAluno(pUltimoAluno);
        pUltimoAluno = pAux;
    }

    countAlunos++;
}

void ListaAlunos::listarAlunos() {
    // Fazer
}

void ListaAlunos::listarAlunosInvertido() {
    // Fazer
}