#include "Universidade.h"
#include <cstring>

// Construtor:
Universidade::Universidade(){
    strcpy(nome, ""); // Inicializa o nome com um string vazia
}

// Destrutor:
Universidade::~Universidade(){
}

void Universidade::setNome(const char* n){
    strcpy(nome, n);
}

char* Universidade::getNome(){
    return nome;
}