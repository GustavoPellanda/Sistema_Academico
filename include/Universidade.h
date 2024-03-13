#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

class Universidade {
private:
    char nome[30];
public:
    Universidade();
    ~Universidade();
    void setNome(const char* n);
    char* getNome();
};

#endif