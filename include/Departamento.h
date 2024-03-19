#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H 

class Departamento {
private:
    int id;
    char nome[100];
    Universidade* pUniversidade; 
public:
    Departamento(int id);
    ~Departamento();

    int getId();
    void setNome(char* NomeDepartamento);
    char* getNome();
    void setUniversidade_Pertencente(Universidade* pUniv);
};

#endif