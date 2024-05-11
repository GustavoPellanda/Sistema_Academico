#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include "Departamento.h"
#include "ListaAlunos.h"
#include "Aluno.h"

class Disciplina{
private:
    int id;
    char nome[150];
    char areaConhecimento[150];
    
    Departamento* pDepartamento;

    // Referências à lista de disciplinas:
    Disciplina* pProximaDisciplina;
    Disciplina* pAnteriorDisciplina;

    // Lista de alunos da disciplina:
    ListaAlunos* pListaAlunos;

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
    void listarAlunos();
    // void listarAlunosInvertido();
};

#endif
