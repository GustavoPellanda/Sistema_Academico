#ifndef PESSOA_H
#define PESSOA_H
#include "Universidade.h"
#include <string>

using namespace std;

class Pessoa {
protected:
    int dia, mes, ano, idade;
    string nome;

public:
    Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const string& nomePessoa = "");
    Pessoa();
    ~Pessoa();

    void inicializa(int diaNascimento, int mesNascimento, int anoNascimento, const string& nomePessoa = "");
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);

    void setNome(const string& nomePessoa); // Changed parameter type
    string getNome(); // Changed return type

    int getIdade();
    void imprimeIdade();
};

#endif
