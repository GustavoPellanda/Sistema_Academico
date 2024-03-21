#include "Departamento.h"

Departamento::Departamento(int idDept, char* nomeDept, Universidade* pUniv){
    id = idDept;
    nome = "";
    pUniv = NULL;
}

Departamento::~Departamento(){
    
}

Departamento::int getId(){
    return id;
}

Departamento::void setNome(char* nomeDept){
    nome = nomeDept;
}

Departamento::char* getNome(){
    return nome;
}

Departamento::setUniversidade_Pertencente(Universidade* pUniv){
    pUniversidade = pUniv;
}
