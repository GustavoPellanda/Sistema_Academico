#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const string& nomePessoa){
    inicializa(diaNascimento, mesNascimento, anoNascimento, nomePessoa);
}

Pessoa::Pessoa(){
    inicializa(-1, -1, -1);
}

Pessoa::~Pessoa(){
}

void Pessoa::inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const string& nomePessoa){
    dia = diaNascimento;
    mes = mesNascimento;
    ano = anoNascimento;
    idade = -1;
    nome = nomePessoa;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual){
    idade = anoAtual - ano;
    if (mesAtual < mes || (mesAtual == mes && diaAtual < dia)) idade--;
}

void Pessoa::setNome(const string& nomePessoa){
    nome = nomePessoa;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::imprimeIdade() {
    cout << nome << " possui " << idade << " anos de idade" << endl;
}
