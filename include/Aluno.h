#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa {
private:
    int registroAcademico;

public:
    Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa);
    Aluno();
    ~Aluno();

    void setRegistroAcademico(int regisAcad);
    int getRegistroAcademico();
};

#endif
