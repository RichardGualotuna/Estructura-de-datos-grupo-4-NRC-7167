/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba
 * Fecha de creacion: 30/10/2021 15:38 pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>

template <typename P>
division<P>::division(P n1, P n2)
{
	num1=n1;
	num2=n2;
	
}

template <typename P>
P division<P>::getDiv()
{
	return num1/num2;
	
}

