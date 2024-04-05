#include "Aluno.h"

Aluno::Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa)
    : Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa){
    registroAcademico = -1;
}

Aluno::Aluno() : Pessoa() {
    registroAcademico = -1;
}

Aluno::~Aluno() {
}

void Aluno::setRegistroAcademico(int regisAcad) {
    registroAcademico = regisAcad;
}

int Aluno::getRegistroAcademico() {
    return registroAcademico;
}
