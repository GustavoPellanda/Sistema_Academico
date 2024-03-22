#ifndef PESSOA_H
#define PESSOA_H
#include "Universidade.h" 

class Pessoa { 
private:
    int dia, mes, ano, idade;
    char nome[30];
    Universidade* pUniversidade;
    Departamento* pDepartamento;

public:
    Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa = "");
    Pessoa();
    ~Pessoa();

    void inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa = "");
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    
    void setNome(char* nomePessoa);
    char* getNome();

    int getIdade();
    void printIdade();

    void setUniversidadeFiliada(Universidade* pUniv);
    char* getUniversidadeFiliada();
    void printUniversidadeFiliada();

    void setDepartamentoFiliado(Departamento* pDepto);
    char* getDepartamentoFiliado();
    void printDepartamentoFiliado();
};

#endif
