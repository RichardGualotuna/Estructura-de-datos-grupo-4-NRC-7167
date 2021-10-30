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
#include "plantilla.h"
#include "producto.cpp"


using namespace std;

int main(int argc, char** argv) {


	producto<int> p1(8, 10);
	producto<float> p2(8.1, 4.4);
	producto<double> p3(8.1, 2);
	

	std::cout<<"\n La multiplicacion es: "<<p1.prod();
	std::cout<<"\n La multiplicacion es: "<<p2.prod();
	std::cout<<"\n La multiplicacion es: "<<p3.prod();

	
	return 0;
}
