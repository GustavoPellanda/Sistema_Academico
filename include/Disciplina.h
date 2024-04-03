#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include "ElementoAluno.h"

class Departamento;

class Disciplina{
private:
    int id;
    char nome[150];
    char areaConhecimento[150];
    
    Departamento* pDepartamento;

    // Próxima disciplina da lista:
    Disciplina* pProximaDisciplina;
    Disciplina* pAnteriorDisciplina;

    // Lista de alunos da disciplina:
    int numeroAlunos;
    int countAlunos;
    ElementoAluno* pPrimeiroAluno;
    ElementoAluno* pUltimoAluno;

public:
    Disciplina();
    ~Disciplina();

    void setId(int idDis);
    int getId();

    void setNome(const char* nomeDis);
    const char* getNome();

    void setDepartamento(Departamento* pDep);
    Departamento* getDepartamento();

    void setProximaDisciplina(Disciplina* pProxDisc);
    Disciplina* getProximaDisciplina();

    void setAnteriorDisciplina(Disciplina* pAnteDisc);
    Disciplina* getAnteriorDisciplina();

    void incluirAluno(Aluno* pAlu);
    void listaAlunos();
    void listaAlunosInvertido();
};

#endif
