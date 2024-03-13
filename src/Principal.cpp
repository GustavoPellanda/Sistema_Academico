#include "Principal.h"

Principal::Principal(){
    Newton.inicializa(4, 3, 1643, "Newton");
    Einstein.inicializa(14, 1, 1879, "Einstein");
}

void Principal::Executar(){
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;
    
    Cambridge.setNome("Cambridge");
    Princeton.setNome("Princeton");
    
    Newton.setUniversidade_Filiada(&Cambridge);
    Einstein.setUniversidade_Filiada(&Princeton);

    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);

    Newton.getUniversidade_Filiada();
    Einstein.getUniversidade_Filiada();
}