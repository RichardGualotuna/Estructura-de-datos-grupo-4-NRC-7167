/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 17:15pm
 * Fecha de creacion: 01/11/2021 21 pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>

template <typename C>
void cambio(C &num1, C &num2)
{
        C aux;
        aux = num1;
        num1 = num2;
        num2 = aux;
}


