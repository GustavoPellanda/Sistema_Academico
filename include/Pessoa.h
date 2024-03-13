#ifndef PESSOA_H
#define PESSOA_H
#include "Universidade.h" 

class Pessoa { 
private:
    int dia, mes, ano, idade;
    char nome[30];
    Universidade* Universidade_Filiada;

public:
    // Função construtora:
    Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nome = "");
    Pessoa();
    // Funcão destrutora:
    ~Pessoa();

    void inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nome = "");
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    
    void setNome(char* n);
    char* getNome();

    // Associa a classe Pessoa à classe Universidade:
    void setUniversidade_Filiada(Universidade* pesssoa_universidade);
    void getUniversidade_Filiada();
};

#endif
