#ifndef PESSOA_H
#define PESSOA_H
#include "Universidade.h" 

class Pessoa { 
protected:
    int dia, mes, ano, idade;
    char nome[30];

public:
    Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa = "");
    Pessoa();
    ~Pessoa();

    void inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa = "");
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    
    void setNome(char* nomePessoa);
    char* getNome();

    int getIdade();
    void imprimeIdade();
};

#endif
