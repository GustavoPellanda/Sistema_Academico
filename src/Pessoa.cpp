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
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual){
    idade = anoAtual - ano;
    if (mesAtual < mes || (mesAtual == mes && diaAtual < dia)) idade--;
}

void Pessoa::setNome(char* nomePessoa){
    strcpy(nome, nomePessoa);
}
    
char* Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::printIdade(){
    cout << nome << " possui " << idade << " anos de idade" << endl;
}