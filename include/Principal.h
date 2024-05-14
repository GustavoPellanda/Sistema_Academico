#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"
#include "Aluno.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "ListaAlunos.h"
#include "Menu.h"

class Principal {
private:
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;

    Professor Newton, Einstein;
    Universidade Cambridge, Princeton;
    Departamento FisicaCambridge, MatematicaCambridge,FisicaPrinceton, MatematicaPrinceton, CompSci;
    Disciplina CircuitosDigitais, SistemasEmbarcados, RedesNeurais, SistemasInteligentes;
    
    Aluno Gustavo, Aluno1, Aluno2, Aluno3, Aluno4;
    ListaAlunos AlunosUTFPR = ListaAlunos(10);

    Menu MenuPrincipal;

public:
    Principal();
    void Executar();
};

#endif