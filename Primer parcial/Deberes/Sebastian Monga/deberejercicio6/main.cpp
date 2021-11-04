/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Punto
 * @author:  Sebastian Monga
 * @date: 2021-11-03
 * @date_modifiques: 2021-11-03
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "funcion.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	punto<int,char> obj(5,'a');
	obj.imprimir();
	
	return 0;
}
