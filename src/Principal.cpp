#include "Principal.h"

Principal::Principal(){
    Newton.inicializa(4, 3, 1643, "Newton");
    Einstein.inicializa(14, 1, 1879, "Einstein");
}

void Principal::Executar(){
    
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
}