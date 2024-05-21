#ifndef LISTA_H
#define LISTA_H

#include "ElementoDeUmaLista.h"
#include <iostream>

using namespace std;

template<class TIPO>
class Lista{
private:
    int maxElementos;
    int countElementos;

    ElementoLista<TIPO> *pPrimeiroElemento;
    ElementoLista<TIPO> *pUltimoElemento;

public:
    Lista(int numEle);
    Lista();
    ~Lista();

    inicializarLista(int numEle);
    
    ElementoLista<TIPO>* getPrimeiroElemento();

    void incluirElemento(ElementoLista<TIPO>* pEle);
    void listarElementos();
};

template<class TIPO>
Lista<TIPO>::Lista(){
    inicializarLista(100, 0);
}

template<class TIPO>
Lista<TIPO>::Lista(int maxEle){
    inicializarLista(maxEle, 0);
}

template<class TIPO>
Lista<TIPO>::inicializarLista(int maxEle, countEle){
    maxElementos = maxEle;
    countElementos = countEle;
    pPrimeiroElemento = nullptr;
    pUltimoElemento = nullptr;
}

template<class TIPO>
Lista<TIPO>::~Lista(){

    ElementoLista<TIPO>* pAux1 = pPrimeiroElemento, *pAux2;
    pAux2 = pAux1;

    // Deleta um elemento e segue para o próximo da lista:
    while(pAux1 != nullptr){
        pAux2 = pAux1->getProximoElemento();
        delete(pAux1);
        pAux1 = pAux2;
    }

    pPrimeiroElemento = nullptr;
    pUltimoElemento = nullptr;
}

template<class TIPO>
ElementoLista<TIPO>* Lista<TIPO>::getPrimeiroElemento(){
    return pPrimeiroElemento;
}

template<class TIPO>
void Lista<TIPO>::incluirElemento(ElementoLista<TIPO>* pEle){
    if(pEle == nullptr) return;
    if(countElementos >= maxElementos){
        cout << "Limite de elementos na lista já atingido!" << endl;
        return;
    }

    if(pPrimeiroElemento == nullptr){ // Lista vazia
        pPrimeiroElemento = pAux;
        pUltimoElemento = pAux;
    }

    else{ // Insere o novo objeto na lista:
        pUltimoElemento->setProximoElemento(pAux);
        pAux->setAnteriorElemento(pUltimoElemento);
        pUltimoElemento = pAux;
    }

    countElementos++;
    pEle->getInfo()->setID(countElementos);
}

#endif