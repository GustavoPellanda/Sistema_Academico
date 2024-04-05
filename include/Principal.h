#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"
#include "Aluno.h"
#include "Departamento.h"
#include "Disciplina.h"

class Principal {
private:
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;

    Professor Newton, Einstein;
    Universidade Cambridge, Princeton;
    Departamento FisicaCambridge, MatematicaCambridge,FisicaPrinceton, MatematicaPrinceton, CompSci;
    Aluno Gustavo;
    Disciplina CircuitosDigitais, SistemasEmbarcados, RedesNeurais, SistemasInteligentes;

public:
    Principal();
    void Executar();
};

#endif