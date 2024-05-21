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
    ElementoLista<Aluno>* pAux1 = pPrimeiroAluno, *pAux2;
    pAux2 = pAux1;

    // Deleta um elemento aluno e segue para o próximo da lista:
    while(pAux1 != NULL){
        pAux2 = pAux1->getProximoElemento();
        delete(pAux1);
        pAux1 = pAux2;
    }

    pPrimeiroAluno = NULL;
    pUltimoAluno = NULL;
}

ElementoLista<Aluno>* ListaAlunos::getPrimeiroAluno() {
    return pPrimeiroAluno;
}

void ListaAlunos::incluirAluno(Aluno* pAlu) {
    if(pAlu == NULL) return;
    if(countAlunos >= numeroAlunos){
        cout << "Limite de alunos na turma já atingido!" << endl;
        return;
    }

    // Cria o objeto para o novo aluno:
    ElementoLista<Aluno>* pAux = new ElementoLista<Aluno>();
    pAux->setInfo(pAlu);

    if(pPrimeiroAluno == NULL){ // Lista vazia
        pPrimeiroAluno = pAux;
        pUltimoAluno= pAux;
    }
    else{ // Insere o novo objeto na lista:
        pUltimoAluno->setProximoElemento(pAux);
        pAux->setAnteriorElemento(pUltimoAluno);
        pUltimoAluno = pAux;
    }

    countAlunos++;
    pAlu->setID(countAlunos);
}

void ListaAlunos::listarAlunos() {
    Aluno* pAuxAluno = NULL;
    ElementoLista<Aluno>* pAuxElAluno = getPrimeiroAluno();

    while(pAuxElAluno != NULL){
        pAuxAluno = pAuxElAluno->getInfo(); 
        cout << "Aluno " << pAuxAluno->getID() << ": " << pAuxAluno->getNome() << endl;
        pAuxElAluno = pAuxElAluno->getProximoElemento();
    }
}