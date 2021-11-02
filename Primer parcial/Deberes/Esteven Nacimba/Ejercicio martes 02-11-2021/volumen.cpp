
/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 
 * Fecha de creacion: 02/10/2021 15:00pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <math.h>

template <typename T>
volumen<T>::volumen(T n1, T n2)
{
	num1=n1;
	num2=n2;
	
}

template <typename T>
T volumen<T>::getVolumen()
{
	return (2*(3.14*num1*num2)+3.14*num1*num1);
	
}

