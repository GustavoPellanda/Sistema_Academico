#include "Departamento.h"
#include<cstring>

using namespace std;

// Departamento::Departamento(int idDept, char* nomeDept, Universidade* pUniv){
//    inicializa(idDept, nomeDept, pUniv);
// }

// Departamento::Departamento(){
//     inicializa(0, "", NULL);
// }

// Departamento::~Departamento(){
    
// }

// void Departamento::inicializa(int idDept, char* nomeDept, Universidade* pUniv){
//     id = idDept;
//     strcpy(nome, nomeDept);
//     pUniversidade = pUniv;
// }

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

// int Departamento::getId(){
//     return id;
// }

// void Departamento::setUniversidade_Pertencente(Universidade* pUniv){
//     pUniversidade = pUniv;
// }