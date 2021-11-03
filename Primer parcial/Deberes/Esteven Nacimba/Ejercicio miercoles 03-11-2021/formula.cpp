
/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 
 * Fecha de creacion: 03/11/2021 15:00pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
formula<T>::formula(T n1, T n2, T n3)
{
	a=n1;
	b=n2;
	c=n3;
	
}

template <typename T>
T formula<T>::getFormula()
{

	int d;
	d = b*b-4*a*c;
	return d;	

}




