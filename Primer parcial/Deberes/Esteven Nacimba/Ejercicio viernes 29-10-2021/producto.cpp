/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba
 * Fecha de creacion: 20/10/2021 19:42 pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/


#include <iostream>
#include <stdlib.h>

template <typename H>
producto<H>::producto(H n1, H n2)
{
	num1=n1;
	num2=n2;
	
}

template <typename H>
H producto<H>::prod()
{
	return num1*num2;
	
}


