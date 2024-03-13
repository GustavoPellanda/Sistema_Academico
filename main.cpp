#include "Pessoa.h"
#include "Universidade.h"

int main() {
    int diaAtual = 21, mesAtual = 7, anoAtual = 2023;

    Pessoa Newton(4, 3, 1643, "Newton");
    Pessoa Einstein(14, 1, 1879, "Einstein");

    Universidade Cambridge;
    Cambridge.setNome("Cambridge");

    Universidade Princeton;
    Princeton.setNome("Princeton");
    
    Newton.setUniversidade_Filiada(&Cambridge);
    Einstein.setUniversidade_Filiada(&Princeton);

    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);

    Newton.getUniversidade_Filiada();
    Einstein.getUniversidade_Filiada();

    return 0;
}