#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"
#include "Aluno.h"

class Principal {
private:
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;

    Professor Newton, Einstein;
    Universidade Cambridge, Princeton;
    Departamento Fisica, Matematica;
    Aluno Gustavo;

public:
    Principal();
    void Executar();
};

#endif