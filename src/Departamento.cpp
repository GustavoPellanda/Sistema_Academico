#include "Departamento.h"
#include "Universidade.h"
#include<cstring>

using namespace std;

Departamento::Departamento(){
    strcpy(nome, "");
}

Departamento::~Departamento(){
    
}


void Departamento::setNome(const char* nomeDept){
    strcpy(nome, nomeDept);
}

char* Departamento::getNome(){
    return nome;
}

void Departamento::setUniversidadePertencente(Universidade* pUniv){
    pUniversidade = pUniv;
}