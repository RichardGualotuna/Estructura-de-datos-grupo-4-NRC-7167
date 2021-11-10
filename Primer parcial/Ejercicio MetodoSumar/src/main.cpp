/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file LEER UN ARCHIVO Y SUMAR SU CONTENIDO
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard GualotuÃ±a
 * @date: 2021-11-08
 * @date_modifiques: 2021-11-09
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <stdlib.h>
#include "include/Funcion.hpp"
#include <fstream>
#define N 10

int main() {

    int number[N], valor, cont=0, x=0;
	Funciones f;
    FILE *file;
    file=fopen("valores.txt","r");

    while (fscanf(file, "%d", &valor)==1)
    {
        number[cont] = valor;
        cont++;
    }

    if(feof(file)) {
        std::cout<<"Proceso exitoso";
        std::cout<<"\nElementos del archivo: ";
        int s=0;
        for(int i=0;i<N;i++)
	    {
            std::cout<<number[i]<<"    "; 
		    s=f.Sumar(number[i]);
		    x+=s;
	    }
    } else {
        std::cout<<"Error al leer los datos";
    }
    std::cout<<"\n\nSuma elementos enteros: "<<x;

	return 0;
	
}