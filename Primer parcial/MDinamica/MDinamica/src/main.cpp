/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a
 * Fecha de creacion: 11/11/2021 12:47 pm
 * Fecha de modificación:  ------
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/




#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"include\plantilla.h"
#include"include\funcion.cpp"


using namespace std;


int main(){
    int tam=0;
   // int *ptr=new int[10];
   //if(*ptr=realloc(*ptr,sizeof(int))    
    int *ptr=(int*)malloc(4*sizeof(int));

    cout<<"\nIngrese el tamano: ";
    cin>>tam;
    funcion<int> val;
    val.ingresar(ptr,tam);
    val.imprimir(ptr,tam);
    val.procesar(ptr,tam);
    val.imprimir(ptr,tam);  
    getch();
}
