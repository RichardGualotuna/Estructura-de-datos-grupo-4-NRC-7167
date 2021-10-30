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
#include "plantillaDiv.h"
#include "division.cpp"


using namespace std;

int main(int argc, char** argv) {


	division<int> p1(9, 3);
	division<int> p2(100, 10);
	division<int> p3(8, 4);
	
	
	division<float> p4(9, 2);
	division<float> p5(8, 3);
	division<float> p6(7, 6);
	

	cout<<"\n La division es: "<<p1.getDiv();
	cout<<"\n La division es: "<<p2.getDiv();
	cout<<"\n La divisiones: "<<p3.getDiv();
	cout<<"\n La division es: "<<p4.getDiv();
	cout<<"\n La division es: "<<p5.getDiv();
	cout<<"\n La divisiones: "<<p6.getDiv();

	
	return 0;
}
