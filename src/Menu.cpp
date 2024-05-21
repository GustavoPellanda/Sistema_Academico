#include "Menu.h"
#include "Aluno.h"
#include "ElementoDeUmaLista.h"
#include "ListaAlunos.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>

int Menu::countAlunos = 0;

Menu::Menu(){

}

Menu::~Menu(){
    
}

void Menu::imprimirMenu(){
    cout << endl;
    cout << "Menu:" << endl;
    cout << "1. Cadastrar aluno" << endl;
    cout << "2. Gravar alunos" << endl;
    cout << "3. Recuperar alunos" << endl;
    cout << "4. Sair" << endl;
    cout << "Escolha uma opcao: ";
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
            exit(0);
            break;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
    }
}

void Menu::cadastrarAluno(){
    std::string nomeNovoAluno;
    int raNovoAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> nomeNovoAluno;
    std::cout << "Digite o registro academico do aluno: ";
    std::cin >> raNovoAluno;
    
    Aluno* pNovoAluno = new Aluno();
    countAlunos++;
    
    pNovoAluno->setNome(const_cast<char*>(nomeNovoAluno.c_str()));
    pNovoAluno->setRegistroAcademico(raNovoAluno);

    AlunosMenu.incluirAluno(pNovoAluno);
}

void Menu::gravarAlunos(){
    ofstream GravadorAlunos("alunos.dat", ios::out);
    
    if(!GravadorAlunos){
        cerr << "Arquivo nao pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }
    
    Aluno* pAluno = NULL;
    ElementoLista<Aluno>* pElementoAluno = NULL;
    
    // Percorre a lista de elementos alunos, buscando o aluno em si para cada item:
    pElementoAluno = AlunosMenu.getPrimeiroAluno();
    while(pElementoAluno != NULL){
        pAluno = pElementoAluno->getInfo();
        GravadorAlunos 
            << pAluno->getID() << " "
            << pAluno->getRegistroAcademico() << " "
            << pAluno->getNome() << endl;
       pElementoAluno = pElementoAluno->getProximoElemento();
    }
    
    GravadorAlunos.close();
}

void Menu::recuperarAlunos(){
    ifstream RecuperadorAlunos("alunos.dat", ios::in);

    if(!RecuperadorAlunos){
        cerr << "Arquivo nao pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    // FAZER: função para limpar a lista

    while (!RecuperadorAlunos.eof()) {
        Aluno* pAluno = NULL; 
        int ID;
        int RA;
        string nome; 
        RecuperadorAlunos >> ID >> RA >> nome;
        
        if(!nome.empty()){
            pAluno = new Aluno();
            pAluno->setID(ID);
            pAluno->setRegistroAcademico(RA);
            pAluno->setNome(nome);
            AlunosMenu.incluirAluno(pAluno);
        }
    }

    RecuperadorAlunos.close();
    AlunosMenu.listarAlunos();
}