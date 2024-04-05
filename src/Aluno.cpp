#include "Aluno.h"
#include "Pessoa.h"

Aluno::Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa)
:Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa){
    registroAcademico = -1;
}

Aluno::Aluno():Pessoa(){

}

Aluno::~Aluno() {
}

void ElementoAluno::setAluno(Aluno* pAlu) {
    pAluno = pAlu;
}

Aluno* ElementoAluno::getAluno() {
    return pAluno;
}

void Aluno::setRegistroAcademico(int regisAcad) {
    registroAcademico = regisAcad;
}

int Aluno::getRegistroAcademico() {
    return registroAcademico;
}