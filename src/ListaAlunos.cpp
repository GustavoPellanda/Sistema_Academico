#include "ListaAlunos.h"
#include <cstring>
#include <iostream>

ListaAlunos::ListaAlunos(int numAlu){
    countAlunos = 0;
    numeroAlunos = numAlu;
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

ElementoAluno* ListaAlunos::getPrimeiroAluno() {
    return pPrimeiroAluno;
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
    pAlu->setID(countAlunos);
}

void ListaAlunos::listarAlunos() {
    Aluno* pAuxAluno = NULL;
    ElementoAluno* pAuxElAluno = getPrimeiroAluno();

    while(pAuxElAluno != NULL){
        pAuxAluno = pAuxElAluno->getAluno(); 
        cout << "Aluno " << pAuxAluno->getID() << ": " << pAuxAluno->getNome() << endl;
        pAuxElAluno = pAuxElAluno->getProximoAluno();
    }
}