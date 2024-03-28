#include "Principal.h"

Principal::Principal(){
}

void Principal::Executar(){
    
    Newton.inicializa(4, 3, 1643, "Newton");
    Einstein.inicializa(14, 1, 1879, "Einstein");

    Cambridge.setNome("Cambridge");
    Princeton.setNome("Princeton");
    
    Newton.setUniversidadeFiliada(&Cambridge);
    Einstein.setUniversidadeFiliada(&Princeton);

    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);

    Newton.printIdade();
    Einstein.printIdade();

    Newton.printUniversidadeFiliada();
    Einstein.printUniversidadeFiliada();

    FisicaCambridge.setNome("FisicaCambridge");
    MatematicaCambridge.setNome("MatematicaCambridge");
    FisicaPrinceton.setNome("FisicaPrinceton");
    MatematicaPrinceton.setNome("MatematicaPrinceton");
    CompSci.setNome("CompSci");

    Cambridge.setDepartamento(&FisicaCambridge);
    Cambridge.setDepartamento(&MatematicaCambridge);
    Princeton.setDepartamento(&FisicaPrinceton);
    Princeton.setDepartamento(&MatematicaPrinceton);

    Newton.setDepartamentoFiliado(&FisicaCambridge);
    Einstein.setDepartamentoFiliado(&FisicaPrinceton);

    Newton.printDepartamentoFiliado();
    Einstein.printDepartamentoFiliado();

    Cambridge.imprimeDepartamentos();
    Princeton.imprimeDepartamentos();

    Gustavo.setRegistroAcademico(2090740);

    CircuitosDigitais.setNome("CircuitosDigitais");
    SistemasEmbarcados.setNome("SistemasEmbarcados");
    RedesNeurais.setNome("RedesNeurais");
    SistemasInteligentes.setNome("SistemasInteligentes");

    CompSci.incluirDisciplina(&CircuitosDigitais);
    CompSci.incluirDisciplina(&SistemasEmbarcados);
    CompSci.incluirDisciplina(&RedesNeurais);
    CompSci.incluirDisciplina(&SistemasInteligentes);

    CompSci.listarDisciplinas();
}