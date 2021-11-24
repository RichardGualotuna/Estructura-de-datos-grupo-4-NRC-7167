#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "Nodo.cpp"

using namespace std;

template<typename T>
class Lista{
    private:
        Nodo<T> *primero;
        Nodo<T> *actual;
        T v;       
        bool ListaVacia();           
    public:
        Lista();
        ~Lista();
        void insertarInicio(T);
        void insertarFinal(T);
        void buscarNodo();
        void mostrar();        

};
#endif 
