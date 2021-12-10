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
#include "Nodo.h"
#include "Factura.h"
#include <iostream>
#include <conio.h>
#include<fstream>
#include<ctype.h>
#include<string.h>
using namespace std;
int validarReal(char numero[10]);
template<typename T>
class ListaCircularDoble {
    public:
        ListaCircularDoble();
        void calcular();
        bool eliminar(int);
        void mostrar();
        void guardar();
    private:
        Nodo<T> *primero;
        Nodo<T> *ultimo;
        
};

template<typename T>
ListaCircularDoble<T>::ListaCircularDoble() {
    primero = NULL;
}

int validarReal(char numero[10]){

	int i=0,v=0,j;
	j=strlen(numero);
	
	while(i<j &&v==0){
		if(isdigit(numero[i])!=0){
			i++;
		}else{
			v=1;
		}
	}
	return v;
	
}
template<typename T>
void ListaCircularDoble<T>::guardar(){
	Nodo<T> *NuevoC= new Nodo<T>(); 
	NuevoC=primero;
	ofstream archivo;  
	archivo.open("C:/Users/PC-Home/Documents/Estructura de Datos/factura/archivo.txt", ios::app); 
    if ( ! archivo ) {
        cout << "No se pudo abrir el archivo" <<endl;
        return ;
    }
    
	do {
	archivo<<"\n-----FACTURA-------- "<<endl;
	archivo<<"\n|SUBTOTAL ES:"<<NuevoC->valor.subtotal<<endl;
	archivo<<"\n|IVA(12%): "<<NuevoC->valor.iva<<endl;
	archivo<<"\n|TOTAL A PAGAR CON IVA: "<<NuevoC->valor.descuento<<endl;
	archivo<<"\n|DESCUENTO: "<<NuevoC->valor.total<<endl;
	archivo<<"\n|TOTAL A PAGAR IVA Y DESCUENTO: "<<NuevoC->valor.totalPagar<<endl;
	
    NuevoC=NuevoC->getSiguiente();
	} while( NuevoC != primero);
}
	
template<typename T>
void ListaCircularDoble<T>::calcular(){
	char dat[2];
	float v=0;
	float validar;
	
	Nodo<T> *nuevo= new Nodo<T>(); 
	cout<<"\n**********************"<<endl; 
	cout<<"\nTABLA DE CALCULO"<<endl;
	cout<<"\nINGRESE SUBTOTAL: ";
	cin>>dat;	
	v=validarReal(dat);
	validar = atof(dat);
	nuevo->valor.subtotal=validar;
	cout<<endl;
	if(primero == NULL){
        primero = nuevo;
        primero->setSiguiente(primero);
        primero->setAnterior(primero);
    }else{
    	if(primero->getSiguiente() == primero){
    		ultimo = nuevo;
        	ultimo->setSiguiente(primero);
        	ultimo->setAnterior(primero);
        	primero->setSiguiente(ultimo);
        	primero->setAnterior(ultimo);
    	} else {
        	ultimo->setSiguiente(nuevo);
       		nuevo->setAnterior(ultimo);
        	nuevo->setSiguiente(primero);
        	primero->setAnterior(nuevo);
        	ultimo = nuevo;
 		}
    	
	}
	nuevo->valor.subtotal=(nuevo->valor.subtotal);
	nuevo->valor.iva=(nuevo->valor.subtotal)*0.12;	
		if(nuevo->valor.subtotal >1000.01)
		{
			nuevo->valor.descuento=(nuevo->valor.subtotal)*0.15;
		
		}else{
			if (nuevo->valor.subtotal >100.01)
			{
				nuevo->valor.descuento=(nuevo->valor.subtotal)*0.10;
			}else{
				nuevo->valor.descuento=(nuevo->valor.subtotal)*0.05;
			}
		}
		nuevo->valor.total=(nuevo->valor.subtotal-nuevo->valor.descuento);
		nuevo->valor.totalPagar=(nuevo->valor.iva+nuevo->valor.subtotal)-nuevo->valor.descuento;
}

template<typename T>
void ListaCircularDoble<T>::mostrar(){
    if(primero == NULL){
        cout << "lista  vacia";
        return;
    }
    Nodo<T> *auxiliar = primero;
    auxiliar = auxiliar->getSiguiente();
    cout<<endl;
    do{
    	cout<<"\n\n";
    	auxiliar = auxiliar->getSiguiente();
    	cout<<"\nFACTURA"<<endl;
    	cout<<"\n**********************"<<endl;
		cout<<"\nSUBTOTAL ES:"<<auxiliar->valor.subtotal<<endl;
		cout<<"\nIVA(12%): "<<auxiliar->valor.iva<<endl;
		cout<<"\nTOTAL  A PAGAR CON IVA : "<<auxiliar->valor.total<<endl;
		cout<<"\nDESCUENTO: "<<auxiliar->valor.descuento<<endl;
		cout<<"\nTOTAL A PAGAR IVA Y DESCUENTO : "<<auxiliar->valor.totalPagar<<endl;
		cout<<"\n**********************"<<endl;       
    }while(auxiliar->getSiguiente() != primero);
 
}

