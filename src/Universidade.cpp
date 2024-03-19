#include "Universidade.h"
#include <cstring>
#include <iostream>

// Construtor:
Universidade::Universidade(){
    strcpy(nome, ""); // Inicializa o nome com um string vazia
    for(int i = 0;  i < 50; i++) pDepartamento[i] == NULL; // Aterramento de ponteiros
}

// Destrutor:
Universidade::~Universidade(){
}

void Universidade::setNome(const char* n){
    strcpy(nome, n);
}

char* Universidade::getNome(){
    return nome;
}

void Universidade::setDepartamento(Departamento* pDep, int ctdDeps){
    pDepartamento[ctdDeps] = pDep; // Copia as instâncias de departamentos para os espaços declarados na inicialização
}

void Universidade::imprimeDepartamentos(){
    Departamento* pDepAux = NULL;
    for(int i = 0;  i < 50; i++){
        pDepAux = pDepartamento[i];
        if(pDepAux != NULL) cout << pDepAux -> getNome()<<endl; // Adquire os nomes a partir do método existente na Classe Departamentos
    } 
}