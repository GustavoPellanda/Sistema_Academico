#include "Aluno.h"

Aluno::Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const std::string& nomePessoa)
    : Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa) {
    registroAcademico = -1;
    ID = 0;
}

Aluno::Aluno() : Pessoa() {
    registroAcademico = -1;
    ID = 0;
}

Aluno::~Aluno() {
}

void Aluno::setRegistroAcademico(int regisAcad) {
    registroAcademico = regisAcad;
}

int Aluno::getRegistroAcademico() {
    return registroAcademico;
}

void Aluno::setID(int novoID){
    ID = novoID;
}

int Aluno::getID(){
    return ID;
}