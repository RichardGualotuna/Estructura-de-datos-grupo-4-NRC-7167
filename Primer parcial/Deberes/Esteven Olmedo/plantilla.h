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
class producto{
	public:		
		producto(H, H);
		H prod();
	
	private:
		H num1;
		H num2;									
};
