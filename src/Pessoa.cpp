#include "Pessoa.h"
#include <iostream>
#include <cstring>

using namespace std;

// Inialização das variáveis de Pessoa:
Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nome) {
    dia = diaNascimento;
    mes = mesNascimento;
    ano = anoNascimento;
    idade = -1;
    strcpy(Pessoa::nome, nome);
    Universidade_Filiada = nullptr;
}

Pessoa::~Pessoa() {
}

void Pessoa::inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nome) {
    dia = diaNascimento;
    mes = mesNascimento;
    ano = anoNascimento;
    idade = -1;
    strcpy(Pessoa::nome, nome);
    Universidade_Filiada = nullptr;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual) {
    idade = anoAtual - ano;
    if (mesAtual < mes || (mesAtual == mes && diaAtual < dia)) idade--;
}

void Pessoa::setUniversidade_Filiada(Universidade* pesssoa_universidade){
    Universidade_Filiada = pesssoa_universidade;
} // Recebe um ponteiro para uma instância de Universidade para associá-la como uma universidade filiada à pessoa

void Pessoa::getUniversidade_Filiada(){
    cout << nome << " trabalha para " << Universidade_Filiada->getNome() << endl;
} // Note que é necessário o uso de um ponteiro para um objeto que está fora do escopo da classe Pessoa