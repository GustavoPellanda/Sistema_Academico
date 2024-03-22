#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H 

class Universidade;

class Departamento {
private:
    char nome[100];
    Universidade* pUniversidade; 
public:
    Departamento();
    ~Departamento();

    void setNome(const char* nomeDept);
    char* getNome();

    void setUniversidadePertencente(Universidade* pUniv);
};

#endif