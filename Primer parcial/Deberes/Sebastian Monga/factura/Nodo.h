/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Factura
 * @author:  Sebastian Monga
 * @date: 2021-12-4
 * @date_modifiques: 2021-12-06
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once
#include<stdlib.h>
#include"Factura.h"
template<typename T>
class Nodo {
    private:
       	int val;

        Nodo *siguiente;
        Nodo *anterior;

    public:
		Factura<float> valor;
		Nodo(int);
        Nodo();
        int getVal();
        void setVal(int);
        Nodo *getSiguiente();
        void setSiguiente(Nodo *);
        Nodo *getAnterior();
        void setAnterior(Nodo *);
};

template<typename T>
Nodo<T>::Nodo(){
    
    siguiente = siguiente;
    anterior = anterior;
}
template<typename T>
Nodo<T>::Nodo(int _val){
    val=_val;
    siguiente = siguiente;
    anterior = anterior;
}
template<typename T>
int Nodo<T>::getVal(){
    return val;
}
template<typename T>
void Nodo<T>::setVal(int _val){
   val = _val;
}
template<typename T>
Nodo<T> *Nodo<T>::getSiguiente(){
    return siguiente;
}
template<typename T>
void Nodo<T>::setSiguiente(Nodo *_siguiente){
    siguiente = _siguiente;
}
template<typename T>
Nodo<T> *Nodo<T>::getAnterior(){
    return anterior;
}
template<typename T>
void Nodo<T>::setAnterior(Nodo *_anterior){
    anterior = _anterior;
}
