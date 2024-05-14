#ifndef MENU_H
#define MENU_H 
#include "ListaAlunos.h"

class Menu {
private:
    static int countAlunos;
    ListaAlunos AlunosMenu = ListaAlunos(25);

public:
    Menu();
    ~Menu();

    void imprimirMenu();
    void selecionaOpcoesMenu();

    void cadastrarAluno();
    void gravarAlunos();
    void recuperarAlunos();
};

#endif