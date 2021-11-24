#include "Nodo.h"

template<typename T>
Nodo<T>::Nodo(T val)
{
     this->valor=val;
     this->siguiente=NULL;
}

template<typename T>
Nodo<T>::~Nodo() 
{
}