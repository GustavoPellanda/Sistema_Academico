#include "Menu.h"
#include "Aluno.h"
#include <cstring>
#include <iostream>

int Menu::countAlunos = 0;

Menu::Menu(){

}

Menu::~Menu(){
    
}

void Menu::imprimirMenu(){
    cout << "Menu:" << endl;
    cout << "1. Cadastrar aluno" << endl;
    cout << "2. Gravar alunos" << endl;
    cout << "3. Recuperar alunos" << endl;
    cout << "4. Sair" << endl;
    cout << "Escolha uma opção: ";
}

void Menu::selecionaOpcoesMenu(){
    int opcao;
    cin >> opcao;
    switch(opcao){
        case 1:
            cadastrarAluno();
            break;
        case 2:
            gravarAlunos();
            break;
        case 3:
            recuperarAlunos();
            break;
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
    }
}

void Menu::cadastrarAluno(){
    std::string nomeNovoAluno;
    int raNovoAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> nomeNovoAluno;
    std::cout << "Digite o registro acadêmico do aluno: ";
    std::cin >> raNovoAluno;
    
    Aluno* pNovoAluno = new Aluno();
    countAlunos++;
    
    pNovoAluno->setNome(const_cast<char*>(nomeNovoAluno.c_str()));
    pNovoAluno->setRegistroAcademico(raNovoAluno);
}

void Menu::gravarAlunos(){
    // Todo
}

void Menu::recuperarAlunos(){
    // Todo
}