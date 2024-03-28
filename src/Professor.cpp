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

void Professor::setUniversidadeFiliada(Universidade* pUniv){
    pUniversidade = pUniv;
}

const char* Professor::getUniversidadeFiliada(){
    return pUniversidade->getNome();
}

void Professor::printUniversidadeFiliada(){
    cout << nome << " trabalha para " << getUniversidadeFiliada() << endl;
}

void Professor::setDepartamentoFiliado(Departamento* pDepto){
    pDepartamento = pDepto;
}

const char* Professor::getDepartamentoFiliado(){
    return pDepartamento->getNome();
}

void Professor::printDepartamentoFiliado(){
    cout << nome << " trabalha no departamento de " << getDepartamentoFiliado() << endl;
}