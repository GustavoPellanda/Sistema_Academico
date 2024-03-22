#include "Principal.h"

Principal::Principal(){
    Newton.inicializa(4, 3, 1643, "Newton");
    Einstein.inicializa(14, 1, 1879, "Einstein");
}

void Principal::Executar(){
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;
    
    Cambridge.setNome("Cambridge");
    Princeton.setNome("Princeton");
    
    Newton.setUniversidadeFiliada(&Cambridge);
    Einstein.setUniversidadeFiliada(&Princeton);

    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);

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
}