#ifndef MENU_H
#define MENU_H 

class Menu {
private:
    static int countAlunos;
    // static int countProfessores = 0;
    // static int countDisciplinas = 0;
    // static int countDepartamentos = 0;
    // static int countUniversidades = 0;

public:
    Menu();
    ~Menu();

    void imprimirMenu();
    void selecionaOpcoesMenu();

    void cadastrarAluno();
    // void cadastrarProfessor();
    // void cadastrarDisciplina();
    // void cadastrarDepartamento();
    // void cadastrarUniversidade();

    void gravarAlunos();
    // void gravarProfessores();
    // void gravarDisciplinas();
    // void gravarDepartamentos();
    // void gravarUniversidades();

    void recuperarAlunos();
    // void recuperarProfessores();
    // void recuperarDisciplinas();
    // void recuperarDepartamentos();
    // void recuperarUniversidades();
};

#endif