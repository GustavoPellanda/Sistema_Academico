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

    Fisica.setNome("Fisica");
    Matematica.setNome("Matematica");

    Cambridge.setDepartamento(&Fisica, 0);
    Princeton.setDepartamento(&Matematica, 1);

    Newton.setDepartamentoFiliado(&Fisica);
    Einstein.setDepartamentoFiliado(&Matematica);

    Newton.printDepartamentoFiliado();
    Einstein.printDepartamentoFiliado();

    Cambridge.imprimeDepartamentos();
    Princeton.imprimeDepartamentos();

    Gustavo.setRegistroAcademico(2090740);
}