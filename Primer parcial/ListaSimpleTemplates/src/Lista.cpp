#include "Lista.h"
using namespace std;


template<typename T>
bool Lista<T>::ListaVacia()
{
    return (this->primero==NULL);
}

template<typename T>
Lista<T>::Lista()
{
    this->primero=NULL;
    this->actual=NULL;
}

template<typename T>
void Lista<T>::insertarInicio(T v)
{
    Nodo<T> *nuevo=new Nodo<T>(v);
    if(ListaVacia()){
        this->primero=nuevo;
    }else{
        this->actual->siguiente=nuevo;
    }
    this->actual=nuevo;
}

template<typename T>
void Lista<T>::insertarFinal(T v)
{
    Nodo<T> *nuevo=new Nodo<T>(v);
    if(ListaVacia()){
    	this->actual->siguiente=nuevo;
        
    }else{
        this->primero=nuevo;
    }
    this->actual=nuevo;
   
}


template<typename T>
void Lista<T>::buscarNodo()
{
    Nodo<T> *nuevo=new Nodo<T>(v);
    nuevo=primero;
    int nodoBuscar=0,encontrado=0;
    printf("\nIngresar valor a buscar: ");
    scanf("%d",&nodoBuscar);
    if(primero!=NULL){
    	while(nuevo!=NULL && encontrado!=1){
    		
    		if(nuevo->valor==nodoBuscar){
    			printf("\nEl nodo  %d encontrado", nodoBuscar);
    			encontrado=1;
    			
			} else{
				if(encontrado==0)
			{
				printf("\n No encontrado");
			}
			}
			nuevo=nuevo->siguiente;
			
			
			
    		
    		
		}   
    }else{
        printf("\nLista Vacia");
    }

   
}




template<typename T>

void Lista<T>::mostrar(){
    Nodo<T> *tmp=this->primero;
    while(tmp){
     cout<<tmp->valor<<"-->";
     tmp=tmp->siguiente;
    }
        cout<<"NULL\n";
    } 

template<typename T>
Lista<T>::~Lista() {}
