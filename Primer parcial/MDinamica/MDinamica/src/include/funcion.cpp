/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotuña
 * Fecha de creacion: 11/11/2021 12:47 pm
 * Fecha de modificaciÃ³n:  ------
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/


#include<iostream>

template<typename T>
void funcion <T> ::ingresar(T *p,T t){
    int i=0;
    for(i=0;i<t;i++)
    {
        printf("\nIngrese el valor: ");
        scanf("%d",*(&p)+i);
    }
}

template<typename T>
void funcion <T> ::imprimir(T *p,T t){
    int i;
    for(i=0;i<t;i++)
    {
        printf("\n\nValores ingresados: ");
        printf("%d",*(&(*p)));
        printf("\n");
        *(p++);//navega por la direccion del puntero extrayendo los valores
    }
}

template<typename T>
void funcion <T> ::procesar(T *p,T t){
    int i,e;
    printf("\nIngrese el escalar:");
    scanf("%d",&e);

    for(i=0;i<t;i++)
    {
        *p=(*(&(*p)))*e;
        *(p++);


    }
}
