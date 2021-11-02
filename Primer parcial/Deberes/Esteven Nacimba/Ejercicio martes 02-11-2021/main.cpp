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
#include "plantillaVolumen.h"
#include "volumen.cpp"



using namespace std;

int main(int argc, char** argv) {

	volumen<float> v1(9, 2);
	volumen<float> v2(8, 3);
	volumen<float> v3(7, 6);
	

	cout<<"\n El volumen es: "<<v1.getVolumen();
	cout<<"\n El volumen es: "<<v2.getVolumen();
	cout<<"\n El volumen es: "<<v3.getVolumen();
	


	
	return 0;
}
