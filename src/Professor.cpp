#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa)
:Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa){
    pUniversidade = NULL;
    pDepartamento = NULL;
}

Professor::Professor():Pessoa(){
    pUniversidade = NULL;
    pDepartamento = NULL;
}

Professor::~Professor(){
    pUniversidade = NULL;
    pDepartamento = NULL;
}

void Professor::setUniversidade(Universidade* pUniv){
    pUniversidade = pUniv;
}

const char* Professor::getUniversidade(){
    return pUniversidade->getNome();
}

void Professor::imprimeUniversidade(){
    cout << nome << " trabalha para " << getUniversidade() << endl;
}

void Professor::setDepartamento(Departamento* pDepto){
    pDepartamento = pDepto;
}

const char* Professor::getDepartamento(){
    return pDepartamento->getNome();
}

void Professor::imprimeDepartamento(){
    cout << nome << " trabalha no departamento de " << getDepartamento() << endl;
}