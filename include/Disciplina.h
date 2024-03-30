#ifndef DISCIPLINA_H
#define DISCIPLINA_H

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
};

#endif
