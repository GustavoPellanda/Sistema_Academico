#include "Universidade.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

Universidade::Universidade(){
    
}

Universidade::~Universidade(){
}

void Universidade::setNome(const char* n){
    strcpy(nome, n);
}

char* Universidade::getNome(){
    return nome;
}

void Universidade::setDepartamento(Departamento* pDep){
    pListaDepartamentos.push_back(pDep);
} // Insere um novo ponteiro para um departamento na lista de ponteiros de departamentos

void Universidade::imprimeDepartamentos(){
    Departamento* pDepAux = NULL;
    int comprimentoLista = (int) pListaDepartamentos.size();
    for(int i = 0;  i < comprimentoLista; i++){
        pDepAux = pListaDepartamentos[i];
        if(pDepAux != NULL) cout << pDepAux -> getNome()<<endl;
    } 
} // Adquire os nomes a partir do método existente na Classe Departamentos

// push_back() e size() são funções para operação de listas da biblioteca vector