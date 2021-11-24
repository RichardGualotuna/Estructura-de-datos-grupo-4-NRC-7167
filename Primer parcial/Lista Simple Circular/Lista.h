#include <iostream>
#include "nodo.h"
using namespace std;
template<class T>
class Lista{
	private:
 		nodo<T> *primero;
 		nodo<T> *actual;
 		
	public:
		Lista();
		void insertarInicio(T);
		void insertarFin(T);
		void borrarInicio();
		void borrarFin();
		bool vacia();
		void mostrar();
};
template<class T>
void Lista<T>::insertarInicio(T v){
	nodo<T> * nuevo = new nodo<T>(v),*aux;
	if(vacia()){
		primero=nuevo;
		nuevo->siguiente=nuevo;
	}else{
		nuevo->siguiente=primero;
		aux=primero;
		while(aux->siguiente !=primero) 
			aux=aux->siguiente;
			aux->siguiente=nuevo;
			primero=nuevo;
		
	}
}
template <class T>
void Lista<T>::insertarFin(T v){
	nodo<T> * nuevo = new nodo<T>(v),*aux;
	if(vacia()){
		primero=nuevo;
		nuevo->siguiente=nuevo;
	}else{
		aux= primero;
		while(aux->siguiente != primero)
		aux=aux->siguiente;
		aux->siguiente=nuevo;
		nuevo->siguiente=primero;
	}	
}
template <class T>
void Lista<T>::borrarInicio(){
	nodo<T> *aux1, *aux2;
	if(!vacia())
	{
		if(primero->siguiente=primero){
			delete primero;
			primero=0;
		}else{
		aux1=primero;
		aux2=aux1->siguiente;
		while(aux2->siguiente!=primero)
		
			aux2=aux2->siguiente;
			aux2->siguiente=aux1->siguiente;
			primero=primero->siguiente;
			delete aux1;
		}
	}else {
		cout<<"Lista Vacia"<<endl;
	}
}
template <class T>
void Lista<T>::borrarFin(){
	nodo<T> *aux1, *aux2;
	if(!vacia()){
		if(primero->siguiente=primero)
		{
			delete primero;
			primero=0;
		}else if(primero->siguiente->siguiente=primero)
		{
			aux1=primero->siguiente;
			primero->siguiente=primero;
			delete aux1;
		}else{
			aux1=primero->siguiente;
			while(aux1->siguiente->siguiente!=primero)
			aux1 =aux1->siguiente;
			aux2=aux1->siguiente;
			aux1->siguiente=aux2->siguiente;
			delete aux2;
		}
	}
}
template <class T>
void Lista<T>::mostrar(){
	nodo<T> *aux=primero;
	if(!vacia()){
		do{
			cout<<aux->valor;
			aux=aux->siguiente;
		}while(aux!=primero);
	}
}
template<class T>
bool Lista<T>::vacia(){
	return(primero==0);
}
