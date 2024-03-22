#include "Pessoa.h"
#include <iostream>
#include <cstring>

using namespace std;

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa){
    inicializa(diaNascimento, mesNascimento, anoNascimento, nomePessoa);
}

Pessoa::Pessoa(){
    inicializa(-1, -1, -1);
}

Pessoa::~Pessoa(){

}

void Pessoa::inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa){
    dia = diaNascimento;
    mes = mesNascimento;
    ano = anoNascimento;
    idade = -1;
    strcpy(nome, nomePessoa);
    pUniversidade = nullptr;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual){
    idade = anoAtual - ano;
    if (mesAtual < mes || (mesAtual == mes && diaAtual < dia)) idade--;
}

void Pessoa::setUniversidadeFiliada(Universidade* pUniv){
    pUniversidade = pUniv;
} // Recebe um ponteiro para uma instância de Universidade para associá-la como uma universidade filiada à pessoa

char* Pessoa::getUniversidadeFiliada(){
    return pUniversidade->getNome();
} // Note que é necessário o uso de um ponteiro para um objeto que está fora do escopo da classe Pessoa

void Pessoa::printUniversidadeFiliada(){
    cout << nome << " trabalha para " << getUniversidadeFiliada() << endl;
}

void Pessoa::setDepartamentoFiliado(Departamento* pDepto){
    pDepartamento = pDepto;
}

char* Pessoa::getDepartamentoFiliado(){
    return pDepartamento->getNome();
}

void Pessoa::printDepartamentoFiliado(){
    cout << nome << " trabalha no departamento de " << getDepartamentoFiliado() << endl;
}