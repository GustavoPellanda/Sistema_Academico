#include "Principal.h"

Principal::Principal(){
}

void Principal::Executar(){
    
    Newton.inicializa(4, 3, 1643, "Newton");
    Einstein.inicializa(14, 1, 1879, "Einstein");

    Cambridge.setNome("Cambridge");
    Princeton.setNome("Princeton");
    
    Newton.setUniversidade(&Cambridge);
    Einstein.setUniversidade(&Princeton);

    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);

    Newton.imprimeIdade();
    Einstein.imprimeIdade();

    Newton.imprimeUniversidade();
    Einstein.imprimeUniversidade();

    FisicaCambridge.setNome("FisicaCambridge");
    MatematicaCambridge.setNome("MatematicaCambridge");
    FisicaPrinceton.setNome("FisicaPrinceton");
    MatematicaPrinceton.setNome("MatematicaPrinceton");
    CompSci.setNome("CompSci");

    Cambridge.setDepartamento(&FisicaCambridge);
    Cambridge.setDepartamento(&MatematicaCambridge);
    Princeton.setDepartamento(&FisicaPrinceton);
    Princeton.setDepartamento(&MatematicaPrinceton);

    Newton.setDepartamento(&FisicaCambridge);
    Einstein.setDepartamento(&FisicaPrinceton);

    Newton.imprimeDepartamento();
    Einstein.imprimeDepartamento();

    Cambridge.listaDepartamentos();
    Princeton.listaDepartamentos();

    Gustavo.setNome("Gustavo");
    Gustavo.setRegistroAcademico(2090740);

    CircuitosDigitais.setNome("CircuitosDigitais");
    SistemasEmbarcados.setNome("SistemasEmbarcados");
    RedesNeurais.setNome("RedesNeurais");
    SistemasInteligentes.setNome("SistemasInteligentes");

    CircuitosDigitais.setDepartamento(&CompSci);
    SistemasEmbarcados.setDepartamento(&CompSci);
    RedesNeurais.setDepartamento(&CompSci);
    SistemasInteligentes.setDepartamento(&CompSci);

    CompSci.listaDisciplinas();
    CompSci.listaDisciplinasInvertido();

    Aluno1.setNome("Roger");
    Aluno2.setNome("Helena");
    Aluno3.setNome("Ricardo");
    Aluno4.setNome("Giovana");

    AlunosUTFPR.incluirAluno(&Gustavo);
    AlunosUTFPR.incluirAluno(&Aluno1);
    AlunosUTFPR.incluirAluno(&Aluno2);
    AlunosUTFPR.incluirAluno(&Aluno3);
    AlunosUTFPR.incluirAluno(&Aluno4);

    AlunosUTFPR.listarAlunos();

    while(true){
        MenuPrincipal.imprimirMenu();
        MenuPrincipal.selecionaOpcoesMenu();
    }
}