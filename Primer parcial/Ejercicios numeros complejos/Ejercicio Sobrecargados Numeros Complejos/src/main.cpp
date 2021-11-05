/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file OSOBRECARGA DE OPERADORES
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard GualotuÃ±a
 * @date: 2021-11-05
 * @date_modifiques: 2021-11-05
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "include/Complejo.hpp"

using namespace std;

int main() {

	Complejo<int> A(1,3),B(2,4);
	Complejo<int> C;

	//int x,y;
	cout <<" Suma de complejos "<<endl;
	C=A+B;
	cout<<" "<<A<<" + "<<B<<" = "<<C<<endl;
	C.setImg(0);
	C.setReal(0);

	cout <<" Resta de complejos "<<endl;
	C=A-B;
	cout<<" "<<A<<" - "<<B<<" = "<<C<<endl;

	cin.ignore();
	return 0;
}