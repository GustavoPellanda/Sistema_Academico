#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H 

class Departamento {
private:
    char nome[100];
    // int id;
    // Universidade* pUniversidade; 
public:
    // Departamento(int idDept, char* nomeDept, Universidade* pUniv);
    Departamento();
    ~Departamento();

    // void inicializa(int idDept, char* nomeDept, Universidade* pUniv);

    void setNome(const char* nomeDept);
    char* getNome();
    // void setUniversidade_Pertencente(Universidade* pUniv);
    // int getId();
};

#endif