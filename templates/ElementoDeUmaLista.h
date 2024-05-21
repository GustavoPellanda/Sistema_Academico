#ifndef _ELEMENTODEUMALISTA_H_
#define _ELEMENTODEUMALISTA_H_

template<class TIPO>
class ElementoLista{
private:
    TIPO* pInfoElemento;    
    ElementoLista<TIPO>* pProximoElemento;
    ElementoLista<TIPO>* pAnteriorElemento;

public:
    ElementoLista();
    ~ElementoLista();

    void setInfo(TIPO* pInfoEle);
    TIPO* getInfo();

    void setProximoElemento(ElementoLista<TIPO>* pProxEle);
    ElementoLista<TIPO>* getProximoElemento();

    void setAnteriorElemento(ElementoLista<TIPO>* pAnteEle);
    ElementoLista<TIPO>* getAnteriorElemento();
};

template<class TIPO>
ElementoLista<TIPO>::ElementoLista(){
    pInfoElemento = nullptr;
    pProximoElemento = nullptr;
    pAnteriorElemento = nullptr;
}

template<class TIPO>
ElementoLista<TIPO>::~ElementoLista(){
    delete pInfoElemento;
}

template<class TIPO>
void ElementoLista<TIPO>::setInfo(TIPO* pInfoEle){
    pInfoElemento = pInfoEle;
}

template<class TIPO>
TIPO* ElementoLista<TIPO>::getInfo(){
    return pInfoElemento;
}

template<class TIPO>
void ElementoLista<TIPO>::setProximoElemento(ElementoLista<TIPO>* pProxEle){
    pProximoElemento = pProxEle;
}

template<class TIPO>
ElementoLista<TIPO>* ElementoLista<TIPO>::getProximoElemento(){
    return pProximoElemento;
}

template<class TIPO>
void ElementoLista<TIPO>::setAnteriorElemento(ElementoLista<TIPO>* pAnteEle){
    pAnteriorElemento = pAnteEle;
}

template<class TIPO>
ElementoLista<TIPO>* ElementoLista<TIPO>::getAnteriorElemento(){
    return pAnteriorElemento;
}

#endif