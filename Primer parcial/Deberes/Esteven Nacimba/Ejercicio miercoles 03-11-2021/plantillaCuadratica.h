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

template <typename T>
class formula{
	public:
		formula(T, T,T);
		T getFormula();
	
	private:
		T a,b,c;
	
};
