#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"

class Aluno : public Pessoa {
private:
    int registroAcademico;
    int ID;

public:
    Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa);
    Aluno();
    ~Aluno();

    void setRegistroAcademico(int regisAcad);
    int getRegistroAcademico();

    void setID(int novoID);
    int getID();
};

#endif
